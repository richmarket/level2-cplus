#include "pch.h"
#include <iostream>


//CallbackFun类型
//@CallbackFun 指向函数的指针类型
//@height      回调参数，当有多个参数时，可以定义一个结构体
//@contex      回调上下文，在C中一般传入nullptr，在C++中可传入对象指针
typedef void(*CallbackFun)(double height, void* contex);

//注册回调函数接口
//@registHeightCallback 注册函数名
//@callback             回调函数原型
//@contex               回调上下文
void registHeightCallback(CallbackFun callback, void* contex);

//接收数据类class Sensor
class Sensor {
public:
	Sensor() {}
	~Sensor() {}
	//定义回调函数onHeight
	static void onHeight(double height, void* contex)
	{
		std::cout << "current height is  " << height << std::endl;
	}
	//定义注册回调函数
	void registCallback()
	{
		registHeightCallback(onHeight, this);
	}
};

