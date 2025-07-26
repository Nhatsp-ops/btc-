#include<bits/stdc++.h>
using namespace std;
double inmang(double a[],int n){
 for(int i=n-1;i >=0;i--){
        if(a[i]<0 && a[i]>-1)
            return a[i];
}
return -1;
}
void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n;
    cin >> n;
double a[n];
nhapmang(a,n);
cout <<inmang(a,n);
    return 0;
}









