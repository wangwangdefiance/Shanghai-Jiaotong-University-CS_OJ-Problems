#include<iostream>
using namespace std;
int main() {
	int scale,i;
	cin >> scale;
	int* list=new int[scale];
	for (i = 0; i < scale; i++)
	{
		cin >> list[i];
	}

	int* tail = list;
	i = 0;
	int max=0,max_tmp=0,k=0;
	bool lock = 1;
	if (scale == 1)
		cout << "Game Over";
	if (scale == 2)
	{
		if ( list[0]+list[1]<=0)
		{
			cout << "Game Over"; return 0;
		}
		else
		{
			cout << list[0] + list[1]; return 0;
		}
	}
	while (i< scale)
	{
		while (i < scale)
		{
			if (*tail <= 0)
			{
				tail++; i++;
			}

			else break;
		}
		if (max_tmp < 0) { max_tmp = 0; }
	
		while (max_tmp >= 0 && i<scale)
		{
			max_tmp += *tail;
			tail++; i++;
			if (max_tmp > max)
			{
				max = max_tmp; k++;
			}
		}
	}
	if (k == 1)//abnormal
	{
		max = 0; max_tmp = 0;
		int i_tmp, j_tmp,k_tmp;
		for (i_tmp = 0; i_tmp < scale-1; i_tmp++)
		{
			for (j_tmp = scale - 1; j_tmp > i_tmp; j_tmp--)
			{
				for (k_tmp = i_tmp; k_tmp <= j_tmp; k_tmp++)
				{
					max_tmp += list[k_tmp];
				}
				if (max_tmp > max)
				{
					max = max_tmp;
				}
				max_tmp = 0;
			}

			
		}
	}

	if (max <= 0 )
		cout << "Game Over";
	else
		cout << max;
	getchar(); getchar();
	return 0;
}