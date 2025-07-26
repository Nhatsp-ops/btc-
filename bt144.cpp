#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
}
if(n!=1)
return 1;
else return 0;
}
int inmang(int a[],int n){
 for(int i=0;i <n;i++){
        if(snt(a[i]))
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









