#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int n,int x){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
a.erase(remove(a.begin(),a.end(),x),a.end());
for(auto val:a){
    cout << val << " ";
}
}

int main(){
    int n,x;
    cin >> n>>x;
vector<int> a(n);
nhapmang(a,n,x);
    return 0;}





























