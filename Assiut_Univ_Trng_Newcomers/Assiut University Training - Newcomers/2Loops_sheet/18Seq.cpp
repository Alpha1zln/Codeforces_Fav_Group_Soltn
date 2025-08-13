#include<bits/stdc++.h>
using namespace std;


void print_Sum_Odd(int n, int m); // function prototype      // function declaration


int main() {

    int test_cases;
    cin >> test_cases; // Input the number of test cases

    while(test_cases--) {
        int n, m;
        cin >> n >> m; // Input the number to be reversed
        print_Sum_Odd(n, m); // function call
    }

    // bool flag = true; // Flag to control the loop
    // while(flag) {
    //     int n, m;
    //     cin >> n >> m; // Input the range of numbers

    //     flag = print_Seq(n, m); // function call 
    // }

    return 0;           
}



void print_Sum_Odd(int n, int m) {

    int start, end;
    if(n<=m){
        start = n; // Start from n if n is less than or equal to m
        end = m; // End at m
    } else {
        start = m; // Start from m if n is greater than m
        end = n; // End at n    
    }   

    long long int sumN_M = 0; // Initialize sum variable
    for(int i = start+1; i <= end-1; i++) { // Loop from start to end
        if(i % 2 == 0) continue; // Skip even numbers 
        sumN_M += i; // Add each number to the sum
        
    }

    cout<< sumN_M ; // Print the sum of the sequence
    cout << endl; // Move to the next line after printing the sequence

    
}