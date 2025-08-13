#include<bits/stdc++.h>
using namespace std;    
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character



// 
// Function prototype 
void  reverseArr(int n, vector<int>& arrVc); // Function to replace elements in the array based on their values
void printElts(vector<int> arrVc); // Function to print the modified elements



int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arrVc(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arrVc[i]; // Read each element into the vector
    }

    reverseArr(n, arrVc); // Call the function to find the lowest number and its position

    printElts(arrVc); // Call the function to print the modified elements
    return 0;
}



// function to reverse the array
// function definition ?? 
void  reverseArr(int n, vector<int>& arrVc) {

    // Reverse the array in place
    for (int i = 0; i < n / 2; i++) {
        swap(arrVc[i], arrVc[n - i - 1]); // Swap elements from both ends
    }

    
}


void printElts(vector<int> arrVc) {
    for(int i = 0; i < arrVc.size(); i++) {
        cout << arrVc[i] << " "; // Print each element
    }
    // cout << endl; // Print a newline at the end
}