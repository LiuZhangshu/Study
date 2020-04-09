#!/usr/bin/python
#  -*- coding: UTF-8 -*-
"""
# python2.x版本
# UE_MR数据解析步骤：
# step1、调用uemr_parse_2_formatted_nbr_column_v1脚本，处理源数据(多级)目录下所有文件，生成1个MR_formatted格式文件(源数据目录下文件总量太大的话，生成的1个文件也会很大)
# step2、调用commonmro2pos_v1.sh程序，生成按站分割的定位用的格式文件
#
# 脚本调用  ./uemr_parse_2_formatted_nbr_column_v1  城市拼音(小写)  源数据存储目录(最后一级目录不能带斜杠)
#           ./uemr_parse_2_formatted_nbr_column_v1  mm  /home/chenhuiqi/demo/guangzhou     (guangzhou这个目录后面不能带 / )
#           ./uemr_parse_2_formatted_nbr_column_v1  gz  /data/FAST/data
# 程序实现功能:查询源数据目录下所有.csv文件，生成 MR_formatted格式化MRO文件 ，并存储在输入目录下面子目录/home/chenhuiqi/demo/guangzhou/output下，并把已经解析文件移动到备份目录/home/chenhuiqi/demo/guangzhou/bak_2017060700下
# mro原始文件是CSV文件
"""

from __future__ import print_function  #导入Python3的print函数功能
import datetime #导入时间计算函数
import sys  #给py文件传参数
import os   #目录
import shutil #移动文件/目录

start_time=datetime.datetime.now() #记录程序开始时间

city=sys.argv[1]    #py文件接收的第1个参数
mr_path=sys.argv[2] #py文件接收的第2个参数，保存源数据存储目录
operate_path=os.path.dirname(mr_path) #源数据目录的上一级目录，数据备份，处理结果都在这个目录操作

daymr=int(start_time.strftime('%Y%m%d')) #20171008
hourmr=int(start_time.strftime('%H'))    #08

#输出文件：上面目录下1个小时的数据处理后，输出到/data01/guangzhou/output 目录下
dir_output = "operate_path/output/"
dir_exists=os.path.exists(dir_output)
if not dir_exists:
    os.makedirs(dir_output)  # 如果不存在则创建目录
else:
    print(dir_output+"directory already exist")

#在输出目录下，判断文件是否存在，不存在则创建空文件，并以w读方式打开，用于保存生成的文件;如果存在则删除重新创建并打开
create_file = "/dir_output/mr_formatted_"+daymr+hourmr+".csv"
file_exists=os.path.exists(create_file)

if not dir_exists:
    os.mknod(create_file) # 创建空文件
    file_output = open(create_file,"w") # 打开空文件
else:
    print(create_file+"remove this file then recreate and open")
    os.remove(create_file)
    os.mknod(create_file) # 创建空文件
    file_output = open(create_file,"w") # 打开空文件

#创建备份目录
dir_bak = "operate_path/backup/bak_"+daymr+hourmr
dir_exists=os.path.exists(dir_bak)
if not dir_exists:
    os.makedirs(dir_bak)  # 如果不存在则创建目录
else:
    print(dir_bak+"directory already exist")


#遍历源数据存储目录 operate_path 下所有.csv文件(mr_path目录下面可以有子目录，下面会遍历包含子目录内的所有文件)
walk_mrpath = os.walk(mr_path)  

