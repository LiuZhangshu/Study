# Ubuntu 配置
## 硬盘挂载
1. 分区
```bash
lionmatrix@mortar:/$ sudo parted /dev/sda
GNU Parted 3.2
Using /dev/sda
Welcome to GNU Parted! Type 'help' to view a list of commands.
(parted) print
Model: ATA WDC WD40EJRX-89T (scsi)
Disk /dev/sda: 4001GB
Sector size (logical/physical): 512B/4096B
Partition Table: gpt
Disk Flags:

Number  Start   End     Size    File system  Name     Flags
 1      1049kB  4001GB  4001GB               primary

(parted) rm 1
(parted) print
Model: ATA WDC WD40EJRX-89T (scsi)
Disk /dev/sda: 4001GB
Sector size (logical/physical): 512B/4096B
Partition Table: gpt
Disk Flags:

Number  Start  End  Size  File system  Name  Flags

(parted) mklabel gpt
Warning: The existing disk label on /dev/sda will be destroyed and all data on this disk will be lost. Do you want to continue?
Yes/No? yes
(parted) mkpart logical 0% 100%
(parted) print
Model: ATA WDC WD40EJRX-89T (scsi)
Disk /dev/sda: 4001GB
Sector size (logical/physical): 512B/4096B
Partition Table: gpt
Disk Flags:

Number  Start   End     Size    File system  Name     Flags
 1      1049kB  4001GB  4001GB               logical

(parted) quit
Information: You may need to update /etc/fstab.
```
2. 格式化：
```bash
lionmatrix@mortar:/$ sudo mkfs.ext4 -F /dev/sda1
mke2fs 1.44.1 (24-Mar-2018)
Creating filesystem with 976754176 4k blocks and 244195328 inodes
Filesystem UUID: f382db28-bfbd-4217-9b09-f43912a64b68
Superblock backups stored on blocks:
        32768, 98304, 163840, 229376, 294912, 819200, 884736, 1605632, 2654208,
        4096000, 7962624, 11239424, 20480000, 23887872, 71663616, 78675968,
        102400000, 214990848, 512000000, 550731776, 644972544

Allocating group tables: done
Writing inode tables: done
Creating journal (262144 blocks): done
Writing superblocks and filesystem accounting information: done
```
```bash
sudo vi /etc/fstab

# 最后一行添加   /dev/sda1 /data ext4 defaults 0 0

```
3. 硬盘健康度
## 配置国内镜像源
```shell
sudo vi /etc/apt/sources.list
```
```
# 默认注释了源码镜像以提高 apt update 速度，如有需要可自行取消注释
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-updates main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-updates main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-backports main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-backports main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-security main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-security main restricted universe multiverse

# 预发布软件源，不建议启用
# deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-proposed main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ bionic-proposed main restricted universe multiverse

```
```
sudo apt-get update
```
## 安装teamviewer
```shell
wget https://tv-static-net.oss-cn-beijing.aliyuncs.com/download/tv14/linux/teamviewer_14.2.8352_amd64.deb
sudo dpkg -i ./teamviewer_14.2.8352_amd64.deb 
sudo apt-get install  -y -f 
sudo dpkg -i ./teamviewer_14.2.8352_amd64.deb 
```
## 输入法
```
wget http://cdn2.ime.sogou.com/dl/index/1524572264/sogoupinyin_2.2.0.0108_amd64.deb?st=tOUpXjXRAA_lzcVUVZYXCA&e=1556002525&fn=sogoupinyin_2.2.0.0108_amd64.deb
sudo dpkg -i ./sogoupinyin_2.2.0.0108_amd64.deb 
sudo apt-get install  -y -f 
sudo dpkg -i ./sogoupinyin_2.2.0.0108_amd64.deb 
```

