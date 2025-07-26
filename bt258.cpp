#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a<2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0)return false;
}
return 1;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(int a[],int n){
    vector<int> v,v2;
for(int i=0;i<n;i++){
    if(snt(a[i])){
            v.push_back(a[i]);
            v2.push_back(i);
    }
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
 a[v2[i]]=v[i];
}
for(int i=0;i<n;i++){
    cout << a[i]<< " ";
}
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}




















