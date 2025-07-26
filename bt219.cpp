#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin >> n>>x;
map<int,int> a;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    a[k]++;
}
cout << a[x];
    return 0;}












