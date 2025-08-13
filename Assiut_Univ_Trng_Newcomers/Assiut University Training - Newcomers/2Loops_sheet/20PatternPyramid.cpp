#include<bits/stdc++.h>
using namespace std;        

void print_Pattern_Pyramid(int n); // function prototype      // function declaration


int main() {

    int n; 
    cin >> n; // Input the number of rows for the pyramid
    print_Pattern_Pyramid(n); // function call

    return 0;           
}


// function definition
void print_Pattern_Pyramid(int n) {

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
}