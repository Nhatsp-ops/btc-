#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int n){
    int max=INT_MIN;
for(int i=0;i<n;i++){
    cin >> a[i];
    if(a[i]>max) max=a[i];
    }
a.erase(remove(a.begin(),a.end(),max),a.end());
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

























