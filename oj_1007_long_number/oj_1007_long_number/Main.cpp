#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	string first,second;
	getline(cin, first);
	getline(cin, second);

	int i=0,length1=0,length2=0;
	while (first[i] != '.')
	{
		length1++;
		i++;
	}
	length1 += 2;
	i = 0;
	while (second[i] != '.')
	{
		length2++;
		i++;
	}
	length2 += 2;

	int* first_int = new int[length1];
	int* second_int = new int[length2];
	first_int[0] = first[length1]-'0';
	first_int[1] = first[length1-1]-'0';
	for (i = 2; i < length1; i++)
	{
		first_int[i] = first[length1 - i - 1]-'0';
	}
	second_int[0] = second[length2]-'0';
	second_int[1] = second[length2 - 1]-'0';
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

	char *conse = new char[max + 4];
	int k=0;
	if (token == 1)
	{
		conse[0] = '1'; k = 1; conse[max + 3] = '$';
	}
	else
	{
		conse[max + 3] = '$'; conse[max + 2] = '$';
	}
	for (i = 0; i < max -2; i++)
	{
		conse[i+k] = '0'+conse_int[max - i-1];
	}
	if(token==1)
	i++;
	conse[i] = '.';
	i++;
	conse[i] = conse_int[1]+'0';
	i++;
	conse[i] = conse_int[0]+'0';
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