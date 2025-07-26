#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<int>& a,vector<int>& b,int n,int m){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
    for(int i=0;i<m;i++){
    cin >> b[i];
    }
}
int checkcon(vector<int>& a,vector<int>& b,int n,int m){
 if(n>m) return 0;
 int dem=0;
 for(int i=0;i<=m-n;i++){
         bool found=true;
    for(int j=0;j<n;j++){
        if(a[j]!=b[j+i]){
            found=false;
            break;
        }
    }
    if(found) dem++;
 }
 return dem;
}

int main(){
int n,m;
    cin >> n>>m;
        vector<int> a(n);
        vector<int> b(m);
nhapmang(a,b,n,m);
cout << checkcon(a,b,n,m);
    return 0;}












































