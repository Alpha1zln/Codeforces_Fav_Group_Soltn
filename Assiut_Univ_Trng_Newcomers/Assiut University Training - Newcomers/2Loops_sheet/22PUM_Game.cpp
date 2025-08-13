#include<bits/stdc++.h>
using namespace std;        

void print_PUM_Game(int n); // function prototype      // function declaration


int main() {

    int n; 
    cin >> n; // Input the number of rows for the pyramid
    print_PUM_Game(n); // function call

    return 0;           
}


// function definition
void print_PUM_Game(int n) {

    int ct = 0; 

    for(int i = 1; i <= n; i++) { // Loop through each row

        for(int j=1; j<=4; j++) {
            ct++; 
            if(j == 4) {
                cout<< "PUM"; // Print "PUM" after every 4th number
                continue;
            }
            cout << ct << " "; 
        }
        
        cout << endl; // Move to the next line after printing numbers
    }
}