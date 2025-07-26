#include<bits/stdc++.h>
using namespace std;
void inmang(double a[],int n){
  int  max=a[0];
 for(int i=1;i <n;i++){
     if(a[i]>max)
    max=a[i];
}
cout << max;
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
inmang(a,n);
    return 0;
}







