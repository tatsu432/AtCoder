#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<iomanip>
#include<set>
#include<utility>
using namespace std;

int main()
{
	bool flag = true;
	int count = 0;
	vector<char> n (1000, 'm');
	for(int i = 0; i < 1000; i++)
	{
		char a;
		cin >> a;
		if (a != '.')
		{
			n[i] = a;
			count++;
		}
		else
		{
			flag = false;
			break;
		}
	}
	if (!flag)
	{
		for (int i = 0; i < 1000; i++)
		{
			if (n[i] != 'm')
			{
				cout << n[i];
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		bool f = true;
		for (int i = 0; i < 1000; i++)
		{
			for (int j = 0; j < 101; j++)
			{
				if (n[i] == n[i + j])
				{

				}
				else
				{
					f = false;
				}
			}
			if (f == false)
			{
				cout << n[i];
			}
			else
			{
				cout << n[i];
				break;
			}
			f = true;
		}
	}
	cout << endl;
}