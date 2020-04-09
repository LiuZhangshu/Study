# SQL基础

```
Oracle分为客户端和服务端;服务端用于建立数据库、运算等;客户端用于连接;PLSQL是数据库连接工具，提供许多功能特性
```

## PART 1 表建立与查询

### 1.1 建立表结构
```sql
CREATE TABLE TEST_1 (
CITY VARCHAR2(50),
ECI  NUMBER,
enbid number);
```

### 1.2 建立表结构和数据表

```sql
create table TEST_2 AS
SELECT T.CITY,T.ECI,t.sdate FROM CFG_SITEINFO_TDLTE T;
```

### 1.3 插入数据,commit,rollback

```sql
insert into TEST_1 select t.city,t.eci,t.enbid FROM CFG_SITEINFO_TDLTE T;
rollback;
insert into TEST_1 (CITY,ECI,ENBID) select t.city,t.eci,t.enbid FROM CFG_SITEINFO_TDLTE T;
commit;
insert into TEST_1 (CITY,ECI,ENBID) values ('GUANGZHOU1',123,321);
COMMIT;
```
### 1.4 表更新
```sql
update TEST_1 t set t.city='GUANGZHOU' WHERE T.CITY='GUANGZHOU1';
COMMIT;
```
### 1.5 删除表中部分数据

```sql
delete from TEST_2 t where t.city='GUANGZHOU';
COMMIT;
```

### 1.6 清空数据，但是保留表结构

```sql
truncate table TEST_2;
```

### 1.7 删除表和表机构

```sql
DROP TABLE TEST_1;
```

### 1.8 删除表和表机构，同时清空数据库回收站数据

```sql
DROP TABLE TEST_2 purge;
```

## PART 2 查询
### 2.1查询一张表
```sql
select * from TEST_2;
select t.* from TEST_2 t;
select eci from TEST_2;
select t.eci,t.city from TEST_2 t;
```

### 2.2 伪表/时间转换/赋予别名

```sql
select to_date('20170121113304','yyyymmddhhmiss')  from dual;
select to_date('20170121113304','yyyymmddhhmiss') sdate from dual;
```

### 2.3 where子句

```sql
select * from TEST_2 t where t.city='GUANGZHOU' or t.city='YANGJAING';
select * from TEST_2 t where t.city='GUANGZHOU' AND T.ECI LIKE '%0437%';
select * from TEST_2 t where t.city<>'GUANGZHOU';
select distinct city
  from (select * from TEST_2 t where t.city in ('GUANGZHOU', 'YANGJIANG'));
select * from TEST_2 t where t.city in (SELECT DISTINCT A.CITY FROM TEST_1 A);
select * from TEST_2 t where to_date(t.Sdate,'yyyymmdd')>to_date('20170121','yyyymmdd');
select * from TEST_2 t where t.eci between 40000000 and 50000000;
```

### 2.4 去重

```sql
select distinct t.city from TEST_2 t;
```

### 2.5 排序

```sql
select * from TEST_2 t order by t.eci desc;
```
### 2.6 左连接

```sql
select b.city,b.eci,a.enbid from TEST_2 b left join TEST_1 a on a.eci=b.eci;
```
### 2.7 表连接

```sql
select * from (select * from TEST_1 a where a.eci=123
union
select * from TEST_1 b where b.eci<>123)where eci=123
```

## part3 分组函数 group by、 avg、max、min、count、sum、length、substr

```sql
select length('werwr') from dual;
select substr('abcd',2,3) from dual;
select trunc(to_date('2017021010','yyyymmddhh'),'mm') from dual
select t.city,max(t.eci),min(t.eci),count(*) from test_1 t group by t.city
```