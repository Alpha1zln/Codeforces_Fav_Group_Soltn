#include<bits/stdc++.h>
using namespace std;    

#define ll long long
#define endl '\n'

// function declarations
void solveQ(char ch); 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int test_cases;
    // cin >> test_cases;
    
    // while (test_cases--) {
    //     int n, m;
    //     cin >> n >> m;
        
    //     vector<int> a(n);
    //     for(int i = 0; i < n; ++i) {
    //         cin >> a[i];
    //     }

    //     solveQ(n, a); 
            
    // }

    // Single test case
    char ch;
    cin >> ch;
    solveQ(ch);

    return 0;

}


// Function to find the next character in the alphabet
void solveQ(char ch) {
    // Check if the character is a lowercase letter
    if (ch >= 'a' && ch <= 'z') {
        // If it is 'z', wrap around to 'a'
        if (ch == 'z') {
            cout << 'a';
        } else {
            char chNext = ch + 1;
            cout << chNext;
            //cout << static_cast<char>(ch + 1);
        }
    } 
    // Check if the character is an uppercase letter
    else if (ch >= 'A' && ch <= 'Z') {
        // If it is 'Z', wrap around to 'A'
        if (ch == 'Z') {
            cout << 'A';
        } else {
            char chNext = ch + 1;
            cout << chNext;
//            cout << static_cast<char>(ch + 1);
        }
    } 
    // If the character is not a letter, print it unchanged
    else {
        cout << ch;
    }
}
