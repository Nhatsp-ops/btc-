#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
for(auto x:a){
    if(x%2==0){
        setColor(14);
        cout <<x<< " ";
    }else { setColor(7);
    cout << x << " ";}}
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}




































