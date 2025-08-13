#include<bits/stdc++.h>
using namespace std;    
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character




// Function prototype 
void  replaceElts(int n, vector<int>& arrVc); // Function to replace elements in the array based on their values
void printElts(vector<int> arrVc); // Function to print the modified elements



int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arrVc(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arrVc[i]; // Read each element into the vector
    }

    replaceElts(n, arrVc); // Call the search function

    printElts(arrVc); // Call the function to print the modified elements

    return 0;
}



void  replaceElts(int n, vector<int>& arrVc) {

    for (int i = 0; i < n; i++) {
        if (arrVc[i] > 0) {
            arrVc[i] = 1; // Replace positive elements with 1
        } 
        else if (arrVc[i] < 0) {
            arrVc[i] = 2; // Replace negative elements with 2
        }
        // else{
        //     arr[i] = 0; // Replace zero with 0
        // }
        
    }
    
}


void printElts(vector<int> arrVc)  // Print the modified element
{
    for(int i = 0; i < arrVc.size(); i++) {
        cout << arrVc[i] << " "; // Print each element
    }
    cout << endl; // Print a newline at the end
}