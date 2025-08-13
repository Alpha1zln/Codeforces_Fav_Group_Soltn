#include<bits/stdc++.h>
using namespace std;


void print_Digits_Reverse(int n); // function prototype      // function declaration


int main() {

    int test_cases;
    cin >> test_cases; // Input the number of test cases

    while(test_cases--) {
        int n;
        cin >> n; // Input the number to be reversed
        print_Digits_Reverse(n); // function call
    }

    return 0;           
}


void print_Digits_Reverse(int n) {
    string str = to_string(n); // Convert number to string
    string reversed_str = str; // Copy the original string to reverse it
    reverse(reversed_str.begin(), reversed_str.end()); // Reverse the string

    // Alternative way to reverse the string without using reverse function
    // string reversed_str = ""; // String to store the reversed number
    // for(int i = str.length() - 1; i >= 0; i--) { // Loop from the end to the start
    //     reversed_str += str[i]; // Append each character in reverse order
    // }

    // int i = 0; 
    // string rev_no_leading_zeros = "";
    
    // // Remove leading zeros from the reversed string
    // while(reversed_str[i] == '0') {
    //     i++; 
    //     continue; // Skip leading zeros
    // }

    // while(i < reversed_str.length()) {
    //     rev_no_leading_zeros += reversed_str[i]; // Append non-zero characters
    //     i++;
    // }

    //cout << rev_no_leading_zeros << endl; // Output the reversed number without leading zeros

    for(auto c : reversed_str) {
        cout << c << " "; // Print each character of the reversed string
    }

    cout << endl; // Move to the next line after printing all characters/ dgts

}