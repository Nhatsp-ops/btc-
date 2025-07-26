#include<bits/stdc++.h>
using namespace std;
int n,m;

int cucdai(vector<vector<int>>& a,int n,int m){
    int max1=INT_MIN;
    int max2=INT_MIN;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    int val=a[i][j];
    if(val >max1){
            max2=max1;
        max1=val;
    }else{if (val > max2) max2=val;}
    }
    }
    return max2;
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











































































