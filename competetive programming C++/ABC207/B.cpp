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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b >= c * d)
    {
        cout << -1 << endl;
    }
    else 
    {
        long long k = c * d - b;
        if(a % k == 0)
        {
            cout << a / k << endl;
        }
        else
        {
            cout << a / k + 1 << endl;
        }
    }
}
