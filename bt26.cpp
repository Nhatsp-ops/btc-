
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tong=1;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0 && i*i!=n){
            if(i%2==1)tong*=i;
            if((n/i)%2==1) tong*=n/i;
        }else if(n%i==0 && i%2==1){tong*=i;}
    }
    cout << tong;
    return 0;
}






