#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    int x;
    cin >> x;
    auto it=a.begin();
    while(it!=a.end()&&*it>x){
        it++;
    }
    a.insert(it,x);
}
for(auto x:a){
    cout << x<<" ";
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a;
nhapmang(a,n);
    return 0;}





















