#include<bits/stdc++.h>
using namespace std;
int n,m;

int cucdai(vector<vector<double>>& a,int n,int m){
    double max1= numeric_limits<double>::max();
    bool found=false;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(a[i][j]>0){
        found=true;
        if(a[i][j]<max1) max1=a[i][j];
    }
    }
    }
    if(found)
    return max1;
    else return -1;
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












































































