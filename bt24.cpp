
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.insert(i);
            v.insert(n/i);
        }
    }
    for(auto x:v){
            if(x%2==1)
        cout << x <<" ";
    }
    return 0;
}




