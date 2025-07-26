#include<bits/stdc++.h>
using namespace std;

void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(double a[],int n){
    bool found=false;
for(int i=0;i <n;i++){
     string s=to_string(abs(a[i]));
     if(s[0]%2==0){
        cout << a[i]<< " ";
        found=1;
     }
    }

if(!found) cout << "NOT FOUND";
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}








