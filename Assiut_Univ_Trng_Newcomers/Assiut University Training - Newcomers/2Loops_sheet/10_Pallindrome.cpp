#include<bits/stdc++.h>
using namespace std;


void check_Pallindrome(int n); // function prototype      // function declaration


int main() {

    int n;
    cin >> n;

    check_Pallindrome(n); // function call 


    return 0;
}


// function definition
void check_Pallindrome(int n) {
    // int original = n; // Store the original number
    // int reversed = 0;

    // while(n > 0) {
    //     int digit = n % 10; // Get the last digit
    //     reversed = reversed * 10 + digit; // Build the reversed number
    //     n = n/10; // Remove the last digit
    // }

    // or 
    // Using string to check for palindrome
    string original = to_string(n); // Convert the number to a string
    string reversed = original; // Copy the original string
    reverse(reversed.begin(), reversed.end()); // Reverse the string

    int i=0; string rev_no_leading_zeros = "";
    // Remove leading zeros from the reversed string
    while(reversed[i] == '0') {
        i++; 
        continue; // Skip leading zeros
    }

    while(i < reversed.length()) {
        //if(reversed[i] != '0') {
        rev_no_leading_zeros += reversed[i];
        //}
        i++;
    }


    cout << rev_no_leading_zeros << endl;

    if(original == reversed) {
        cout << "YES" << endl; // It's a palindrome
    } else {
        cout << "NO" << endl; // It's not a palindrome
    }
}