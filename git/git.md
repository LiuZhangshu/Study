# Git
## 密钥生成
	ssh-keygen -t rsa -C "YOUR_EMAIL@YOUREMAIL.COM"
## 同步项目到git
	step1 取回远程主机某个分支的更新，再与本地的指定分支合并
		git pull <远程主机名> <远程分支名>:<本地分支名>
	step2 在目录中创建新的 Git 仓库
		git init 
	step3 添加服务端链接
		git remote add [name] [url]
	step4 将文件加入快照（缓存区）
		git add [path]
	step5 提交缓存区文件到仓库
		git commit -m [comments]
			-m 注释
			-a 跳过 add
	step6 上传到服务端
		git push -u [remote] [branch]
	
## 同步项目到本地
	git clone [url]
	git fetch --all && git reset --hard origin/master && git pull	#覆盖本地
## 状态查看
	git status
		-s 显示简略信息
	git diff
		显示版本不同内容
		
## git 配置
```shell		
#忽略https认证
git -c http.sslVerify=false clone
# 取消换行符自动替换
gitconfig --global core.autocrlf false 
```

```git

Git global setup
git config --global user.name "LiuZhangshu"
git config --global user.email "1149733622@qq.com"

Create a new repository
git clone 
https://gitlab.com/kiopju/TensorflowPractice.git

cd TensorflowPractice
touch README.md
git add README.md
git commit -m "add README"
git push -u origin master

Existing folder
cd existing_folder
git init
git remote add origin 
https://gitlab.com/kiopju/TensorflowPractice.git

git add .
git commit -m "Initial commit"
git push -u origin master

Existing Git repository
cd existing_repo
git remote rename origin old-origin
git remote add origin 
https://gitlab.com/kiopju/TensorflowPractice.git
git push -u origin --all
git push -u origin --tags
```