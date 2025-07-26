#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
int dem=count(a.begin(),a.end(),1);
a.erase(remove(a.begin(),a.end(),1),a.end());
for(int i=0;i<dem;i++){
    a.insert(a.begin(),1);
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































