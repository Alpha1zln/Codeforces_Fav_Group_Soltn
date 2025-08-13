#include<bits/stdc++.h>
using namespace std;    

// Function prototype
void findFibonacci(int n, vector<long long>& fib); // Function to find Fibonacci numbers
void printFibonacci(const vector<long long>& fib); // Function to print Fibonacci numbers

int main() {
    int n; // Declare an integer variable to hold the number of Fibonacci numbers to generate
    cin >> n; // Read the number of Fibonacci numbers from input

    vector<long long> fib(n); // Declare a vector to hold the Fibonacci numbers

    findFibonacci(n, fib); // Call the function to generate Fibonacci numbers

    // print the nth Fibonacci number
    cout << fib[n-1] << endl; // Print the nth Fibonacci number

//    printFibonacci(fib); // Call the function to print the generated Fibonacci numbers

    return 0; // Return 0 to indicate successful execution
}


// function definition to find Fibonacci numbers
void findFibonacci(int n, vector<long long>& fib) {     
    if (n >= 1) fib[0] = 0; // First Fibonacci number
    if (n >= 2) fib[1] = 1; // Second Fibonacci number

    for (int i = 2; i < n; i++) { // Loop to calculate Fibonacci numbers from the third one onwards
        fib[i] = fib[i - 1] + fib[i - 2]; // Fibonacci relation
    }
}


void printFibonacci(const vector<long long>& fib) {
    for (const auto& num : fib) { // Loop through each Fibonacci number
        cout << num << " "; // Print the Fibonacci number followed by a space
    }
    cout << endl; // Print a newline at the end
}