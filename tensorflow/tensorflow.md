# tensorflow

1.查看计算图：tf.get_default_graph

2.定义计算图：tf.graph

3.定义常量(值和维度不可变)：

	tf.constant(num,size,type)
 	print(c)	==>		node_name:source_input shape dtype

4.定义变量：
	
	tf.Variable(tf.constant(1.0,shape[1]), name="v")
	
	
5.随机数生成：
0
	正态分布 tf.random_normal(shape,stddev(标准差),mean(平均值，默认为0))
	正态分布，偏离平均值超过两个标准差重新随机：tf.truncate_normal
	平均分布：tf.random_uniform(max,min,type)
	Gamma分布:tf.random_gamma

6.常数生成

	产生全为0的常量：tf.zeros(shape,type)
	产生全为1的常量tf.ones(shape,type)
	产生全为给定数字的数组：tf.fill(shape, num)
	产生定值常量：tf.constant(constant)
	通过其他变量初始化:var.initilized_value

	
7.初始化：tf.initilize_all_variable()

8.相量相乘：tf.matmul(type, shape， name)

9.赋值：tf.assign(var, validate_shap(false可以改变维度))

10.取batch:
	存放：tf.placeholder()
	使用：sess.run(y, feed_dict={x: list})

11.反向传播网络优化算法

	tf.train.GrandientDescentOptimizer
	tf.train.AdamOptimizer(learning_rate).minimize(loss,global_step)
	tf.train.MomentumOptimizer

12.激活函数

	f(x)=max(0,x):tf.nn.relu
	f(x)=1/(1+e^(-x)):tf.sigmoid
	f(x)=(1-e^(-2x))/(1+e^(-2x)):tf.tanh
	
13.限制张量元素大小：tf.clip_by_value(y,min,max)

14.对数运算：tf.log

15.soft回归后的交叉熵运算：

	tf.nn.soft_cross_entropy_with_logits(y,y_)

16.均方差
	
	求和	tf.reduce_sum
	先求和再平均 tf.reduce_mean()
	平方	tf.square()
	
	tf.reduce_mean(tf.square(y_,y))

17.比较大小(针对元素 )：tf.greater(v1,v2); v1>v2 true; v1<=v2 false

18.条件判断：tf.select(condition，result_true, result_false)

19.指数衰减法(学习率)：

	公式：decayed_learning_rate=learning_rate(初始学习率)*decay_rate(衰减系数)^(global_step/decay_step(衰减速度))  
	tf.train.exponential_decay(learning_rate, global_step,times finish, decay_rate, stair_case boolean)
	
19.正则化
	
	L1正则化：R(ω）=∑|ωi|
	tf.contrib.layers.l1_regularizer(lambda)(ω)
	tf.contrib.layers.l2_regularizer(lambda)(ω)
	L2正则化:R(ω）=∑|ω^2|
	R(ω）=∑α|ωi|+(1-α)ω^2
	
20.滑动平均模型

	公式：shadow_variable = decay *shadow_variable +(1-decay)*variable
	
	decay更新：min{decay,(1+num_uddates)/(10+num_uddates)}
	
	ema = tf.train.ExponentialMovingAverage(0.99,step)
	ema.average(tensor)
	
21. 返回行或列最大值的下标
	argmax(tensor,0/1)	0表示按列，1表示按行
	
22.更新所有参数
		with control_dependencies([wait_update_arg]):
			tf.no_op(name='train')

			*
23.变量管理
	1.创建变量（与tf.Variable()功能类似）
		tf.get_variable("v", shape[1],initializer=tf.constant_initializer(1.0))
		必须填写名字，根据名字创建或获取变量。防止变量复用。
	2.tf.variable_scope(name, reuse=)
	
24
	
#Numpy
生成随机数对象  RandomState(1)
产生随机数矩阵	rdm.rand(line,row)

#PYTHON
取最小值min(a,b,c)
	