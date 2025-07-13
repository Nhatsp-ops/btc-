#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> x>>n;
    long long tong ;
    if(x!=1){
        tong=x*(((pow(x*x,1+n)-1))/(x*x-1));
    }else{tong =n;}
    cout << tong;
    return 0;
}




