
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    int tong =0;
    for(int i=1;i<n;i++){
            k=i;
        tong+=k;
        if(tong >= n){
                k--;
            break;
        }
    }
    cout << k;
    return 0;
}












