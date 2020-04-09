# matrix

## 1. 标量、向量、矩阵

### 1.1 标量

定义：一个数

### 1.2 向量

定义：一个一维数组，可以看作空间中的点

例子

$`
\vec{x}=\left[
\begin{matrix}
 x_1  \\
 x_2  \\
 \vdots \\
 x_n 
\end{matrix}
\right]
`$
    
集合：s={1,3,6},记作$`x_s`$

$`x_{-1}`$ :除了$`x_1`$以外的元素

$`x_{-s}`$ :除了集合s外的元素

### 1.3 矩阵

定义：m行n列的二维数组，记作$`A \in R^{m \times n}`$

$`A_{i:}`$ ：行向量表示

$`A_{:j}`$：列向量表示

$`f(A)_{ij}`$ : 矩阵A在$`f`$作用下第$`i`$行，第$`j`$列元素

### 1.4张量

定义：超过2维的数组

### 1.5转置

矩阵的转置：$`(A^T)_{i,j}=A_{i,j}`$

向量的转置：$`\vec{x}=(x_1,x_2 \cdots ,x_n)`$

标量的转置：$`a=a^T`$

## 2.矩阵的运算

### 2.1 加法

1.矩阵的加法
* 矩阵+矩阵

```math

C=A+B

C_{i,j}=A_{i,j}+B_{i,j}

```

* 矩阵+向量：将向量隐式的复制到每一行，称为广播

```math

C=A+\vec{b}
```
```math
C_{i,j}=A_{i,j}+b_{j}

```

### 2.2.矩阵的乘法

* 矩阵x标量+标量

```math
C=aA+b
```
```math
C_{i,j}=aA_{i,j}+b
```


* 矩阵乘积
若 $`A \in R^{m \times n},B \in R^{n \times p},C \in R^{m \times p}`$

```math
C=AB
```

```math
C_{i,j}=\sum_k A_{i,k}B_{k,j}
```

* 矩阵元素对应乘积

```math
C=A \bigodot B
```
```math
C_{i,j}=A_{i,j}B_{i,j}
```

* 向量的乘积

```math
\vec{x}\vec{y}=\vec{x^T}\vec{y}
```

### 2.3运算性质

* 分配律

```math
A(B+C)=AB+AC
```
* 结合律

```math
A(BC)=(AB)C
```
* 结合律

  向量点积满足


### 2.4.单位矩阵和逆矩阵

单位矩阵 $`I=
\begin{Bmatrix}
 1      & 0      & \cdots & 0      \\
 0      & 1      & \cdots & 0      \\
 \vdots & \vdots & \ddots & \vdots \\
 0      & 0      & \cdots & 1      
\end{Bmatrix} 
`$

矩阵A的逆记作$`A_{-1}`$,且有$`AA_{-1}=I_n`$


## 3.线性方程

* 线性方程的形式

```math
A \vec{x}=\vec{b}
```

```math
A_{1:} \vec{x} = b_1
```

```math
A_{2:} \vec{x} = b_2
```

```math
\cdots
```

```math
A_n: \vec{x} = b_n

```
* 推导

```math
A_{11}x_1 + A_{12}x_2 + A_{13}x_3 + \cdots + A_{1n}x_n = b_1 
```
```math
A_{21}x_1 + A_{22}x_2 + A_{23}x_3 + \cdots + A_{2n}x_n = b_2 
```

```math
A_{31}x_1 + A_{32}x_2 + A_{33}x_3 + \cdots + A_{3n}x_n = b_3 
```

```math
\cdots
```

```math
A_{m1}x_1 + A_{n2}x_2 + A_{n3}x_3 + cdots + A_{mn}x_n = b_m 
```

  当A为非奇异矩阵方程的解为

```math
\vec {x} = A_{-1} \vec{b}
```

* 奇异矩阵：一组线性相关的向量组成的方阵

## 4.线性相关和子空间

线性无关：空间中，任意一组向量不能由其他向量的线性组合表示

方程$`A \vec{x} = \sum A_{:i}x_i= \vec{b}`$有解，实际上等价于R空间中，从原点出发，有多少路径到$`\vec {b}`$

所以，$`A_{m \times n } \vec{x} =  \vec{b}`$只有在$`n \geq m`$时，切矩阵至少包含m个线性无关向量，有解

## 5.范数

* 向量的范数

  意义：向量x的范数衡量原点到$`\vec{x}`$的距离(衡量向量的大小)
  
*$`L^p`$范数： $`||x||_p=(\sum_i |x_i|^p)^\frac{1}{p} \quad p \in R, p \geq 1 `$ 
  
  性质：

> $`f(x)=0 \Rightarrow x=0`$ ;

>$`f(x + y) \leq f(x) + f(y) `$ (三角不等式)；

>$`\forall \alpha \in R, f(\alpha x)=|\alpha |f(x)`$

* $`L^2`$：原点到向量距离，计算$`\vec{x}_Tx`$

>优点：求导方便

>缺点：原点附近增速缓慢

>用途：衡量向量间距离

* $`L^1`$

> $`||x||_1=\sum_i |x_i|`$

>优点：原点附近增速缓快

>用途：非零元素数目替代函数


* $`L^\infty`$

