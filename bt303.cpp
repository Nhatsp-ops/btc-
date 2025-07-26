#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<double>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
}
void contang(int n,vector<double>& a){
    vector<double> maxv;
for(int i=0;i<n;i++){
        int j=i;
      vector<double> v;
while(a[j]>0&& j<n){
    v.push_back(a[j]);
    j++;
}
if(v.size()>maxv.size()) maxv=v;
if(j==i) i++;
else i=j;
}
 for(auto x:maxv){
    cout << x << " ";
 }
}
int main(){

int n,x,k;
    cin >> n;
    vector<double> a(n);
nhapmang(a,n);
contang(n,a);
    return 0;}











































