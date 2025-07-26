#include<bits/stdc++.h>
using namespace std;
int n,m;
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
int cucdai(vector<vector<double>>& a,int n,int m){
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(snt(a[i][j])) return 1;}
    }
    return 0;
}
void nhapmang(vector<vector<double>>& a,int n,int m){
    double max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
}
int main(){


    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
cout << cucdai(a,n,m);
    return 0;}
































































