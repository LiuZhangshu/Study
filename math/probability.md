# probability

## 1.概率论

频率派概率：概率与事件发生频率联系

贝叶斯概率：涉及确定性水平

## 2.随机变量

随机变量：可以随机的取不同值的变量；可以描述可能的状态；可以分为离散或连续

## 3.概率分布

定义：指定每个状态的可能性

### 3.1离散型随机变量

概率质量函数(PMF，简写P，描述概率分布)：将随机变量可以取得的每个状态映射到随机变量取得该状态的概率

$`x\sim P(x):`$表示$`x`$遵循$`P(x)`$分布

联合概率分布：概率质量函数可以作用于多个变量$`P(x,y)`$

PMF性质：

>P的定义域必须是x所有可能的集合

>$`\forall x \in X , 0 \leq P(x) \leq 1`$

>归一化：$` \sum_{x \in X}P(x)=1 `$

均匀分布：$`X`$有$`k`$种状态，若$`X`$服从均匀分布,$`P(x)=\frac{1}{k}`$

### 3.2连续型变量

概率密度函数：$`x`$落在$`[a,b]`$区间概率为$`\int_{(a,b)}P(x)dx`$

性质：

>$`P`$的定义域必须是$`x`$所有可能状态的集合

>$`\forall x \in X ,  P(x) \leq 0`$

>$`\int_{(a,b)}P(x)dx=1`$

>均匀分布：$`x \sim U(a,b)=\frac{1}{b-a}`$

## 4.边缘概率

定义：已知一组变量的联合分布，求子集上的分布概率

求解

>离散型: $`\forall x \in X, P(x)= \sum_y P(x,y)`$

>连续型: $`\forall x \in X, P(x)= \int P(x,y)dy`$

## 5.条件概率

定义：某个事件在其他事件发生时出现的概率

```math
P(y|x)=\frac{P(XY)}{P(X)} (P(X) \leq 0)
```

## 6.条件概率的链式法则

```math
P(x^1,x^2,x^3 \cdots x^n)=P(x^1) \prod_{i=2}^n P(x^i | x^1,x^2,x^3 \cdots x^{i-1})
```

例子

```math
P(a,b,c)=P(a)P(b|a)P(c|a,b)
```

## 7.独立性和条件独立性

相互独立随机变量：$`\forall x \in X,\forall y \in Y, P(X,Y)=P(X)P(Y)`$

条件独立随机变量：$`\forall x \in X,\forall y \in Y, P(X,Y|Z)=P(X|Z)P(Y|Z)`$

## 8.期望、方差、协方差

函数$`f(x)`$关于某分布$`P(x)`$的期望：$`x`$由$`P(x)`$产生，$`f(x)`$作用于$`x`$时，$`f(x)`$的平均值

计算

>离散型随机变量：$`E_{x \sim P}[f(x)]=\sum_x p(x)f(x)`$

>连续型随机变量：$`E_{x \sim P}[f(x)]=\int p(x)f(x)dx`$

性质：

>$`E_x(\alpha f(x)+\beta g(x))=\alpha E_x[f(x)]+\beta E_x[g(x)]`$   $`(\alpha \beta)`$不依赖于$`x`$

方差：

```math
Var(f(x))=E[(f(x)-E(f(x)))^2]
```

标准差： 

```math
\sqrt{Var(f(x))}
```

协方差：

```math
cov(f(x),g(y))=E[(f(x)-E[f(x)])(g(x)-E[g(x)])]
```
>意义：给出两个变量线性相关强度以及这些变量的尺度

随机向量的$`\vec{x} \in R^n`$的协方差是一个$`n \times n`$矩阵，且满足$`cov(x)_{ij}=cov(x_i,x_j)`$

协方差矩阵的对角元是方差$`cov(x_i,x_i)=Var(x_i)`$

## 9.常用概率分布

### 9.1伯努利分布

