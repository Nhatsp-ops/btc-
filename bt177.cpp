#include<bits/stdc++.h>
using namespace std;
void inmang(double a[],int n,int x,int y){
 for(int i=0;i <n;i++){
        if(a[i]<=y && a[i]>=x)
            cout << a[i]<<" ";
}
}
void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n,x,y;
    cin >> n>>x>>y;
double a[n];
nhapmang(a,n);
 inmang(a,n,x,y);
    return 0;
}