## git
```
sudo apt-get install -y git
```
## deepin wine
```
git clone https://github.com/wszqkzqk/deepin-wine-ubuntu.git
cd   deepin-wine-ubuntu/
sudo  ./install.sh 


```
## qq,wechat,foxmal,wps,baidu.pan,foxmail,thunderspeed_7
```
wget https://mirrors.aliyun.com/deepin/pool/non-free/d/deepin.com.qq.im/deepin.com.qq.im_8.9.19983deepin23_i386.deb
wget https://mirrors.aliyun.com/deepin/pool/non-free/d/deepin.com.wechat/deepin.com.wechat_2.6.2.31deepin0_i386.deb
wget https://mirrors.aliyun.com/deepin/pool/non-free/d/deepin.com.foxmail/deepin.com.foxmail_7.2deepin3_i386.deb
wget https://mirrors.aliyun.com/deepin/pool/non-free/d/deepin.com.baidu.pan/deepin.com.baidu.pan_5.7.3deepin0_i386.deb
wget https://mirrors.aliyun.com/deepin/pool/non-free/d/deepin.com.thunderspeed/deepin.com.thunderspeed_7.10.35.366deepin18_i386.deb
```
## 有道词典
```
wget http://codown.youdao.com/cidian/linux/youdao-dict_1.1.0-0-deepin_amd64.deb
sudo dpkg -i youdao-dict_1.1.0-0-deepin_amd64.deb 
sudo apt-get install  -y -f 
sudo dpkg -i youdao-dict_1.1.0-0-deepin_amd64.deb 
sudo apt install python-xlib
```

## 桌面美化
### tweaks
```
sudo apt install -y gnome-tweak-tool
sudo apt-get install -y gnome-shell-extensions
```
### TopIcons
```
git clone https://github.com/phocean/TopIcons-plus.git
cd TopIcons-plus
make install
```

### hide-top-bar
```
sudo apt-get install gnome-shell-extension-autohidetopbar
```

## anacoda
```
https://mirrors.tuna.tsinghua.edu.cn/anaconda/archive/Anaconda3-5.2.0-Linux-x86_64.sh
```
## vscode
```
https://vscode.cdn.azure.cn/stable/51b0b28134d51361cf996d2f0a1c698247aeabd8/code_1.33.1-1554971066_amd64.deb
```
## vim
```
sudo apt install vim 
```
## ssh
```
sudo apt install openssh-server
```
## make
```
sudo apt install build-essential
```
## wps
```
wget https://wdl1.cache.wps.cn/wps/download/ep/Linux2019/8392/wps-office_11.1.0.8392_amd64.deb
sudo dpkg -i wps-office_11.1.0.8392_amd64.deb
```
## docker 
```bash
sudo apt-get install -y docker.io
systemctl enable docker
systemctl start docker
```
```bash
#创建docker组
weiyj@ubuntu18:~$ sudo groupadd docker
groupadd: group 'docker' already exists
#将当前用户加入docker组
weiyj@ubuntu18:~$ sudo gpasswd -a ${USER} docker
Adding user weiyj to group docker
#重启docker服务
weiyj@ubuntu18:~$ sudo service docker restart
#刷新docker组成员
weiyj@ubuntu18:~$ newgrp - docker
#再试试命令^_^
weiyj@ubuntu18:~$ docker images
REPOSITORY          TAG                 IMAGE ID            CREATED             SIZE

```
## java
```
 sudo apt install openjdk-8-jre-headless 
 sudo gpasswd -a 用户名 docker
```
```bash
tar -xzvf jdk-8u221-linux-x64.tar.gz
sudo  mv ./jdk1.8.0_221/ /usr/local/
vim ~/.bashrc

export JAVA_HOME=/usr/local/jdk1.8.0_221
export JRE_HOME=${JAVA_HOME}/jre
export CLASSPATH=.:${JAVA_HOME}/lib:${JRE_HOME}/lib
export PATH=.:${JAVA_HOME}/bin:$PATH

```
## idea
```
wget https://download.jetbrains.8686c.com/idea/ideaIU-2019.1.1-no-jbr.tar.gz
```
##  FoxitReader
```
 wget http://cdn01.foxitsoftware.com/pub/foxit/reader/desktop/linux/2.x/2.4/en_us/FoxitReader.enu.setup.2.4.4.0911.x64.run.tar.gz
```

## pycharm
```
wget https://download.jetbrains.8686c.com/python/pycharm-community-2019.1.2.tar.gz
```
## 网易云音乐

## VLC
```
sudo apt-get install VLC
```
## xmind

## docky
sudo apt-get install docky

## anbox
```
add-apt-repository ppa:morphis/anbox-support
apt install -y anbox-modules-dkms
modprobe ashmem_linux
modprobe binder_linux
snap install --devmode --beta anbox

```

## monitor
```
sudo add-apt-repository ppa:fossfreedom/indicator-sysmonitor  
sudo apt-get update 
sudo apt-get install indicator-sysmonitor 
```

 sudo mount -t cifs -o user=root,password=fast123 //192.168.31.21/6ac6 ./6ac6/