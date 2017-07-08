#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	string first,second;
	getline(cin, first);
	getline(cin, second);

	int i=0,length1=0,length2=0;
	length1 = first.length();
	length2 = secon.length();

	cout << "new" << endl;
	int* first_int = new int[length1];
	int* second_int = new int[length2];
	for (i = 0; i < length1; i++)
	{
		first_int[i] = first[length1 - i - 1]-'0';
	}
	for (i = 2; i < length2; i++)
	{
		second_int[i] = second[length2 - i - 1]-'0';
	}

	int max = 0,min=0,flag=0;
	if (length1 >= length2)
	{
		max = length1; min = length2; flag = 1;
	}
	else {
		max = length2; min = length1;
	}

	i = 0; int token=0;
	int* conse_int = new int[max+1];
	while (i < min)
	{
		if (first_int[i] + second_int[i]+token <= 9)
		{
			conse_int[i] = first_int[i] + second_int[i] + token; token = 0;
		}
		else
		{
			conse_int[i] = first_int[i] + second_int[i] + token - 10; token = 1;
		}
		i++;
	}

	while (i < max)
	{
		if (flag == 1)
		{
			conse_int[i] = (first_int[i]+token)%10;
			if (first_int[i] == 9)token = 1;
			else token = 0;
		}
		else
		{
			conse_int[i] = second_int[i]+token%10;
			if (second_int[i] == 9)token = 1;
			else token = 0;
		}
		i++;
	}

	char *conse = new char[max + 2];
	int k=0;
	if (token == 1)
	{
		conse[0] = '1'; k = 1; conse[max + 1] = '$';
	}
	else
	{
		conse[max] = '$'; conse[max + 1] = '$';
	}
	for (i = 0; i < max -2; i++)
	{
		conse[i+k] = '0'+conse_int[max - i-1];
	}
	if (token == 1)
		i++;
	conse[i] = '$';

	i = 0;
	while (conse[i] != '$')
	{
		cout << conse[i]; i++;
	}

	getchar(); getchar();
	return 0;
}