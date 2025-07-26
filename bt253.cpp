#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int> a,vector<int> b,int n,int m){
for(int i=0;i<n;i++){
    cin >> a[i];
}
for(int i=0;i<m;i++){
    cin >> b[i];
}
}
int inmang(vector<int> a,vector<int> b,int n,int m){
    for(int i=0;i<n;i++){
        auto it=find(b.begin(),b.end(),a[i]);
        if(it ==b.end()) return 0;
    } return 1;
}

int main(){
    int n,m;
    cin >> n>>m;
vector<int> a(n);
vector<int> b(m);
nhapmang(a,b,n,m);
cout << inmang(a,b,n,m);
    return 0;}
















