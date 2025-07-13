#include<bits/stdc++.h>
using namespace std;
bool lt3(int n){
     const int max3 = 1162261467;
     return n>0 && max3%n==0;
}

int main(){
    int n;
    cin >> n;
    if(lt3(n)) cout << "yes";
    else cout << "no";
}

