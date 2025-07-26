#include<bits/stdc++.h>
using namespace std;
void inmang(int a[],int n){
 for(int i=1;i <n-1;i++){
        if(a[i]<abs(a[i+1])&&a[i]>a[i-1])
            cout << a[i]<<" ";
}
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
 inmang(a,n);
    return 0;
}













