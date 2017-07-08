#include<iostream>
using namespace std;
bool check(int[]);
int main() {
	int task,i, j;
	cin >> task;
	int grid[9][9];
	int list[9];
	bool flag = 1;
	int center[3] = {1,4,7};
	while (task != 0)
	{
		flag = 1;
		task--;
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				cin >> grid[i][j];
			}
		}
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				list[j] = grid[j][i];
			}
			flag = flag&check(list);
		}
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				list[j] = grid[i][j];
			}
			flag = flag&check(list);
		}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				list[0] = grid[center[i]-1][center[j]-1];
				list[1] = grid[center[i] ][center[j] - 1];
				list[2] = grid[center[i] + 1][center[j] - 1];
				list[3] = grid[center[i] - 1][center[j] ];
				list[4] = grid[center[i] ][center[j] ];
				list[5] = grid[center[i] + 1][center[j] ];
				list[6] = grid[center[i] - 1][center[j] + 1];
				list[7] = grid[center[i] ][center[j] + 1];
				list[8] = grid[center[i] + 1][center[j] + 1];
				flag=flag&check(list);
			}
		}
		if(flag)
		{
			cout << "Right" << endl;
		}
		else
		{
			cout << "Wrong" << endl;
		}
	}
	getchar(); getchar();
	return 0;
}

bool check(int list[])
{
	bool flag_panel[9];
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		flag_panel[i] = 0;
	}
	for (i = 0; i < 9; i++)
	{
		if (flag_panel[list[i]-1] == 0)
			flag_panel[list[i]-1] = 1;
		else
			return 0;
	}
	return 1;
}
