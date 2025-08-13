#include<bits/stdc++.h>
using namespace std;


void print_Histo(int len, char symbol); // function prototype      // function declaration


int main() {

    int n; char symbol; 
    cin >> symbol  >> n; // Input number of symbols and the symbol itself


    while(n--) {
        int len;
        cin >> len; // Input the length of the histogram line
        print_Histo(len, symbol); // function call
    }    


    
    return 0;
}   



// function definition
void print_Histo(int len, char symbol) {
    for(int i = 1; i <= len; i++) { // Loop from 1 to n
        cout << symbol; // Print the symbol 
    }
     cout << endl; // Move to the next line after printing 'i' symbols
}
