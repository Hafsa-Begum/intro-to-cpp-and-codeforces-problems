// Given a string 𝑆
// . Print 𝑆
//  after replacing every sub-string that is equal to "EGYPT" with space.

// Input
// Only one line contains a string 𝑆
//  (1≤|𝑆|≤103)
//  where |S| is the length of the string and it consists of only uppercase English letters.

// Output
// Print the result as required above.

// Examples
// inputCopy
// BRITISHEGYPTGHANA
// outputCopy
// BRITISH GHANA
// inputCopy
// ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
// outputCopy
// ITALYKOREA  ALGERIA Z

// link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int t = s.find("EGYPT");
    while(s.find("EGYPT")!=-1){
        s.replace(s.find("EGYPT"), 5, " ");
    }
    cout<<s<<endl;
    return 0;
}