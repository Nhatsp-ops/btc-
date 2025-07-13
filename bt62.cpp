#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
while(b!=0){
    int t=b;
    b=a%b;
    a=t;
}
return a;
}

int main(){
int a,b;
cin >> a >> b;
cout << ucln(a,b);
    return 0;
}























