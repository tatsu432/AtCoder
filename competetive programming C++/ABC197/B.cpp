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
	int h, w, a, b;
	cin >> h >> w >> a >> b;
	vector<vector<char>> s(h, vector<char>(w));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> s[i][j];
		}
	}
	int c = 0;
	for (int i = a - 1; i >= 0; i--)
	{
		if (s[i][b - 1] == '#')
		{
			break;
		}
		c++;
	}
	for (int i = a - 1;  i < h; i++)
	{
		if (s[i][b - 1] == '#')
		{
			break;
		}
		c++;
	}
	for (int i = b - 1; i >= 0; i--)
	{
		if (s[a - 1][i] == '#')
		{
			break;
		}
		c++;
	}
	for (int i = b - 1; i < w; i++)
	{
		if (s[a - 1][i] == '#')
		{
			break;
		}
		c++;
	}
	c -= 3;
	cout << c << endl;
}