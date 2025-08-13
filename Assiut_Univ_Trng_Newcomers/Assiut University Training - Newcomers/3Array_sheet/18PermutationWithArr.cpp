#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character


// Function prototype
void permArray(int n, vector<int>& arrVc, vector<vector<int>>& allPerm, 
        vector<int>& arrVcCheck); 

// void findallPerm(int start, int n, vector<int>& vc, vector<bool>& pres, 
//     vector<int>& arrVc, vector<vector<int>>& allPerm) ;


int main() {
    // int testCases;
    // cin >> testCases; // Read the number of test cases

//    while(testCases--) { // Loop through each test case
        int n;
        cin >> n; // Read the number of elements for the current test case
        
        vector<int> arrVc(n); // Declare a vector to hold the elements
        for (int i = 0; i < n; i++) {
            cin >> arrVc[i]; // Read each element into the vector
        }

        vector<int> arrVcCheck(n); // Declare a vector to hold the elements
        for (int i = 0; i < n; i++) {
            cin >> arrVcCheck[i]; // Read each element into the vector
        }

        vector<vector<int>> allPerm;
        permArray(n, arrVc, allPerm, arrVcCheck);
        
    
  //  }   
    
    return 0;
}

// void findallPerm(int start, int n, vector<int>& vc, vector<bool>& pres, 
//     vector<int>& arrVc, vector<vector<int>>& allPerm) 
// {
//     if(start == n) {
//         allPerm.push_back(vc);
//         return;
//     }



//     for(int i=0; i<n; i++) {
//         if(pres[i] == false) {
//             pres[i] = true;
//             vc.push_back(arrVc[i]);

//             findallPerm(start+1, n, vc, pres, arrVc, allPerm);
            
//             vc.pop_back();
//             pres[i] = false;
//         }
//     } // for

// }



// void permArray(int n, vector<int>& arrVc, vector<vector<int>>& allPerm
//                 , vector<int>& arrVcCheck) 
// {

//     int start =0; vector<int> vc;  vector<bool> pres(n, false);

//     findallPerm(start, n, vc, pres, arrVc, allPerm);

//     // // printAllPerm
//     for(auto &vc : allPerm) {
//         for(auto e : vc) {
//             cout << e << " ";
//         }
//         cout << endl;
//     }

//     bool check = false;
//     for(auto &vc : allPerm) {
//         if(arrVcCheck == vc) {
//             check = true; break;
//         }
//     }

//     cout <<  check;


// }

/*
3
1 2 3

3 1 2
1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 1 2 
3 2 1 

1

*/



void permArray(int n, vector<int>& arrVc, vector<vector<int>>& allPerm, 
        vector<int>& arrVcCheck) 
{
    if(arrVc.size() != arrVcCheck.size()) 
        cout << "no" << endl;
    
    sort(arrVc.begin(), arrVc.end());
    sort(arrVcCheck.begin(), arrVcCheck.end());
    

    if(arrVc == arrVcCheck) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }


}




/*
3
1 2 3
3 2 1
yes

PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet\" ; if ($?) { g++ 18PermutationWithArr.cpp -o 18PermutationWithArr } ; if ($?) { .\18PermutationWithArr }
3
1 2 3
4 2 1
no

PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet\" ; if ($?) { g++ 18PermutationWithArr.cpp -o 18PermutationWithArr } ; if ($?) { .\18PermutationWithArr }
5  
5 1 1 9 3
1 9 1 5 3
yes

*/