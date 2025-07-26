#include<bits/stdc++.h>
using namespace std;
int n,m;
bool cucdai(vector<vector<double>>& a,int i,int j){
double val=a[i][j];
for(int k=0;k<m;k++){
    if(a[i][j]<a[i][k]) return false;
}
for(int k=0;k<n;k++){
    if(a[i][j]<a[k][j]) return false;
}
    for (int x = i - 1, y = j - 1; x >= 0 && y >= 0; x--, y--)
        if (a[x][y] >= val) return false;
    for (int x = i + 1, y = j + 1; x < n && y < m; x++, y++)
        if (a[x][y] >= val) return false;
    for (int x = i - 1, y = j + 1; x >= 0 && y < m; x--, y++)
        if (a[x][y] >= val) return false;
    for (int x = i + 1, y = j - 1; x < n && y >= 0; x++, y--)
        if (a[x][y] >= val) return false;
return true;
}
void nhapmang(vector<vector<double>>& a,int n,int m){
    double max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(cucdai(a,i,j)) max++;}
    }
    cout << max;
}
int main(){


    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}





























































