
#include<bits/stdc++.h>
using namespace std;

void nhapmang(unordered_map<int,int> a,int n){
for(int i=0;i<n;i++){
    int x;
    cin >> x;
    a[x]++;
}
for(auto x:a){
        if(x.second==1)
    cout << x.first << ",";
}
}
int main(){
    int n,x,y;
    cin >> n;
unordered_map<int,int> a;
nhapmang(a,n);
    return 0;}