> $`||x||_1=max_i |x_i|`$

>含义：向量中最大幅值元素的绝对值

* Frobenius 范数

>含义：衡量矩阵大小

>定义：$`||A||_F = \sqrt{\sum_{i,j}A_{i,j}^2} = \sqrt{Tr(AA^T)} `$

## 6.特殊类型的矩阵和向量

### 6.1 对角矩阵

$`diag(\vec{v})`$ : 由$`\vec{v}`$指定对角线元素的对角方阵

> $`diag(\vec{v}) \vec{x} = \vec{v} \bigodot \vec{x} `$ 

> $`diag(\vec{v})^{-1} = diag([ \frac{1}{v_1},\frac{1}{v_2},\cdots,\frac{1}{v_n}]^T)`$

### 6.2 对称矩阵  

$`A=A^T`$

### 6.3 单位向量

定义：$`||x||_2 = 1`$

### 6.4 正交矩阵

正交向量：满足$`\vec{x^T}\vec{y} = 0`$，则$`\vec{x}\vec{y}`$正交

$`R^n`$中，至多有n个非零正交向量，若向量L2范数为1，则为标准正交

## 7.特征向量与特征值（只针对方阵）

### 7.1定义

$` A \vec{v} = \lambda \vec{v} `$ ，$` \lambda `$称为特征值，$` \vec{v} `$称为特征向量

### 7.2 特征分解
 
已知,$`\vec{v_1},\vec{v_2},\vec{v_3}\cdots,\vec{v_n}`$为矩阵$`A`$的一组特征向量，$`\lambda_1,\lambda_2,\lambda_3\cdots\lambda_n`$

$` \left\{
\begin{aligned}
A\vec{v_1} = \lambda_1\vec{v_1} \\
A\vec{v_2} = \lambda_2\vec{v_2} \\
A\vec{v_3} = \lambda_3\vec{v_3} \\
\cdots \\
A\vec{v_n} = \lambda_n\vec{v_n} 
\end{aligned}
\right.
`$
$`        \Longrightarrow         `$
$`A\vec{v_1} + A\vec{v_2} + A\vec{v_3} \cdots A\vec{v_n}  = `$
$`
\begin{Bmatrix}
 \vec{v_1}  \\
 \vec{v_2}  \\
 \vec{v_3}  \\
 \vdots \\
 \vec{v_n} 
\end{Bmatrix}
`$
$`
\begin{Bmatrix}
 \lambda_1      & 0      & \cdots & 0      \\
 0      & \lambda_1      & \cdots & 0      \\
 \vdots & \vdots & \ddots & \vdots \\
 0      & 0      & \cdots & \lambda_1      
\end{Bmatrix} = Vdiag(\vec{\lambda})
`$

$` \because A \vec{v_n} = \lambda_n \vec{v_n}`$

$`\therefore A_{x:}\vec{v_n}=0   (x \neq n)`$

左边$`=
A\vec{v_1} + A\vec{v_2} + A\vec{v_3} \cdots A\vec{v_n} 
`$

$`
= A_{1:}\vec{v_1} + A_{2:}\vec{v_2} + A_{3:}\vec{v_3} \cdots A_{n:}\vec{v_n} 
`$

$`
=A\begin{Bmatrix}
 \vec{v_1}  \\
 \vec{v_2}  \\
 \vec{v_3}  \\
 \vdots \\
 \vec{v_n} 
\end{Bmatrix}
`$

$`
=AV
`$

$`\Longrightarrow
    AV = Vdiag(\vec{\lambda})
`$

$`\Longrightarrow
    A = Vdiag(\vec{\lambda})V^{-1}
`$
  
### 7.3 正定矩阵

正定矩阵：所有特征值大于0

半正定矩阵：所有特征值为非负数

负定矩阵：又有特征值为非负数

## 8.奇异值分解

矩阵$`A \in R^{m \times n};U \in R^{m \times m};D \in R^{m \times n};V \in R^{n \times n};U,V`$为正交矩阵$`D`$

```math
A=UDU^T
```

左奇异向量$`U:AA^T`$的特征向量

右奇异向量$`V:A^TA`$的特征向量

$`A`$的奇异值$`D`$：$`AA^T`$或$`A^TA`$特征值的平方根

## 9.伪逆

矩阵A的伪逆：

>定义：$`A^+=\lim_{\alpha\rightarrow0}(AA^T+\alpha I)_{-1}A^T`$

>求解：$`A^+=VD^+U^T`$($`D^+`$为$`D`$非零元素取倒数)

## 10.迹运算

返回矩阵对角元素之和：$`Tr(A)=\sum_iA_{i,i}`$

性质：

>$`Tr(A)=Tr(A^T)`$

>$`Tr(ABC)=Tr(CBA)=Tr(BCA)`$

>$` Tr( \prod_{i=1}^n F^{(i)}) = Tr( F^{(n)} \prod_{i=1}^{n-1} F^{(i)})`$

>$`A \in R^{m \times n} , B \in R^{n \times m} Tr(AB)=Tr(BA)`$

>$`a = Tr(a)`$

## 11.行列式

$`det(A)=\prod_{i=1}\lambda_i (\lambda`$为$`A`$的特征值)
