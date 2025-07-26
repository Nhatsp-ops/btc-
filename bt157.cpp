#include<bits/stdc++.h>
using namespace std;
void inmang(double a[],int n){
int min=floor(a[0]);
int max=ceil(a[0]);
for(int i=1;i<n;i++ ){
    if(min > a[i]) min=floor(a[i]);
    if(max <a[i]) max=ceil(a[i]);
}
cout <<"["<< min <<";"<< max<<"]";
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















