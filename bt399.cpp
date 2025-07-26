#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m){
    vector<int> b;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    }
    }
for(int i=0;i<m;i++) b.push_back(a[0][i]);
for(int i=1;i<n;i++) b.push_back(a[i][m-1]);
for(int i=m-1;i>=0;i--) b.push_back(a[n-1][i]);
for(int i=n-2;i>0;i--) b.push_back(a[i][0]);
rotate(b.begin(),b.begin()+1,b.end());
int k=0;
for(int i=0;i<m;i++) a[0][i]=b[k++];
for(int i=1;i<n;i++) a[i][m-1]=b[k++];
for(int i=m-1;i>=0;i--) a[n-1][i]=b[k++];

for(int i=n-2;i>0;i--) a[i][0]=b[k++];
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
























































































