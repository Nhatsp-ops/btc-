#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
double chanln(int a[],int n){
  int  max=INT_MIN;
bool found=false;
  for(int i=0;i<n;i++){
    if(a[i]%2==0 && a[i]>max){
        max=a[i];
        found=true;
    }
  }
  if(found)
 return max;
 else return -1;
}
void inmang(int a[],int n){
    int chan_ln=chanln(a,n);
    if(chan_ln==-1){
        cout << -1;
        return ;
    }
 for(int i=0;i <n;i++){
        if(a[i]==chan_ln) cout << i << " ";

}
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}




