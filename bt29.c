
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tong=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0 && (n/i)%2!=0){
           cout << i;
           return 0;
    }
    cout << 1;
    return 0;
}





