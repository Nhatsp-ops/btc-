#include<bits/stdc++.h>
using namespace std;

int main(){
    int ngay,nam,thang;
    cin >>ngay>> thang>>nam;
    if(thang <1 && thang>12) return 0;
    bool nhuan;
    if(nam%4==0 && nam%100!=0) nhuan=1;
    else nhuan=0;
int songay=ngay;

if(thang==2){
    songay+=31;
    thang--;
}
thang--;
for(int i=thang;i>1;--i){
     switch(i){
case 4:case 6:case 9: case 11:
    songay+=30;
case 2:
    if(nhuan) songay+=29;
    else songay+=28;
default:
    songay+=31;
    }
}
   cout <<"day la ngay thu " << songay <<" trong nam";
    return 0;
}




