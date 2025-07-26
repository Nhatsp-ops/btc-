#include<bits/stdc++.h>
using namespace std;
int n,m;

int cucdai(vector<vector<int>>& a,int n,int m){
    int max1=INT_MIN;
    bool found=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(a[i][j]%2==0){
        found=1;
     if(a[i][j]>max1) max1=a[i][j];
    }
    }
    }
    if(found)
    return max1;
    else return -1;
}
void nhapmang(vector<vector<int>>& a,int n,int m){
    double max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
}
int main(){


    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
 cout << cucdai(a,n,m);
    return 0;}











































































