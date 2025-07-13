
#include<bits/stdc++.h>
using namespace std;
double tinhs(int x,int n){
double s=sqrt(x);
int mu=x;
for(int i=1;i<n;i++){
        mu*=x;
    s=sqrt(s+mu);
}
return s;
}

int main(){
    int n,x;
    cin >>x>> n;
        cout << tinhs(x,n);
    return 0;
}











