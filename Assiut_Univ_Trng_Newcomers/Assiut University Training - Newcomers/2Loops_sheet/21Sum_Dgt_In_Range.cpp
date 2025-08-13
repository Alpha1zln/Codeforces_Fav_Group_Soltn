#include<bits/stdc++.h>
using namespace std;        

void print_Sum_Digit_In_Range(int n, int a, int b); // function prototype      // function declaration


int main() {

    int n, a, b; 
    cin >> n >> a >> b; 

    print_Sum_Digit_In_Range(n, a, b); // function call

    return 0;           
}


void print_Sum_Digit_In_Range(int n, int a, int b) {
    int sumDigit = 0; // Initialize sum to 0
    int copy_n = n; // Store the original number for output
    long long sumNum_Range = 0; // Initialize sum of numbers in the range [a, b]

    int i=1;
    for(i=1; i<=n; i++) {
        sumDigit = 0; int elt = i;
        while(elt > 0) {
            int digit = elt % 10; // Get the last digit
            sumDigit += digit; // Add the digit to the sum
            elt = elt / 10; // Remove the last digit
            //cout << digit; // Print the digit
        }
       // cout << sumDigit << " "; // Print the sum of digits of the number i


        if(sumDigit >= a && sumDigit <= b) { // Check if the digit is in the range [a, b]
            sumNum_Range += i; // Add the digit to the sum
        }
    }
    
    cout << sumNum_Range << endl; // Print the sum of digits in the range [a, b]
}