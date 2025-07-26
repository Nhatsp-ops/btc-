
#include<bits/stdc++.h>
using namespace std;

int main(){
 int h;
 cin >>h;
 int s=h*2-1;
 for(int i=0;i<h;i++){
    for(int j=0;j<i+1;j++){
     cout <<"*";
    }
    cout << endl;
 }
    return 0;
}


