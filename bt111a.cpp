#include<bits/stdc++.h>
using namespace std;

int main(){
 int h;
 cin >>h;
 int s=h*2-1;
 for(int i=0;i<h;i++){
    for(int j=1;j<=h+i;j++){
     if((j >=h-i) && (j <=h+i)) cout << "*";
     else cout << " ";
    }
    cout << endl;
 }
    return 0;
}
