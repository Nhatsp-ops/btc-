#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
    string chan="",le="";
for(auto x:a){
    if(x%2==0){
        chan+=to_string(x)+" ";
    }else {
    le+=to_string(x)+" ";}}
    cout << chan << endl<< le;
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}




































