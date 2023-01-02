 /*The program must accept an integer N as the input. The program must print the desire pattern as shown in the Example Input/Output section.

Boundary Condition(s): 3 <= N <= 100

Input Format:

The first line contains the value of N.

Format:

The first N lines containing the desired pattern as shown in the Example Input/Outputs

Example Input/Output 1:

Input
4
Output
- - - * * * *
- - * 1 2 * 
- * 3 4 *
* * * *
Example Input/Output 2:
Input
5
Output
- - - - * * * * * 
- - - * 1 2 3 *
- - * 4 5 6 *
- * 7 8 9 *
* * * * */
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int n=1;
    for(int i=0;i<a-1;i++){
        for(int j=i;j<a-1;j++){
        printf("-");
        }
        if(i==0){
             for(int j=1;j<a-1;j++){
          printf("*");
             }
        }
        printf("*");
        if(i!=0){
        for(float j=0;j<(a/2.0);j++){
            printf("%d",n);
            n++;
        }
        }
        printf("*");
        
        
        printf("\n");
    }
    for(int j=0;j<a;j++){
          printf("*");
             }
        
    return 0;
}
