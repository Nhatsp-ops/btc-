#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<double>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(vector<double>& a,int n){
    vector<double> b;
for(int i=0;i <n;i++){
        if(i==0) {b.push_back(a[i+1]);}
        if(i==n-1)  {b.push_back(a[i-1]);}
        if(i!=0 && i!=n-1) {b.push_back(a[i+1]+a[i-1]);}
    }
    for(auto x:b){
        cout << x<<" ";
    }
}

int main(){
    int n;
    cin >> n;
vector<double> a(n);
nhapmang(a,n);
inmang(a,n);
    return 0;}











