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
    int n;
    cin >> n;
    n = n * 108 / 100;
    if(n < 206)
    {
        cout << "Yay!" << endl;
    }
    else if (n == 206)
    {
        cout << "so-so" << endl;
    }
    else 
    {
        cout << ":(" << endl;
    }

}
