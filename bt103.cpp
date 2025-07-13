#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int ngay,nam,thang;
    cin >>ngay>> thang>>nam;
    if(thang <1 && thang>12) return 0;
    bool nhuan;
    if(nam%4==0 && nam%100!=0) nhuan=1;
    else nhuan=0;
    if(thang==3 &&  ngay ==1){
            if(nhuan) ngay=29;
    else ngay=28;
    thang--;
        cout << ngay <<" "<< thang<<" " <<nam;
    return 0;
    }
    if(thang==2){
        if(nhuan && ngay <=29){
            ngay--;

        } else if(nhuan && ngay>29){ cout <<"ngay thang ko hop le";return 0;}
        if(!nhuan && ngay <=28) {
            ngay--;
        }else if(!nhuan && ngay >28) {cout << "ngay ko hop le";return 0;}
        if(ngay<1){
                ngay=31;
                thang--;
            }
                cout << ngay <<" "<< thang<<" " <<nam;
    return 0;
    }
    if(thang !=2 || thang !=3)
    switch(thang){
case 4:case 6:case 9: case 11:
    if(ngay>30){
        cout <<"ngay thang ko hop le";
        return 0;
    }
    ngay--;
    if(ngay <1){
        ngay=31;
        thang--;
    }
    break;
default:
   if(ngay>31){
        cout <<"ngay thang ko hop le";
        return 0;
    }
   ngay--;
   if(ngay<1){
    ngay =30;
    thang--;
   }
   if(thang <1){
        ngay++;
    thang=12;
    nam--;
   }
    }
    cout << ngay <<" "<< thang<<" " <<nam;
    return 0;
}





