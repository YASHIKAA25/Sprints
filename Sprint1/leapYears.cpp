#include<iostream>
using namespace std;

int leapYear(){
    int n ;
    cin >>n;
    if(n %4==0 && (n%100!= 0 || n%400 ==0)){
        cout<<"leap year";
    } else{
        cout<<"not leap year";
    }

}

int main(){
    leapYear();
    return 0;
}