#include <bits/stdc++.h>
using namespace std;

int primeNo(){
  int n;
  cin>>n;
  if(n <= 1 ){
    cout<<"not applicable";    
  } 
  bool flag = 0;
  for(int i = 2; i <= sqrt(n) ; i++){
    if(n%i == 0){
        cout<<"not prime";
        flag = 1;
        break;
    }
 }
  if(flag== 0)
{
    cout<<"prime";
}
}

int main(){
primeNo();
return 0;
}