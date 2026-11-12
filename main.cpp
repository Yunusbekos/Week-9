#include <iostream>
#include <cmath>
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


// long long powerOfTwo(int e) {
//     long long result = 1;
//     for (int i = 0; i < e; i++) {
//         result *= 2;
//     }
//     return result;
// }
//
// void printLucky(int k) {
//     int len = 1;
//     while (k > powerOfTwo(len)) {
//         k -= powerOfTwo(len);
//         len++;
//     }
//     int index = k - 1;
//     string b = "";
//
//     for (int i = 0; i < len; i++) {
//         b = char('0' + index % 2) + b;
//         index /= 2;
//     }
//     for (int i = 0; i < len; i++) {
//         if (b[i] == '0')
//             cout << 4;
//         else
//             cout << 7;
//     }
//     cout << endl;
// }
//
// int main() {
//     int k;
//     cin >> k;
//     printLucky(k);
// }


// Task 7


// int integerReplacement(int n) {
//     long long num = n;
//     int count = 0;
//     while (num != 1) {
//         if (num % 2 == 0) {
//             num /= 2;
//         }
//         else if (num == 3 || num % 4 == 1) {
//             num--;
//         }
//         else {
//             num++;
//         }
//         count++;
//     }
//     return count;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << integerReplacement(n);
//     return 0;
// }
