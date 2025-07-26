#include<bits/stdc++.h>
using namespace std;
bool cp(int a){
if(a==sqrt(a)*sqrt(a)) return true;
else return false;
}
void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    if(cp(a[i])) cout <<i<<" ";
}

}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);

    return 0;
}


















