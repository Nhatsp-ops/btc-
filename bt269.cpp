#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int x,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
auto pos=lower_bound(a.begin(),a.end(),x);
a.insert(pos,x);
for(auto val:a){
    cout << val << " ";
}
}

int main(){
    int n,x,k;
    cin >> n>>x;
vector<int> a(n);
nhapmang(a,x,n);
    return 0;}






















