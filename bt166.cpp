#include<bits/stdc++.h>
using namespace std;
bool lt2(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int inmang(int a[],int n){
 for(int i=0;i <n;i++){
        if(lt2(a[i]))
            return a[i];
}
return -1;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n;
    cin >> n;
int a[n];
nhapmang(a,n);
cout <<inmang(a,n);
    return 0;
}















