#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
bool chusole(int n){
string s= to_string(n);
   for(int i=0;i<s.size();i++){
    if((s[i]-48)%2==0){return 0;}}
   return 1;
}
void inmang(int a[],int n){
    bool found=false;
for(int i=0;i<n;i++){
    if(chusole(a[i])){
            cout << a[i]<< " " ;
            found=true;        }
    }
if(!found) cout << -1;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}