定义：单个二值随机变量分布，由$`\phi \in [0,1]`$控制，$`\phi`$给出$`x=1 `$的概率

公式：
```math
P(x=1) = \phi
```

```math
P(X=0) = 1 - \phi
```

可以写成以下式子

```math
P(X)=\phi_x(1-\phi)_{1-x}
```

数学期望：

```math
E_x(x)=\phi
```

方差：

```math
Var_x(x)=\phi(1-\phi)
```

### 9.2二项分布

定义：描述$`N`$次独立的伯努利分布试验中有$`m`$次成功的概率

```math
P(m|N, \mu)=Bin(m|N,\mu)=\mu^m(1-\mu)^{N-m}
```

```math
E[x]=N\mu
```
```math
var[x]=N\mu(1-\mu)
```

### 9.3 多项分布

```math
P(x)=C_n^kp^k(1-p)^k
```

### 9.4 高斯分布（正态分布）

公式：

```math
N(x;\mu,\sigma)=\sqrt{\frac{1}{2 \pi \sigma^2 }}exp(-\frac{(x-\mu)^2}{2\sigma^2})
```

数学期望：

```math
E(X)=\mu
```

方差：

```math
Var(x)=\mu^2
```

### 9.5 概率分布和拉普拉斯分布

* 指数分布

```math
P(x; \lambda)=\left\{
\begin{aligned}
\lambda e^{-\lambda x } \quad x > 0 \\
0  \quad x \leq 0
\end{aligned}
\right.
```

* Laplace分布

公式：

```math
Laplace(x;\mu, \gamma)=\frac{1}{2\gamma}e^{(-\frac{|x-\mu|}{\gamma})}
```

### 9.6 狄拉克分布和经验分布

* 狄拉克分布

```math
p(x)=\delta(x - \mu)
```

狄拉克函数被定义为除了$`x=0`$,积分为1的函数

性质：$`x=\mu`$处具有无限小也无穷高的函数

* 经验分布

可以表示训练集输入值的频率

```math
\hat{p}(x)=\frac{1}{m}\sum_{i=1}^m\delta(x-x^{i})
```

### 9.7 分布的混合

定义：由一些组件的分布构成

公式：
```math
P(x)=\sum_i P(c=i)P(x|c=i)
```
其中，$`P(c)`$是对各个组件的多项分布

潜变量：不能直接观察到的随机变量

高斯混合模型：组件$`P(x|c=i)`$

高斯混合模型是所有概率密度的万能近似器


## 10.常用函数

### 10.1 logistic sigmoid

```math
\delta(x)=\frac{1}{1+e^{-x}}
```


### 10.2 softplus 

正部函数

```math
x^+=max(0,x)
```

正部函数的平滑版本

```math
\zeta(x)=In(1+e^x)
```

### 10.3 性质

```math
1-\delta(x)=\delta(-x)
```

```math
In  \delta(x)=-\zeta(-x)
```

```math
\frac{d}{dx}\zeta(x)=\delta(x)
```

```math
\forall x \in (0,1),  \delta^{-1}(x)=In\frac{x}{1-x}
```

```math
\forall x>0,  \zeta^{-1}(x)=In(e^x-1)
```

```math
\zeta(x)=\int^x_{-\infty} \delta(y) dy
```

```math
\zeta(x) - \zeta(-x)=x
```


## 11.贝叶斯公式

```math
P(x|y)=\frac{P(x)P(y|x)}{P(y)}
```

## 12.信息论

### 12.1 KL散度

意义：衡量两个概率分布之间的差异

```math
KL(PP||Q)=\int^{\infty}_{-\infty}p(x)log\frac{p(x)}{q(x)}dx
```

交叉熵：

连续型

```math
H(P,Q)=-\int^{\infty}_{-\infty}p(x)log{q(x)}dx
```

离散型

```math
H(P,Q)=-\sum p(x)log{q(x)}dx
```
