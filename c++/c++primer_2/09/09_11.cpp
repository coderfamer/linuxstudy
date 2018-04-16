#include <vector>
#include <iostream>

//默认初始化，vector 为空，size 返回0， 表明容器中尚未有元素；capacity 返回0，意味这尚未分配存储空间。这种
//初始化方式适合于元素个数和值未知，需要在程序运行中动态添加的情况
vector<int> v1;

//v2初始化为v1的拷贝，v1 v2必须类型相同
vector<int> v2(v1);

//列表初始化
vector<int> v3 = {1, 2, 3, 4, 5}；

//迭代器初始化
vector<int> v4(v3.begin()+2, v3.end() -1);

//默认值初始化，v5含有是个0
vector<int> v5(10);

//指定值初始化，v6含有10个3
vector<int> v6(10, 3);




