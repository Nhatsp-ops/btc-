#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
int tong=1;
int k=n;
while(n!=0){
    tong*=n%10;
    n/=10;
}
if(k!=0)
cout << tong;
else cout << 0;
    return 0;
}














