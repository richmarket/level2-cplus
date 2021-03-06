// demo_cplus.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "string.h"
#using "ss_level2.dll"
using namespace ss_level2;   //引用dll
using namespace System;
using namespace std;
using namespace System::Runtime::InteropServices;




void Index_Data(String^  str)
{
	char* d = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
	cout << d << endl;
	/*指数名称	指数代码
					  上证指数	000001
					  上证Ａ股	000002
					  上证Ｂ股	000003
					  工业指数	000004
					  商业指数	000005
					  地产指数	000006
					  公用指数	000007
					  综合事业	000008
					  上证180 	000010
					  基金指数	000011
					  国债指数	000012
					  企债指数	000013
					  上证５０	000016
					  红利指数	000015
					  沪深300 	000300*/


					  /*temp_x index行情快照结构
					  temp_x[0] 000002.SZ  标准代码
					  temp_x[1] 000002 代码
					  temp_x[2] 20170101 日期
					  temp_x[3] 93000000 时间
					  temp_x[4] 开盘指数
					  temp_x[5] 最高指数
					  temp_x[6] 最低指数
					  temp_x[7] 最新指数
					  temp_x[8] 交易量
					  temp_x[9] 成交金额
					  temp_x[10] 前盘指数
					  */
}

void Option_Data(String^  str)
{
	char* d = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
	cout << d << endl;
	/*temp_x option行情快照结构
					temp_x[0] 000002.SZ  标准代码
					temp_x[1] 000002 代码
					temp_x[2] 20170101 日期
					temp_x[3] 93000000 时间
					temp_x[4] 阶段标志
					temp_x[5] 涨停价
					temp_x[6] 跌停价
					temp_x[7] 成交总量
					temp_x[8] 成交总金额

					temp_x[9] 最新价
					temp_x[10] 开盘价
					temp_x[11] 最高价
					temp_x[12] 最低价
					temp_x[13] 昨结算价
					temp_x[14] 持仓总量
					temp_x[15-19] 买1-5价
					temp_x[20-24] 买1-5量
					temp_x[25-29] 卖1-5价
					temp_x[30-34] 卖1-5量
					 */
}

void Market_Data(String^  str)
{
	char* d = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
	cout << d << endl;
	/*temp_x market行情快照结构
					temp_x[0] 000002.SZ  标准代码
					temp_x[1] 000002 代码
					temp_x[2] 20170101 日期
					temp_x[3] 93000000 时间
					temp_x[4] 状态
					temp_x[5] 前收盘价
					temp_x[6] 开盘价
					temp_x[7] 最高价
					temp_x[8] 最低价
					temp_x[9] 最新价
					temp_x[10]-temp_x[19] 申卖价1-10
					temp_x[20]-temp_x[29] 申卖量1-10
					temp_x[30]-temp_x[39] 申买价1-10
					temp_x[40]-temp_x[49] 申买量1-10
					temp_x[50] 成交笔数
					temp_x[51] 成交总量
					temp_x[52] 成交总金额
					temp_x[53] 委托买入总量
					temp_x[54] 委托卖出总量
					temp_x[55] 加权平均委买价格
					temp_x[56] 加权平均委卖价格
					temp_x[57] 涨停价
					temp_x[58] 跌停价
					*/
}

void Queue_Data(String^  str)
{
	char* d = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
	cout << d << endl;
	/*temp_x queue 委托队列结构
					temp_x[0] 000002.SZ  标准代码
					temp_x[1] 000002 代码
					temp_x[2] 20170101 日期
					temp_x[3] 93000000 时间
					temp_x[4] 卖一price
					temp_x[5] 卖一队列数
					temp_x[6] 买一price
					temp_x[7] 买一队列数
					temp_x[8]-temp_x[107] 订单明细 sell_queue0-sell_queue50  buy_queue0-buy_queue50
					*/
}

void Order_Data(String^  str)
{
	char* d = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
	cout << d << endl;
	/*temp_x queue 委托队列结构
				temp_x[0] 000002.SZ  标准代码
				temp_x[1] 000002 代码
				temp_x[2] 20170101 日期
				temp_x[3] 93000000 时间
				temp_x[4] 委托号
				temp_x[5] 委托价格
				temp_x[6] 委托数量
				temp_x[7] 委托类别
				temp_x[8] 委托代码
				*/
}

void Tran_Data(String^  str)
{
	 char* d = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
	 cout << d << endl;
	 /*temp_x tran 逐笔成交结构
					temp_x[0] 000002.SZ  标准代码
					temp_x[1] 000002 代码
					temp_x[2] 20170101 日期
					temp_x[3] 93000000 时间
					temp_x[4] 成交编号
					temp_x[5] 成交价格
					temp_x[6] 成交数量
					temp_x[7] 成交金额
					temp_x[8] 买卖方向(0成交方向不明，买方成交:'1',卖方成交'2')
					temp_x[9] 成交类别
					temp_x[10] 成交代码
					temp_x[11]叫卖方委托序号
					temp_x[12]叫买方委托序号
					*/
}

int main()
{

	login a;
	a.ip = "";
	a.user = "";
	a.password = "";
	//#heart_o_c = false;


	a.ss_Index_event += gcnew ss_level2::login::ss_index(Index_Data);
	a.ss_Option_event += gcnew ss_level2::login::ss_option(Option_Data);
	a.ss_Market_event0 += gcnew ss_level2::login::ss_Market0(Market_Data);
	a.ss_Queue_event0 += gcnew ss_level2::login::ss_Queue0(Queue_Data);
	a.ss_Tran_event0 += gcnew ss_level2::login::ss_Tran0(Tran_Data);
	a.ss_Order_event0 += gcnew ss_level2::login::ss_Order0(Order_Data);



    std::cout << "Hello World!\n"; 

	//a.market_Get();
	//a.Market_dic_add("000002");//只订阅一只，
	//a.Market_dic_remove("0000002");//删除订阅
	//a.Market_dic_clear();//清空market的订阅

	a.tran_Get();
	//a.Tran_dic_add("000002");//只订阅一只，
	//a.Tran_dic_remove("0000002");//删除订阅
	//a.Tran_dic_clear();//清空tran的订阅



	std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


