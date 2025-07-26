#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
vector<int> result;
set<int> v;
for(int i=0;i<n;i++){
    if(v.find(a[i])==v.end()){
        result.push_back(a[i]);
        v.insert(a[i]);
    }
}
for(auto x:result){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}






























