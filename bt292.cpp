#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<double>& a,int n){
    int max=INT_MIN;
    int min=INT_MAX;
for(int i=0;i<n;i++){
    cin >> a[i];
    a[i]=round(a[i]);
    }
for(auto x:a){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<double> a(n);
nhapmang(a,n);
    return 0;}




































