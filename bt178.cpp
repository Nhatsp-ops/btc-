#include<bits/stdc++.h>
using namespace std;
void inmang(int a[],int n,int x,int y){
 for(int i=0;i <n;i++){
        if(a[i]<=y && a[i]>=x && a[i]%2==0)
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
    cin >> n>>x>>y;
int a[n];
nhapmang(a,n);
 inmang(a,n,x,y);
    return 0;
}











