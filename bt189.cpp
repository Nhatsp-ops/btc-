#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
bool snt(int a){
if(a<2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0) return false;
}
return true;
}
void inmang(int a[],int n){
    bool found=false;
for(int i=0;i<n;i++){
    if(snt(a[i])){
        string s=to_string(a[i]);
        if((s[0]-48)%2!=0){
            cout << a[i]<< " " ;
            found=true;        }
    }
}
if(!found) cout << -1;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}





