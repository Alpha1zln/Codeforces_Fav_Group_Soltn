#include<bits/stdc++.h>
using namespace std;        

void print_Pattern_Diamond(int n); // function prototype      // function declaration


int main() {

    int n; 
    cin >> n; // Input the number of rows for the pyramid
    print_Pattern_Diamond(n); // function call

    return 0;           
}


// function definition
void print_Pattern_Diamond(int n) {

    // Upper part of the diamond
    for(int i = 1; i <= n; i++) { // Loop through each row

        // Print leading spaces for pyramid shape        
        for(int j = n; j >= i+1; j--) {
            cout << " "; // Print ' '   
        }

        for(int j = 1; j <= 2*i-1; j++) {
            cout << "*"; // Print numbers from 1 to i
        }
        
        cout << endl; // Move to the next line after printing numbers
    }

    // Lower part of the diamond
    for(int i=1; i<=n; i++) { // Loop through each row

        // Print leading spaces for pyramid shape        
        for(int j=1; j<=i-1; j++) {
            cout << " "; // Print ' '   
        }

        int k=n+1-i;  
        for(int j=1; j<=2*k-1; j++) {
            cout << "*"; // Print numbers from 1 to i
        }
        
        cout << endl; // Move to the next line after printing numbers
    }
}