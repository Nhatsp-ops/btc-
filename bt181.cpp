#include<bits/stdc++.h>
using namespace std;
void inmang(int a[],int n){
 for(int i=0;i <n;i++){
    if(a[i]%2==0){
        if(i==0) if(a[i+1]%2==0) cout << a[i]<< " ";
        if(i==n-1) if(a[i-1]%2==0) cout << a[i]<< " ";
        if(i!=0 && i!=n-1) if(a[i+1]%2==0||a[i-1]%2==0) cout << a[i]<<" ";
    }

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














