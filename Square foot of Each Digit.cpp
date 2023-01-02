/*Square foot of ach Digit

The program must accept an integer N as the input. The program must print the square root of each digit in N with the precision up to 2 decimal places as the output.

Boundary Condition(s):

1 <= N <= 10^7

Input Format: The first line contains the integer N.

Output Format: The first line contains the square root of each digit in N with the precision up to 2 decimal places separated by a space.

Example Input/Output 1:

Input 23578

Output: 141 1.73 2.24 2.65 2.83

Explanation:

The square root of the digit 2 is 1.41 The square root of the digit 3 is 1.73

The square root of the digit 5 is 2.24

The square root of the digit 7 is 2.65 The square root of the digit 8 is 2.83

Hence the output is 1.41 1.73 2.24 2.65 2.83*/


#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(int argc, char** argv)
int num, count=0;
cin>>num;
int n=num;
while(n!=0){
n=n/10;
count++;
}
int arr[count]; int i=count-1;
n=num;
while(n!=0){
arr[i]=n;
n= n/10;
i--;
}
/*for(int i=0;i< count; i++){ cout<<arr[i];

}*/
 for (int i=0;i< count; i++){
  printf("%.2f",sqrt(arr[i]));
}
}
