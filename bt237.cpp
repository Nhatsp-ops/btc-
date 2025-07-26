
#include<bits/stdc++.h>
using namespace std;

void nhapmang(unordered_map<int,int> a,int n){
for(int i=0;i<n;i++){
    int x;
    cin >> x;
    a[x]++;
}
int tansuat=0;
for(auto x:a){
    if(x.second > tansuat) tansuat=x.second;
}
cout << a[tansuat];
}
int main(){
    int n,x,y;
    cin >> n;
unordered_map<int,int> a;
nhapmang(a,n);
    return 0;}
















