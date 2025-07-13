
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tong=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0 && i*i!=n){
            tong+=i+(n/i);
        }else if(n%i==0){tong+=i;}
    }
    cout << tong;
    return 0;
}




