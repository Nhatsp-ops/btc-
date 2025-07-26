#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    }
    }
   rotate(a.begin(),a.end()-1,a.end());
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cout << a[i][j]<<" ";
    }
    cout << endl;
    }
}
int main(){
int n,m,x,y;

    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
    return 0;}





















































































