#include<bits/stdc++.h>
using namespace std;
int n,m;

void cucdai(vector<vector<int>>& a,int n,int m){

for(int j=0;j<m;j++){
        auto cmp = [j](const vector<int>& a, const vector<int>& b) {
    return a[j] < b[j];
};
     auto it=min_element(a.begin(),a.end(),cmp);
    int max_val=(*it)[j];
    cout << max_val<<" ";
}
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
 cucdai(a,n,m);
    return 0;}














































































