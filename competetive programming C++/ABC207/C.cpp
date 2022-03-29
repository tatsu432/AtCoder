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
    int data[2001][3];
    for(int i = 0; i < n; i++)
    {
        cin >> data[i][0] >> data[i][1] >> data[i][2];
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int pp = 0;
            int t = data[i][0];
            int tt = data[j][0];
            
            if((t == 1 || t == 3) && (tt == 1 || tt == 2))
            {
                if(data[i][2] >= data[j][1])
                {
                    pp++;
                }
            }
            else
            {
                if(data[i][2] > data[j][1])
                {
                    pp++;
                }
            }
            
            if((t == 1 || t == 2) && (tt == 1 || tt == 3))
            {
                if(data[j][2] >= data[i][1])
                {
                    pp++;
                }
            }
            else
            {
                if(data[j][2] > data[i][1])
                {
                    pp++;
                }
            }

            if(pp == 2)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
