优麒麟手机助手
=============

## CSDN 2014开源夏令营项目
    
**项目介绍：**
优麒麟手机助手是在Ubuntu kylin系统中开发一款手机管理软件。优麒麟手机助手运行用户通过无线连接和数据线连接。


/android目录是该项目在Android端App的源码。
/desktop目录是该项目在Ubuntu kylin下的桌面应用源码。
/doc目录是该项目相关文档所在。



**项目任务：**

* 优麒麟手机助手Android应用（安装该应用后用户可通过浏览器直接管理Android手机，该部分属于衍生版，可独立）
* 将各界面嵌入Ubuntu kylin桌面版本（从app<->浏览器 到app<->ubuntu桌面应用的转化，将第一部功能实现在Ubuntu桌面应用中）
* 数据线连接（在Ubuntu桌面应用中实现通过数据线的连接）

**功能点的具体要求：**

* 基本功能

   * 能够上传/下载手机文件
   * 能够安装/卸载手机应用
   * 壁纸、铃声的设置
   * 相同wifi下的手机与电脑互联，可传送文件
   * 手机垃圾的清理和性能加速
   * 获取root权限等
   * ...


**  进度 **

* 优麒麟手机助手Android应用 （√）
* 将各界面嵌入Ubuntu kylin桌面版本 （ ）
* 数据线连接 （ ）


目前Wifi连接的基本功能已经实现，Wifi连接是通过Android应用实现。
我们在Android上搭建了一个服务器，使用时以浏览器作为客户端与其进行交互。
这一部分是优麒麟手机助手的衍生版本，可独立使用。使用教程见/doc/无线连接使用教程.doc



**联系方式：**
* email: <jonaszhang@ubuntukylin.com> <zpy@98ki.com>
* 开发者分支：https://github.com/berniezhang428/phone_manager
* 官方分支    ：https://github.com/ubuntu-kylin/phone_manager
* 论坛跟帖: http://www.ubuntukylin.com/ukylin/forum.php?mod=viewthread&tid=9440&extra=


## 对学生的要求

* 熟悉Linux图形界面开发工具和语言，如Qt/HTML/JS/CSS等
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
=======

