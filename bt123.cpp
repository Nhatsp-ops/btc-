#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
int a[n];
for(int i=0;i<n;i++){
    cin >> a[i];
}
int min=a[0];
int posmin=0;
for(int i=1;i<n;i++){
    if(min>a[i]){
        min=a[i];
        posmin=i;
    } ;
}
cout << posmin;
    return 0;
}



