// Problem Statement

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s), math marks (math_marks), and English marks (**eng_mark**s).

// Your task is to print the data of the students in reverse order.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, math_marks and eng_marks respectively.
// Constraints

// 1 <= N <= 100
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 0 <= math_marks, eng_marks <= 100
// Output Format

// Output the students data in the reverse way. See the sample input output for more clarifications.
// Sample Input 0

// 3
// Rakib 7 B 90 85
// Sakib 10 A 85 61
// Ahsan 9 C 36 58
// Sample Output 0

// Ahsan 9 C 36 58
// Sakib 10 A 85 61
// Rakib 7 B 90 85
// Sample Input 1

// 5
// Munna 8 D 89 56
// Shojoy 9 E 56 10
// Asif 10 C 55 86
// Joy 9 G 66 45
// Bijoy 7 E 68 99
// Sample Output 1

// Bijoy 7 E 68 99
// Joy 9 G 66 45
// Asif 10 C 55 86
// Shojoy 9 E 56 10
// Munna 8 D 89 56

#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};


int main()
{
    // Write your code here
    int n; cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
    }
    for(int i=n-1; i>=0; i--){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}
