// #include <bits/stdc++.h>
// using namespace std;

// int armstrongNo(){
//     int n ;
//     cin >> n;
//     int sum = 0;
//     int originaln = n ;

//     while(n>0){
//         int lastdigit = n%10;
//         sum += pow(lastdigit , 3);
//         n = n/10;
//     }

//     if(sum == originaln){
//         cout<<"armstrong";
//     }
//     else{
//         cout <<"no strong";
//     }
//     return 0;
// }

// int main(){
//     armstrongNo();
    
// }

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int originaln = n;
    int sum = 0;

    // Calculate the number of digits
    int numDigits = 0;
    int temp = n;
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }

    // Calculate the Armstrong sum
    while (n > 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit, numDigits);
        n /= 10;
    }

    // Check if sum matches the original number
    return sum == originaln;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}
