#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int n){
    map<int,int> m;
for(int i=0;i<n;i++){
    cin >> a[i];
    m[a[i]]++;
    }
for(auto val:a){
        if(m[val]==1)
    cout << val << " ";
}
}

int main(){
    int n,x;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}





























