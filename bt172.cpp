
#include<bits/stdc++.h>
using namespace std;
int BCNN(int a,int b){
    int x=a;int y=b;
while(b!=0){
    int t=b;
    b=a%b;
    a=t;
}
return (x*y)/a;
}
int inmang(int a[],int n){
    if(n <2) return a[0];
    int bc=BCNN(a[0],a[1]);
    for(int i=2;i<n;i++){
        bc=BCNN(bc,a[i]);
    }
    return bc;
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











