#include<bits/stdc++.h>
using namespace std;
int cucdai(vector<vector<int>>& a,vector<vector<int>>& b,int n,int m,int x,int y){
if(x >n || y>m) return 0;
int dem=0;
for(int i=0;i<=n-x;i++){
    for(int j=0;j<=m-y;j++){
            bool found=true;
        for(int start=0;start<x;start++){
            for(int end=0;end<y;end++){
                if(a[start+i][end+j]!=b[start][end]) {found=false;break;}
           }
        if(!found) break;
        }
    if(found) dem++;}
}
return dem;
}
void nhapmanga(vector<vector<int>>& a,int n,int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
}
void nhapmangb(vector<vector<int>>& b,int x,int y){
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++)
    cin >> b[i][j];
    }
}
int main(){
int n,m,x,y;
    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));

nhapmanga(a,n,m);
cin >> x >> y;
    vector<vector<int>> b(x,vector<int>(y));
nhapmangb(b,x,y);
cout << cucdai(a,b,n,m,x,y);
    return 0;}










































































