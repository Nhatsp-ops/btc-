#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m,int x){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    }
    }
    a.erase(a.begin()+x);
    for(int i=0;i<n-x;i++){
    for(int j=0;j<m;j++){
    cout << a[i][j]<<" ";
    }
    cout << endl;
    }
}
int main(){
int n,m,x,y;

    cin >> n>>m>>x;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m,x);
    return 0;}























































































