#include<bits/stdc++.h>
using namespace std;
int inmang(int a[],int n,int x,int y){
 for(int i=0;i <n;i++){
        if(a[i]>x && a[i]<y)
            return a[i];
}
return x;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n,x,y;
    cin >> x>>y>>n;
int a[n];
nhapmang(a,n);
cout <<inmang(a,n,x,y);
    return 0;
}










