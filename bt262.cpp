#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(int a[],int n){
    vector<int> v1,v2,v3,v4;
for(int i=0;i<n;i++){
    if(a[i]%2==0){
            v1.push_back(a[i]);
            v2.push_back(i);
    }else{
    v3.push_back(a[i]);
    v4.push_back(i);
    }
}
sort(v1.begin(),v1.end());
sort(v3.begin(),v3.end());
for(int i=0;i<v1.size();i++){
 a[v2[i]]=v1[i];
}
for(int i=0;i<v3.size();i++){
 a[v4[i]]=v3[i];
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





















