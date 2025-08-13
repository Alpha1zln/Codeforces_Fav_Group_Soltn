// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll; // Define a type alias for long long int
// typedef vector<int> vi; // Define a type alias for vector of integers
// typedef vector<ll> vl; // Define a type alias for vector of long long integers
// #define endl '\n' // Define a type alias for newline character

// // Function prototype
// void checkCode(int a, int b, string s); // Function to check the #include<bits/stdc++.h>


// int main() {

//     int a, b; // Declare 2 integer variables
//     cin >> a >> b; // Read
//     string s; // Declare a string variable
//     cin >> s; // Read the string from input

//     //cout << s;
    
//     checkCode(a, b, s); // Call the function to check the code

//     return 0; // Return 0 to indicate successful execution
// }   


// void checkCode(int a, int b, string s) {
//     int pos = a;
//     //bool isValid1 = false, isValid2 = false; // Initialize flags to check conditions


//     if(s[pos] != '-' ) {
//         cout << "No" << endl; // If not, print "NO"
//         return ;
//     }

//     if(s.length() != (a + b + 1) ) {
//         cout << "No" << endl; // If the string is too short, print "NO"
//         return ;
//     }

//     for(int i=0; i<s.length(); i++ ) {
//         if(s[a] == '-') {
//            continue;
//         }
//         if(s[i] >= '0' && s[i] <= '9') {
//             continue;
//         }
//         else {
//             cout << "No" << endl; // If not, print "NO"
//             return ;
//         }
//     }

//     //if(isValid1 && isValid2) {
//         cout << "Yes" << endl; // If both conditions are satisfied, print "YES"
//     //}


// }


#include <bits/stdc++.h>
using namespace std;

void checkCode(int a, int b, string s) {
    // Remove any whitespace that might have been accidentally included
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    
    // Check that the code's length is exactly A + B + 1
    if (s.length() != a + b + 1) {
        cout << "No" << endl;
        return;
    }
    
    // The character at 1-indexed position A+1 (0-indexed position A) must be '-'
    if (s[a] != '-') {
        cout << "No" << endl;
        return;
    }
    
    // All other characters should be digits
    for (int i = 0; i < s.length(); i++) {
        if (i == a) continue; // Skip the '-' position
        if (!isdigit(s[i])) {
            cout << "No" << endl;
            return;
        }
    }
    
    cout << "Yes" << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    // Use cin.ignore() then getline so that the full line is read
    cin.ignore(); 
    string s;
    getline(cin, s);
    
    checkCode(a, b, s);
    
    return 0;
}
