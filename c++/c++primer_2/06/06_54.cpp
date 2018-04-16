/*
 * 编写函数声明，令其接受两个int形参，并且返回类型也是int，然后声明一个vector对象，令其元素
 * 指向该函数的指针
 * */

int func(int, int);
vector<decltype(func) *> VF;
