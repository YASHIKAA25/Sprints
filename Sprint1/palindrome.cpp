#include <bits/stdc++.h> 
using namespace std;

// int palindrome(string s){
//     int n = s.size();
//     for(int i = 0; i<s.size() ; i++){
//         if( s[i] == s[n-1-i]){
//             return 1;
//         }
//     }
// }
void isPalindrome(string str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev){
        cout<< "true" ;
    } else{
        cout<<"false";
    }
}

int main(){
    string s;
    cout<< " enter a string : ";
    cin>> s;
    isPalindrome(s);
}

// // C++ program to check whether the string
// // is palindrome or not using loop
// #include <bits/stdc++.h>
// using namespace std;

// void isPalindrome (string str) {
  
//       // Specify the starting and ending indexes
//     int left = 0, right = str.size() - 1;
  
//       // Flag to terminate the loop if mismatch
//       // characters found
//       bool flag = true;
      
//       // Till the left is less than right
//     while (left < right) {

//         // If any character not match, break the
//         // loop, string is not palindrome
//         if (str[left] != str[right]) {
//             flag = false;
//             break;
//         }
//         left++;
//         right--;
//     }
      
//       if (flag)
//         cout << "\"" << str
//           << "\" is palindrome." << endl;
          
//     else
//         cout << "\"" << str
//           << "\" is NOT palindrome." << endl;
// }
  

// int main() {
  
//       // Checking if given strings are palindrome
//       isPalindrome("ABCDCBA");
//     isPalindrome("ABCD");            
//     return 0;
// }