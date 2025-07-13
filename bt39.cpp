
#include<bits/stdc++.h>
using namespace std;
double tinhs(int n){
double s=0.0;
double gt=1.0;
for(int i=1;i<=n;i++){
        gt*=i;
    s=pow(gt+s,(1.0/(i+1)));
}
return s;
}

int main(){
    int n;
    cin >> n;
        cout << tinhs(n);
    return 0;
}













