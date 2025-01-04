#include <bits/stdc++.h>
using namespace std;

int fibonacciSeries(int n){
    // int n;
    // cout<<"how many no? :";
    // cin>> n;
    if (n <= 1 ) 
        return n;
    // if(n==1) return 1;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    // return fib;
}

int main(){
    int n;
    cin>> n;
    for(int i=0; i< n; i++){
            cout << fibonacciSeries(i) <<" ";
            // cout<<" ";
    }
    return 0;
}

// // C++ Program to print the nth Fibonacci number using
// // tail recursion
// #include <iostream>
// using namespace std;

// // Helper function to find the nth fibonacci number
// // using recursion
// int fibHelper(int n, int prev2, int prev1) {
  
//     // When n reaches 0, return prev2
//     if (n == 0) {
//         return prev2;
//     }
  
//     // When n reaches 1, return prev1
//     if (n == 1) {
//         return prev1;
//     }
    
//     // Recursive call with updated parameters to find
//       // rest of the fibonacci numbers
//     return fibHelper(n - 1, prev1, prev2 + prev1);
// }

// int fib(int n) {

//       // Calling recursive function
//     return fibHelper(n, 0, 1);
// }

// int main() {
//     int n = 5;

//     // Finding the nth Fibonacci number
//     cout << fib(n);
//     return 0;
// }








// // C++ Program to find the nth fibonacci number using
// // loops
// #include <bits/stdc++.h>
// using namespace std;

// int fib(int n) {
  
//       // For 0th and 1st term
//     if (n <= 1)
//         return n;
    
//       // Variable to store the last two terms
//     int prev1 = 1, prev2 = 0;
      
//       // Variable that stores the current fibonacci term
//       int curr;

//     // Calculating the next fibonacci number by using
//       // the previous two number
//     for (int i = 2; i <= n; i++) {
//         curr = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return curr;
// }

// int main() {
//     int n = 5;
    
//       // Finding the nth fibonacci number
//     cout << fib(n);
//     return 0;
// }