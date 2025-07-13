#include<bits/stdc++.h>
using namespace std;


int main(){
int thang;
cin >> thang;
int qui=
thang <= 3 ? 0+1
:thang <=6 ?0+2
:thang <=9?0+3
:thang <= 12 ? 0+4
: 0+0;
if(thang >0 && qui >0){
    cout << "qui trong nam la qui " << qui;
}else cout <<"thang ko hop le";
    return 0;
}


























