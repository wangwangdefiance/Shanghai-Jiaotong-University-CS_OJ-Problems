#include<iostream>
using namespace std;

int weekday(Date Date1, Date Date2);//����������֮�����ĩ����
int vacation(Date Date1, Date Date2,int* intersect);//����������֮��ļ�������,intersect��õ��������м�����ĩ

int main() {
	//������������group;
	//����char**[group];
	for (int i = 0; i < group; i++) {
		//�������ڱ���������char* ��date������
	}
	//�����Ѿ������ֶ���
	//������Ӧ������Date(date)
	int sum = 0;
	for (int i = 0; i < group / 2; i++) {
		/*#########ÿ����Date����һ�Σ����ҵ��ӽ�sum��#########*/
		//ͨ������standard_dis�������������֮���dis
		standard_dis=standard_dis+weekday(Date1, Date2)+vacation(Date1, Date2)-intersect;//�ݳ�ԭ������ܵĽ�����
		sum += standard_dis;
	}
}

class Date
{
public:
	int year, month, day;
	int weekday;//�����ܼ���ͨ���ڲ�����weekday_cal��ã�����weekdayֻ������Ӱ�죬�ʿ���ͨ��һ�����������
	int standard_dis;//������Ϊ���ڱ�׼�������ڲ��standard_dis_cal���,�����и�
	Date(char* date);//���캯���������ַ�����date������������int���ڲ������У�Ϊ�˷��ʷ��㲻��װ��
	Date()
	{
		year = 2000; month = 1; day = 1; weekday = 0; standard_dis = 0;
	}
private:
	int weekday_cal();
	int standard_dis_cal();

};