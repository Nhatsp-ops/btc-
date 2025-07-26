#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int>& a,int n,int k){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
rotate(a.begin(),a.end()-k,a.end());
for(auto x:a){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n>>k;
vector<int> a(n);
nhapmang(a,n,k);
    return 0;}




































