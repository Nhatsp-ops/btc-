#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int>& a,int n){
    int max=INT_MIN;
    int min=INT_MAX;
for(int i=0;i<n;i++){
    cin >> a[i];
    if(max<a[i]) max=a[i];
    if(min>a[i]) min=a[i];
    }
for(int i=0;i<n;i++){
if(a[i]==max) a[i]=min;
else if(a[i]==min) a[i]=max;
    }
for(auto x:a){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}



































