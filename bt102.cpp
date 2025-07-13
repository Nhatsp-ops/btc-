#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int ngay,nam,thang;
    cin >>ngay>> thang>>nam;
    if(thang <1 && thang>12) return 0;
    bool nhuan;
    if(nam%4==0 && nam%100!=0) nhuan=1;
    else nhuan=0;
    if(thang==2){
        if(nhuan && ngay <=29){
            ngay++;
            if(ngay >29){
                ngay=1;
                thang++;
            }
         cout << ngay <<" "<< thang<<" " <<nam;
    return 0;} else if(nhuan && ngay >29) cout <<"ngay ko hop le";
        if(!nhuan && ngay<=28){
            ngay++;
            if(ngay >28){
                ngay=1;
                thang++;
            }
        cout << ngay <<" "<< thang<<" " <<nam;
    return 0;} else cout <<"ngay ko hop le";
    }
    if(thang!=2)
    switch(thang){
case 4:case 6:case 9: case 11:
    if(ngay>30){
        cout <<"ngay thang ko hop le";
        return 0;
    }
    ngay++;
    if(ngay >30){
        ngay=1;
        thang++;
    }
    break;
default:
   if(ngay>31){
        cout <<"ngay thang ko hop le";
        return 0;
    }
   ngay++;
   if(ngay>31){
    ngay =1;
    thang++;
   }
   if(thang >12){
    thang=1;
    nam++;
   }
    }
    cout << ngay <<" "<< thang<<" " <<nam;
    return 0;
}




