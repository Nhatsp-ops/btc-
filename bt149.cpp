
#include<bits/stdc++.h>
using namespace std;
bool sht(int n){
if (n < 2) return false;
int tong=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0 && i*i!=n){
            tong+=i+(n/i);
        }else if(n%i==0){tong+=i;}
    }
    if(tong-n==n){
         return 1;
    }else{return 0;}
}
int inmang(int a[],int n){
 for(int i=n-1;i>=0;i++){
        if(sht(a[i]))
            return a[i];
}
return -1;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n;
    cin >> n;
int a[n];
nhapmang(a,n);
cout << inmang(a,n);
    return 0;
}










