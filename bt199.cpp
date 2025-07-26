#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a<2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0) return false;
}
return true;
}
void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    if(snt(a[i])) cout <<i<<" ";
}

}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);

    return 0;
}


















