#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<iomanip>
#include<set>
#include<map>
#include<utility>
#include<list>
#include <queue>

using namespace std;

int main()
{
	int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << c << endl;
    }
    else if (c == b)
    {
        cout << a << endl;
    }
    else if (a == c)
    {
        cout << b << endl;
    }
    else 
    {
        cout << 0 << endl;
    }
}