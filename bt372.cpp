#include<bits/stdc++.h>
using namespace std;
int n,m;

void cucdai(vector<vector<double>>& a,int n,int m){

for(int i=0;i<n;i++){
      double maxrow=*max_element(a[i].begin(),a[i].end());
    cout << maxrow <<endl;
}
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
 cucdai(a,n,m);
    return 0;}













































































