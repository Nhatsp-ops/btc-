#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(int a[],int n){
    double tong=0;
for(int i=0;i <n;i++){
       string s=to_string(a[i]);
       reverse(s.begin(),s.end());
       if(s==to_string(a[i])) tong+=a[i];
    }
    cout << tong;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}










