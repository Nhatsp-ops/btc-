#include <bits/stdc++.h>

using namespace std;
int main()
{
    // bai nay co tham khao cua ban va chatgpt ve cach dem so uoc cua mot so bang phan tich thua so nguyen to
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
