#include<bits/stdc++.h>
using namespace std;
void inmang(int a[],int n){
 for(int i=0;i <n;i++){
    cout << a[i] << " ";
}
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
inmang(a,n);
    return 0;
}






