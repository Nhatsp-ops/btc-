#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
a.erase(remove_if(a.begin(),a.end(),[](int x){return x ==sqrt(x)*sqrt(x);}),a.end());
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




























