/*Hacker Rank Solution for Basic Data Types In C++
Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.
Output Format
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
Sample Input
3 12345678912345 a 334.23 14049.30493
Sample Output
3
12345678912345
a
334.230
14049.304930000
*/
#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char ch;
    float f;
    double d;
    cin>>i>>l>>ch>>f>>d;
    cout<<setprecision(20)<<i<<endl;
    cout<<setprecision(20)<<l<<endl;
    cout<<setprecision(20)<<ch<<endl;
    cout<<setprecision(20)<<f<<endl;
    cout<<setprecision(20)<<d<<endl;

    return 0;
}
