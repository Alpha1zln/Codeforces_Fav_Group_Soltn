#include<bits/stdc++.h>
using namespace std;        

void convert_Deci_to_Binary(int n); // function prototype      // function declaration

long long convert_Bin_to_Deci(string bin); // function prototype for converting binary to decimal


int main() {

    int test_cases;
    cin >> test_cases; // Input the number of test cases

    while(test_cases--) {
        int n;
        cin >> n; // Input the number to be reversed
        convert_Deci_to_Binary(n); // function call
    }
     
    return 0;           
}


// function definition
void convert_Deci_to_Binary(int n) {
    if(n == 0) {
        cout << "0" << endl; // Special case for 0
        return;
    }

    string binary = ""; // String to store the binary representation
    string bin_ones = ""; 

    while(n > 0) {
        int remainder = n % 2; // Get the remainder when divided by 2
        binary = to_string(remainder) + binary; // Prepend the remainder to the binary string

        if(remainder == 1) {
            bin_ones += "1"; // Append '1' to the string of ones
        }   

        n = n / 2; // Divide n by 2
    }

    long long deci_bin_ones = convert_Bin_to_Deci(bin_ones); // Convert the binary string to a long long integer
    cout << deci_bin_ones << endl; // Output the binary representation
}

long long convert_Bin_to_Deci(string bin) {
    long long decimal = 0; // Initialize decimal value
    int base = 1; // Initialize base value (2^0)

    // Loop through the binary string in reverse order
    for(int i = bin.length() - 1; i >= 0; i--) {
        if(bin[i] == '1') {
            decimal += base; // Add the value of the current bit to the decimal value
        }
        base *= 2; // Update the base (2^i)
    }

    return decimal; // Return the decimal value
}