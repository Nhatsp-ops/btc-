
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max=1;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2==1 && max<i) max=i;
            if((n/i)%2==1 && max<n/i)max=n/i;
        }}
    cout << max;
    return 0;
}






