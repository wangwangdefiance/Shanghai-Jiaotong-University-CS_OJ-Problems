#include<iostream>
using namespace std;

int weekday(Date Date1, Date Date2);//求两个日子之间的周末总数
int vacation(Date Date1, Date Date2,int* intersect);//求两个日子之间的假期总数,intersect会得到假期中有几个周末

int main() {
	//输入总数据量group;
	//创建char**[group];
	for (int i = 0; i < group; i++) {
		//读入日期保存在数个char* 的date变量中
	}
	//现在已经将数字读入
	//创建相应数量的Date(date)
	int sum = 0;
	for (int i = 0; i < group / 2; i++) {
		/*#########每两个Date计算一次，并且叠加进sum中#########*/
		//通过两个standard_dis计算出两个日期之间的dis
		standard_dis=standard_dis+weekday(Date1, Date2)+vacation(Date1, Date2)-intersect;//容斥原理求出总的交易日
		sum += standard_dis;
	}
}

class Date
{
public:
	int year, month, day;
	int weekday;//代表周几，通过内部函数weekday_cal求得，由于weekday只收闰年影响，故可以通过一定方法简单求得
	int standard_dis;//对于作为周期标准的总日期差，由standard_dis_cal求得,有正有负
	Date(char* date);//构造函数，读入字符串的date，保存在数个int的内部变量中（为了访问方便不封装）
	Date()
	{
		year = 2000; month = 1; day = 1; weekday = 0; standard_dis = 0;
	}
private:
	int weekday_cal();
	int standard_dis_cal();

};