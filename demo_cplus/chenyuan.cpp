#include "pch.h"
#include <iostream>


//CallbackFun����
//@CallbackFun ָ������ָ������
//@height      �ص����������ж������ʱ�����Զ���һ���ṹ��
//@contex      �ص������ģ���C��һ�㴫��nullptr����C++�пɴ������ָ��
typedef void(*CallbackFun)(double height, void* contex);

//ע��ص������ӿ�
//@registHeightCallback ע�ắ����
//@callback             �ص�����ԭ��
//@contex               �ص�������
void registHeightCallback(CallbackFun callback, void* contex);

//����������class Sensor
class Sensor {
public:
	Sensor() {}
	~Sensor() {}
	//����ص�����onHeight
	static void onHeight(double height, void* contex)
	{
		std::cout << "current height is  " << height << std::endl;
	}
	//����ע��ص�����
	void registCallback()
	{
		registHeightCallback(onHeight, this);
	}
};

