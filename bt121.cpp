#include<bits/stdc++.h>
using namespace std;
bool soastrong(int n){
    long long tong=0;
    string s=to_string(n);
    int mu=s.size();
    for(int i=0;i<s.size();i++){
        tong+=pow(s[i]-48,mu);
    }
return tong==n;
}
int main(){
    int n=1000000;
for(int i=1;i<=n;i++){
    if(soastrong(i))
        cout << i << " ";
}

    return 0;
}



