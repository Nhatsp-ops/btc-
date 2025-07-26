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
    vector<int> v;
for(int i=1;i<n;i+=2){
    if(i%2==1) v.push_back(a[i]);
}
sort(v.begin(),v.end());
int indx=0;
for(int i=1;i<n;i+=2){
 a[i]=v[indx++];
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



















