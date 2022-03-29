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
	string s;
	cin >> s;
	for (int i = 1; i < s.size(); i++)
	{
		cout << s[i];
	}
	cout << s[0] << endl;
}