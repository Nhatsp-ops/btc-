
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
          cout << "no";
          return 0;
        }}
        if(n!=1)
        cout << "yes";
        else cout << "no";
    return 0;
}






