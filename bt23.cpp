#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,s=1,p=0;
    cin >> n;
    int i  = 2;
    while(n > 1)
    {
        if(n % i == 0)
        {
            n = n/i;
            p++;
        }
        else
        {
            i++;
            if(p != 0)
            {
                s = s * (p+1);
            }
            p = 0;
        }
    }
    if(p != 0)
    {
        s = s * (p+1);
    }
    cout << s;
    return 0;
