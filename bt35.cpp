
#include<bits/stdc++.h>
using namespace std;
double tinhs(int n){
double s=sqrt(n);
for(int i=1;i<n;i++){
    s=sqrt(s+(n-i));
}
return s;
}

int main(){
    int n;
    cin >> n;
        cout << tinhs(n);
    return 0;
}











