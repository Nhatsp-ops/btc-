#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a<2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0) return false;
}
return true;
}
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
a.erase(remove_if(a.begin(),a.end(),[](int x){return snt(x);}),a.end());
for(auto x:a){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}





























