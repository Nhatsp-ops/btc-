#include<bits/stdc++.h>
using namespace std;
bool check(int n){
 string s=to_string(n);
      for(auto c:s){
        if((c-48)%2==0) return 0;
      }
      return 1;
}
int inmang(int a[],int n){
    int max;
    int pos=-1;
 for(int i=0;i <n;i++){
     if(check(a[i])){
        max=a[i];
        pos=i;
        break;
     }
     }
     if(pos==-1) return 0;
      for(int i=pos;i<n;i++){
        if(check(a[i])&& max < a[i]){
            max=a[i];
        }
}
return max;
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





