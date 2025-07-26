#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(int a[],vector<int>& b,int n){
    vector<int> v1,v2;
for(int i=0;i<n;i++){
    if(a[i]==0){
            v1.push_back(a[i]);
    }else if(a[i]==1){
    v2.push_back(a[i]);
    }
}
int i=0,j=0;
while(i<v1.size() && j<v2.size()){
    b.push_back(v2[i]);
    b.push_back(v1[i]);
    i++;
    j++;
}
if(j<v2.size() && b[b.size()-1]==0) b.push_back(1);
for(int i=0;i<b.size();i++){
    cout << b[i]<< " ";
}
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
vector<int> b;
nhapmang(a,n);
inmang(a,b,n);
    return 0;}






















