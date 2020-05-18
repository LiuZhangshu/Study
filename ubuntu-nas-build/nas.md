# nas
## dictionary
dictionary | usage | type | second-level directory
:---:|:---:|:-----:|:---:
/data/nasdata/postgresql | pg        | service   | /data/nasdata/postgresql/data
/data/nasdata/nextcloud  | nextcloud | service   | /data/nasdata/nextcloud/html
/data/nasdata/jellyfin   | jellyfin  | service   | /data/nasdata/jellyfin/config /data/nasdata/jellyfin/cache /data/nasdata/jellyfin/media
/data/nasdata/movie      | movie     | data      |
/data/nasdata/teleplay   | teleplay  | data      |
/data/nasdata/workspace  | work,code | work file | 


```bash 
mkdir -p /data/nasdata/postgresql/data /data/nasdata/nextcloud/html /data/nasdata/jellyfin/config /data/nasdata/jellyfin/cache /data/nasdata/movie  /data/nasdata/teleplay /data/nasdata/workspace

ln -s /data/nasdata/movie /data/nasdata/jellyfin/media/movie

ln -s /data/nasdata/teleplay /data/nasdata/jellyfin/media/teleplay
```
## port
| service | port |
|:-------:|:----:|
|postgres | 5432 |
|pgadmin  | 8081 |
|nextcloud| 8082 |
|jellyfin | 8096 |
|cockpit  | 9090 |
|postgis  | 15432|
|jupyter  | 8888 |
|nginx    | 8080 |
|calibre  | 8083 | 

## service
1. postgres
    ```
    docker run -itd --name postgresql -v  /data/nasdata/postgresql/data:/var/lib/postgresql/data --restart always -p 5432:5432 postgres:9.6.15 

    ```
    
2. pgadmin
   ```bash
   docker run -p 8081:80 --name pgadmin4   -e "PGADMIN_DEFAULT_EMAIL=1149733622@qq.com"      -e "PGADMIN_DEFAULT_PASSWORD=fast*123"   -d dpage/pgadmin4
   ```
   
3. next cloud
    ```bash
    docker run -itd --name nextcloud --restart always -p 8082:80 -v /data/nasdata/nextcloud/html:/var/www/html  nextcloud
    ```
    
4. jellyfin
   ```bash 
   docker run -itd --name jellyfin -p 8096:8096 -v /data/nasdata/jellyfin/config:/config -v /data/nasdata/jellyfin/cache:/cache -v /data/nasdata/jellyfin/media:/media  jellyfin/jellyfin
   ```
   
   ```
   docker run -itd --name jellyfin -p 8096:8096 -v /data/nasdata/jellyfin/config:/config -v /data/nasdata/jellyfin/cache:/cache -v /data/nasdata/jellyfin/media:/media --device=/dev/dri/renderD128 --restart unless-stopped  jellyfin/jellyfin
   ```
   
   
   
5. kodi

   ```bash
   sudo apt-get install kodi 
   ```

6. aria2
   ```bash 
   sudo apt-get install aria2
   sudo mkdir /etc/aria2    #新建文件夹 
   sudo touch /etc/aria2/aria2.session    #新建session文件
   sudo chmod 777 /etc/aria2/aria2.session    #设置aria2.session可写 
   sudo vi /etc/aria2/aria2.conf    #创建配置文件
   ```
   ```
   dir=/home/username/Desktop/Downloads 
   disable-ipv6=true
   
   #打开rpc的目的是为了给web管理端用
   enable-rpc=true
   rpc-allow-origin-all=true
   rpc-listen-all=true
   #rpc-listen-port=6800
   #断点续传
   continue=true
   input-file=/etc/aria2/aria2.session
   save-session=/etc/aria2/aria2.session
   
   #最大同时下载任务数
   max-concurrent-downloads=20
   save-session-interval=120
   
   # Http/FTP 相关
   connect-timeout=120
   #lowest-speed-limit=10K
   #同服务器连接数
   max-connection-per-server=10
   #max-file-not-found=2
   #最小文件分片大小, 下载线程数上限取决于能分出多少片, 对于小文件重要
   min-split-size=10M
   
   #单文件最大线程数, 路由建议值: 5
   split=10
   check-certificate=false
   #http-no-cache=true
   ```
   ```
    https://blog.csdn.net/yang_sx/article/details/90416683#Aria2_2
   ```

7. transmisson
   ```bash
   docker create \
    --name=transmission \
    -e PUID=1000 \
    -e PGID=1000 \
    -e TZ=Asia/Shanghai \
    -e TRANSMISSION_WEB_HOME=/combustion-release/  \
    -e USER=lionmatrix  \
    -e PASS=fast*123  \
    -p 9091:9091 \
    -p 51413:51413 \
    -p 51413:51413/udp \
    -v /data2/transmission/config:/config \
    -v /data2/transmission/downloads:/downloads \
    -v /data2/transmission/watch:/watch \
    --restart unless-stopped \
    linuxserver/transmission
   ```

8. cockpit
   ```
   sudo apt-get install cockpit
   ```
9. postgis
   ```
   docker run --name some-postgis -p 15432:5432 -e POSTGRES_PASSWORD=mysecretpassword -d mdillon/postgis
   ```
10. calibre 
    ```
    docker create \
      --name=calibre-web \
      -e PUID=1000 \
      -e PGID=1000 \
      -e TZ=Asia/Shanghai \
      -p 8083:8083 \
      -v /data2/ebook/config:/config \
      -v /data2/ebook/books:/books \
      --restart unless-stopped \
      linuxserver/calibre-web
   ```