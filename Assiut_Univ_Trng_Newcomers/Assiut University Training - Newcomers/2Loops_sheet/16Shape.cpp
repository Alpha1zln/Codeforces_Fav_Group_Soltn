#include<bits/stdc++.h>
using namespace std;


void print_Pyramid(int n); // function prototype      // function declaration


int main() {

    int n; 
    cin >> n; // Input the number of rows for the pyramid
    print_Pyramid(n); // function call
    return 0;           
}


// function definition
void print_Pyramid(int n) {
    for(int i = 1; i <= n; i++) { // Loop through each row
        for(int j=n; j >= i; j--) {
            cout << "*"; // Print *
        }
        
        cout << endl; // Move to the next line after printing stars
    }
}   