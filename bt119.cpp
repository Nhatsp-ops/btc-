#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
  int snt[n+1]={1};
  fill(snt, snt + n + 1, 1);
  for(int i=2;i<=n;i++){
    if(snt[i]){
            cout << i << " ";
        for(int j=i*i;j<=n;j+=i){
            snt[j]=0;
        }
    }
  }

    return 0;
}