for mrpath,d,filelist in walk_mrpath:  
    for filename in filelist:  
        #print os.path.join(mrpath, filename)
            if ".csv" in filename # 判断文件名是否包含 ".csv" 字符串
                mrpath_filename = os.path.join(mrpath, filename) #包含路径和文件名
                file_input = open(mrpath_filename,"r")
                while 1:
                    lines = file.readlines()
                    if not lines:
                        break
                    for line in lines:
                        fields = line.split(",") #每行记录都是按","逗号分割的
                        
                        if (fields[17]==1 || fields[17]==9):#判断是否周期MR,第18个字段等1 代表是周期MRO ,Nokia设备9也是周期MR

                            mr_date=time.strftime("%Y-%m-%d", time.localtime(fields[16]//1000))   #UTC时间取到天
                            city_id=fields[59]
                            vendor_id="" #UE_MR规范没有这个字段，填空
                            
                            mr_hour=time.strftime("%H", time.localtime(fields[16]//1000))   #UTC时间取小时
                            mr_minute=time.strftime("%M", time.localtime(fields[16]//1000))   #UTC时间取分钟
                            mme_code="" #UE_MR规范没有这个字段，填空
                            mme_groupid="" #UE_MR规范没有这个字段，填空
                            mmeues1apid=fields[10]
                            
                            time_s=time.strftime("%Y-%m-%d %H:%M:%S", time.localtime(fields[16]//1000))   #UTC时间取到秒
                            time_ms=fields[16]%1000 #取最后3位毫秒
                            
                            sc_eci=fields[14]
                            sc_enbid=fields[13]
                            nbrcnt = fields[26] 
                            lte_sc_rsrp=fields[24]
                            lte_sc_rsrq=fields[25]
                            lte_sc_tadv=fields[21]
                            lte_sc_phr=fields[18]
                            lte_sc_aoa=fields[22]
                            lte_sc_sinrul=fields[20]
                            lte_sc_earfcn=fields[23]
                            lte_sc_pci=fields[15]
                            lte_sc_rip=""  #UE_MR规范没有这个字段，填空
                            
                            lte_nc_rsrp1=fields[29]
                            lte_nc_rsrp2=fields[33]
                            lte_nc_rsrp3=fields[37]
                            lte_nc_rsrp4=fields[41]
                            lte_nc_rsrp5=fields[45]
                            lte_nc_rsrp6=fields[49]
                            lte_nc_rsrp7=fields[53]
                            lte_nc_rsrp8=fields[57]
                            
                            lte_nc_rsrq1=fields[30]
                            lte_nc_rsrq2=fields[34]
                            lte_nc_rsrq3=fields[38]
                            lte_nc_rsrq4=fields[42]
                            lte_nc_rsrq5=fields[46]
                            lte_nc_rsrq6=fields[50]
                            lte_nc_rsrq7=fields[54]
                            lte_nc_rsrq8=fields[58]
                            
                            lte_ncearfcn1=fields[28]
                            lte_ncearfcn2=fields[32]
                            lte_ncearfcn3=fields[36]
                            lte_ncearfcn4=fields[40]
                            lte_ncearfcn5=fields[44]
                            lte_ncearfcn6=fields[48]
                            lte_ncearfcn7=fields[52]
                            lte_ncearfcn8=fields[56]
                            
                            lte_ncpci1=fields[27]
                            lte_ncpci2=fields[31]
                            lte_ncpci3=fields[35]
                            lte_ncpci4=fields[39]
                            lte_ncpci5=fields[43]
                            lte_ncpci6=fields[47]
                            lte_ncpci7=fields[51]
                            lte_ncpci8=fields[55]
                            
                            longitude=fields[11]
                            latitude=fields[12]
                            lte_sc_plrul_qci1="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci2="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci3="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci4="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci5="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci6="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci7="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci8="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrul_qci9="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci1="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci2="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci3="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci4="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci5="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci6="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci7="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci8="" #UE_MR规范没有这个字段，填空
                            lte_sc_plrdl_qci9="" #UE_MR规范没有这个字段，填空
                            ltescpuschprbnum="" #UE_MR规范没有这个字段，填空
                            ltescpdschprbnum="" #UE_MR规范没有这个字段，填空
                            ltescbsr="" #UE_MR规范没有这个字段，填空
                            ltescri1="" #UE_MR规范没有这个字段，填空
                            ltescri2="" #UE_MR规范没有这个字段，填空
                            ltescri4="" #UE_MR规范没有这个字段，填空
                            ltescri8="" #UE_MR规范没有这个字段，填空
                            ltescenbrxtxtimediff="" #UE_MR规范没有这个字段，填空
                            
                            print("%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s" % mr_date,city_id,vendor_id,mr_hour,mr_minute,mme_code,mme_groupid,mmeues1apid,time_s,time_ms,sc_eci,sc_enbid,lte_sc_rsrp,lte_sc_rsrq,lte_sc_tadv,lte_sc_phr,lte_sc_aoa,lte_sc_sinrul,lte_sc_earfcn,lte_sc_pci,lte_sc_rip,lte_nc_rsrp1,lte_nc_rsrq1,lte_ncearfcn1,lte_ncpci1,lte_nc_rsrp2,lte_nc_rsrq2,lte_ncearfcn2,lte_ncpci2,lte_nc_rsrp3,lte_nc_rsrq3,lte_ncearfcn3,lte_ncpci3,lte_nc_rsrp4,lte_nc_rsrq4,lte_ncearfcn4,lte_ncpci4,lte_nc_rsrp5,lte_nc_rsrq5,lte_ncearfcn5,lte_ncpci5,lte_nc_rsrp6,lte_nc_rsrq6,lte_ncearfcn6,lte_ncpci6,lte_nc_rsrp7,lte_nc_rsrq7,lte_ncearfcn7,lte_ncpci7,lte_nc_rsrp8,lte_nc_rsrq8,lte_ncearfcn8,lte_ncpci8,LONGITUDE,LATITUDE,lte_sc_plrul_qci1,lte_sc_plrul_qci2,lte_sc_plrul_qci3,lte_sc_plrul_qci4,lte_sc_plrul_qci5,lte_sc_plrul_qci6,lte_sc_plrul_qci7,lte_sc_plrul_qci8,lte_sc_plrul_qci9,lte_sc_plrdl_qci1,lte_sc_plrdl_qci2,lte_sc_plrdl_qci3,lte_sc_plrdl_qci4,lte_sc_plrdl_qci5,lte_sc_plrdl_qci6,lte_sc_plrdl_qci7,lte_sc_plrdl_qci8,lte_sc_plrdl_qci9,ltescpuschprbnum,ltescpdschprbnum,ltescbsr,ltescri1,ltescri2,ltescri4,ltescri8,ltescenbrxtxtimediff,file = file_output)
                
                #移动已经处理的文件到备份目录,并判断mrpath目录是否为空，为空则删除该目录。mrpath是上面循环体中的参数，即源数据多级目录下的某1个目录
                shutil.move(mrpath_filename,dir_bak) # 备份
                if not os.listdir(mrpath): #判断文件夹是否为空
                    os.rmdir(mrpath) #删除目录

end_time=datetime.datetime.now() #记录程序结束时间

elapsed_time = (end_time-start_time).seconds  #程序运行时间，单位为妙
print(elapsed_time)










