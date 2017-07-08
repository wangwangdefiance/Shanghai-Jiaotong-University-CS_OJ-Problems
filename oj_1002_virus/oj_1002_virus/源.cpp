#include<iostream>
using namespace std;
int main() {
	int timelimit, road, up, plane, down,counter=0,timecount=0;
	cin >> timelimit >> road >> up >> plane >> down;
	char* status;
	status = new char[road];
	bool flag = 1;
	while (flag)
	{
		cin >> status[counter];
		if (status[counter] == 'u' || status[counter] == 'd')
			timecount += (up + down);
		if (status[counter] == 'f')
			timecount += 2 * plane;
		if (timecount >= timelimit)
		{counter; flag = 0; break; }
		if (counter == road)
		{
			flag = 0; break;
		}
		counter++;
	}
	cout << counter;
	getchar(); getchar();
	return 0;
}