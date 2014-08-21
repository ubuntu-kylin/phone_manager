优麒麟手机助手
=============

## CSDN 2014开源夏令营项目
    
       在Windows平台上有众多的安卓手机管理工具，如360手机助手、腾讯手机管家、豌豆荚等，但是在Linux平台下却鲜有功能强大的客户端出现。为了一解我等Linuxer在学习工作中手机管理的诸多不变，真心需要开发一款可在Linux环境下运行的图形化安卓手机管理工具，且称之为“优麒麟手机助手”。基于Android Debug Bridge（ADB）for Linux工具的各项功能进行开发，包括软件界面界设计、交互命令执行等，使用户感受不到adb的存在（当然，如果您足够Hacker，也可以抛弃adb基于数据线或wifi等连接方式，自己编写超级手机hack进程，与Linux客户端交互并执行各种手机管理功能。难度系数：疯狂or自杀）。


**功能点的具体要求：**

* 熟悉ADB工具在Ubuntu Kylin系统上的安装、配置与使用；完整准确地理解ADB各项命令的参数和含义
* 基本功能（最低要求）：
   * 形成完善的设计文档
   * 根据可以实现的管理功能，设计出独具特色的图形化管理界面（推荐但不限于使用Qt/QML）；
   * 能够上传/下载手机文件
   * 能够安装/卸载手机应用
* 高级功能（任选1项，多选不限）
   * 壁纸、铃声的设置
   * 相同wifi下的手机与电脑互联，可传送文件
   * 手机垃圾的清理和性能加速
   * 获取root权限等
   * ...


**联系方式：**
* email: <jonaszhang@ubuntukylin.com> <zpy@98ki.com>
* 论坛跟帖: http://www.ubuntukylin.com/ukylin/forum.php?mod=viewthread&tid=9440&extra=


## 对学生的要求

* 熟悉Linux图形界面开发工具和语言，如Qt/QML等
* 熟悉手机的各项功能
* 具有较强的动手能力

## 完成标准

* 基本完成标准：
	+ 实现基本功能
* 完成标准
	+ 实现基本功能和部分高级功能
	+ 各项功能能够正常工作并有稳定性测试jonaszhang

## 附录1：GitHub项目使用指南
* 注册github账号https://github.com，记住自己的账号和密码
* 安装配置git软件
   sudo apt-get install git
   git config --global user.email "your@email"
   git config --global user.name "yourname"
* 在本地克隆代码仓库
   git clone https://github.com/ubuntu-kylin/phone_manager.git
* 在本地编辑代码
* 提交修改
   git commit -a -m "修改描述"
* 上传到服务器
   git push origin master 

## 附录2：参考文献
   Google官方的ADB文档：https://developer.android.com/tools/help/adb.html
/android目录是该项目在Android端App的源码。
/desktop目录是该项目在Ubuntu kylin下的桌面应用源码。
/doc目录是该项目相关文档所在。
