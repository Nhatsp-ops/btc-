#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
int tong=0;
for(int i=1;i<sqrt(a);i++){
    if(a%i==0){
        tong+=i+(a/i);
    }
}
if(tong-a==a) return 1;
else return 0;
}

int cucdai(vector<vector<int>>& a,int n,int m){
    int max1= INT_MAX;
    bool found=false;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(snt(a[i][j])){
        found=true;
        if(a[i][j]<max1) max1=a[i][j];
    }
    }
    }
    if(found)
    return max1;
    else return 1;
}
void nhapmang(vector<vector<int>>& a,int n,int m){
    double max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
}
int main(){
int n,m;

    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
 cout << cucdai(a,n,m);
    return 0;}















































































