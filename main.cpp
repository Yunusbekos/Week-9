#include <iostream>
using namespace std;

// Task 8

// int main() {
//     int n;
//     int a=1, c=0,max=0;
//     cin >> n;
//     while (n>0) {
//         c=n%10;
//         n/=10;
//         if (c==0) {
//             continue;
//         }
//         else {
//             if (c>max) {
//                 max=c;
//             }
//         }
//         a*=c;
//     }
//     cout << a<< " "<<max << endl;
// }

// Task 9

// bool isPalindrome(int n) {
//     int c=0, d=n;
//     int a=n%10;
//     n/=10;
//     while(n>0) {
//         c=n%10;
//         a=a*10+c;
//         n/=10;
//     }
//     return a==d;
// }
// int main() {
//     int n;
//     cin >> n;
//     int sum=0;
//     for (int i = 1; i <= n; i++) {
//         if (isPalindrome(i)) {
//             sum+=i;
//         }
//     }
//     cout<<sum;
// }


// Task 10

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         char ch= 'A' + i - 1;
//         for (int j = 1; j <= i; j++) {
//             cout << static_cast<char>(ch--);
//         }
//         cout << endl;
//     }
// }


// Task 6

