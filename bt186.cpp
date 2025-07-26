#include<bits/stdc++.h>
using namespace std;

void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
double amdautien(double a[],int n){
 for(int i=0;i <n;i++){
        if(a[i]<0)
            return a[i];
}
return 0;
}

void inmang(double a[],int n){
    int amfirst=amdautien(a,n);
    if(amfirst==0){
        cout << -1;
        return ;
    }
 for(int i=0;i <n;i++){
        if(a[i]==amfirst) cout << i << " ";

}
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}


