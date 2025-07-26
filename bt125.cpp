#include<bits/stdc++.h>
using namespace std;
bool check(int n){
 for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
          return 0;
        }}
        if(n!=1)
       return 1;
        else return 0;
}
int main(){
    int n;
    int dem=0;
    cin >> n;
int a[n];
for(int i=0;i<n;i++){
    cin >> a[i];
}
for(int i=0;i<n;i++){
    if(check(a[i])) dem++;
}
cout << dem;
    return 0;
}



