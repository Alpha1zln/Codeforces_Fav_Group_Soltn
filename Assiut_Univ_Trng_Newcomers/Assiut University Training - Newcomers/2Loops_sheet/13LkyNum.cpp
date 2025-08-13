#include<bits/stdc++.h>
using namespace std;


void find_Lucky_Num(int n1, int n2); // function prototype      // function declaration
bool isLuckyNumber(int n);

int main() {

    int n1, n2;
    // cout << "Enter two numbers to find GCD: ";
    cin >> n1 >> n2; 


    find_Lucky_Num(n1, n2); // function call
    return 0;   
}



// function definition
void find_Lucky_Num(int n1, int n2) {

    vector<int> lucky_numbers; // Vector to store lucky numbers
    for(int i=n1; i<=n2; i++) {
        
        if(isLuckyNumber(i)) {
            lucky_numbers.push_back(i); // Add lucky number to the list
        }
    }

    if(lucky_numbers.empty()) {
        cout << -1 << endl; // No lucky numbers found
    } else 
    {
        // cout << "Lucky numbers in the range: ";
        for(int num : lucky_numbers) {
            cout << num << " "; // Print all lucky numbers
        }
        cout << endl;
    }

}



bool isLuckyNumber(int n) {
    string str = to_string(n); // Convert number to string
    bool is_lucky = false; // Flag to check if number is lucky

    for(char c : str) {
        if(c != '4' && c != '7') { // $$ vip ....  // Check if digit is not 4 or 7
            return false; // Not a lucky number
        }
    }
    return true; // All digits are either 4 or 7, so it's a lucky number
}