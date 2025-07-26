#include<bits/stdc++.h>
using namespace std;
void nhapmang(double a[],int n){
    int max=INT_MIN;
for(int i=0;i<n;i++){
    cin >> a[i];
    if(max<a[i]) max=a[i];
}
for(int i=0;i<n;i++){
if(max==a[i]) cout << i << " ";
}
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);

    return 0;
}
















