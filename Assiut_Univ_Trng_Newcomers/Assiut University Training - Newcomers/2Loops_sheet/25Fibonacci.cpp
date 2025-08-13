#include<bits/stdc++.h>
using namespace std;


void print_Fibo(int n); // function prototype      // function declaration


int main() {

    int n;  
    cin >> n; 
    print_Fibo(n); // Input the length of the histogram line

}


// function definition
void print_Fibo(int n) {
    long long a = 0, b = 1; // Initialize the first two Fibonacci numbers
    if(n >= 1) {
        cout << "0" ; // If n is 0 or negative, print 0
        if(n>1) cout << " "; // Print a space if n is greater than 1
    }

    if(n >= 2) {
        cout << "1" ;
        if(n>2) cout << " "; // Print a space if n is greater than 2
    }


    for(int i = 3; i <= n; i++) { 
        long long next = a + b; // Calculate the next Fibonacci number
        cout << next ; // Print the next Fibonacci number
        if(i < n) {
            cout << " "; // Print a space after each number except the last one
        }        

        a = b; // Update 'a' to the previous 'b'
        b = next; // Update 'b' to the new Fibonacci number
    }
    cout << endl; // Move to the next line after printing all Fibonacci numbers
}