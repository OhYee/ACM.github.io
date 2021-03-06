---
title: 随身携带Ubuntu系统(非启动盘)
date: 2017-05-01 16:23:57
categories: 笔记
tags:
  - Ubuntu
  - Linux
keywords:
  - U盘装Ubuntu
  - 随身系统
  - U盘系统
---
对这个问题期待好久了,之前由于没有找到响应的解决方案,用VS Code及一些批处理命令初步解决了在U盘随身带着环境的情况  
当然,如果能实现随身带着一个系统自然更好  
<!--more-->
<% note success %>
需要工具
- USB 3.0 U盘 x1
- 电脑 x1
- Ubuntu 安装镜像([官网下载链接](http://cn.ubuntu.com/download/))
- VMware
<% endnote %>

1. 备份U盘数据
2. 在VMware里新建一个空的虚拟机
  系统那里选择**稍后安装操作系统**,其它默认即可
3. 打开虚拟机,插入U盘,语言切换到中文,选择**试用**  
4. 进入临时系统后,点击桌面上的安装工具开始安装
  - 如果分辨率存在问题,可以运行命令 `xrandr`
    选择一个长和宽都小于等于物理机分辨率的分辨率使用
    比如 `xrandr -s 1680x1050_49.98`
    ![](/post/img/Ubuntu_on_UDisk.png)
5. 分区
  手动操作,满足我们的特殊需求
  ![](/post/img/Ubuntu_on_UDisk_2.png)
  其中,sdb就是我们的U盘
  如果U盘比较大,为了不浪费,还是要分出来一部分当正常U盘的  
  重建sdb的分区表,按顺序建立 `fat32` `ext4` `swap` 三个分区  
  其中 `fat32` 用来充当正常U盘部分,`ext4`挂在 `\` 目录用来安装系统,`swap`为交换分区(虚拟内存)  
  具体大小可以根据自己的U盘情况,系统留15G,swap留1G就足够了
6. 分好区后,选择**U盘**安装系统
  (必须选U盘的根分区,不然没法引导)
  ![](/post/img/Ubuntu_on_UDisk_3.png)
7. 闭着眼点继续就行,漫长的等待后就好了
