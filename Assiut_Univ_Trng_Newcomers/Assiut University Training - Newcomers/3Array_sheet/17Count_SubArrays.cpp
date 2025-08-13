#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character


// Function prototype
void countSubArrays(int n, vector<int>& arrVc); // Function to find the maximum subarray element

int main() {
    int testCases;
    cin >> testCases; // Read the number of test cases

    while(testCases--) { // Loop through each test case
        int n;
        cin >> n; // Read the number of elements for the current test case
        
        vector<int> arrVc(n); // Declare a vector to hold the elements
        for (int i = 0; i < n; i++) {
            cin >> arrVc[i]; // Read each element into the vector
        }

        countSubArrays(n, arrVc); // Call the function to find the maximum subarray element
    }   
    
    return 0;
}


void countSubArrays(int n, vector<int>& arrVc) {

    int numSubArr = 0;

    // way 1
    // for(int i=0; i<=n-1; i++) {
    //     int ct = 0, sumCount = 1;
    //     for(int j=i; j<=n-2; j++) {
    //         if(arrVc[j] <= arrVc[j+1]) {
    //             //ct++;
    //             sumCount += 1;
    //         }
    //         else {
    //             //sumCount += 1;
    //             break;
    //         }
    //     }
       
    //     numSubArr += sumCount;

    // } // fr

    // or
    // way 2 ...
    int ct , totalCt = 0;
    if(n>=1)  {
        ct = 1;  totalCt = 1;
    }
    int idx = n-2;

    while(idx >= 0 ) {
        if(arrVc[idx] <= arrVc[idx+1]) {
            ct++;
        }
        else {
            ct =1;
        }
        totalCt += ct;
        idx--;
    }

    numSubArr = totalCt;
    // cout << "Num of subArr decg in nature : " << endl;
    cout << numSubArr << endl;
} 


/*

1
5
1 4 2 3 5
Num of subArr decg in nature :
12
PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet\" ; if ($?) { g++ 17Count_SubArrays.cpp -o 17Count_SubArrays } ; if ($?) { .\17Count_SubArrays }
1
5
1 4 2 3 5
Num of subArr decg in nature : 
9
PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet\" ; if ($?) { g++ 17Count_SubArrays.cpp -o 17Count_SubArrays } ; if ($?) { .\17Count_SubArrays }
2
5
1 2 3 4 5
Num of subArr decg in nature :
15
3 
3 2 1
Num of subArr decg in nature :
3
PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_UniNum of subArr decg in nature :
3
PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Uni3
PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_UniPS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Unioln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Units\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet\" ; if ($?) { g++ 17Count_SubArrays.cpp -o 17Count_SubArrays } ; if ($?) { .\17Count_SubArrays }
1
5
1 2 5 4 3
Num of subArr decg in nature :
8
PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet\" ; if ($?) { g++ 17Count_SubArrays.cpp -o 17Count_SubArrays } ; if ($?) { .\17Count_SubArrays }
2
5
1 2 4 3 5
9
5
1 2 5 4 3
8
PS F:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet> cd "f:\coding nts\zzz codes m9\code_sublime_vscode_ltcd_chf_cfr\askSeniorSite\Codeforces_Fav_Group_Soln\Assiut_Univ_Trng_Newcomers\Assiut University Training - Newcomers\3Array_sheet\" ; if ($?) { g++ 17Count_SubArrays.cpp -o 17Count_SubArrays } ; if ($?) { .\17Count_SubArrays }
1
5
1 4 2 3 5
9


*/