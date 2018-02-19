/*
Date:-19-Feb-2018
URL:-https://www.hackerrank.com/challenges/array-left-rotation/problem
Problem:-Need to do the left rotation opreation on an array of size n
Input Parameters:-integer, elements of array and value of left rotation integer 
Solution:-store the elements in an array,create another array and store the values which is before the d.
            move all the remaining elements to left and then second array values.
*/
#include<stdio.h>
 int main()
 {
     int n,d;
     scanf("%d%d\n",&n,&d);
     int arr[100001],arrleft[100001];
     for(int i=0;i<n;i++)
     {
         scanf("%d\n",&arr[i]);
     }
     for(int i=0;i<d;i++)
     {
         arrleft[i]=arr[i];
     }
     int j=0;
     for(int i=d;i<n;i++)
     {
         arr[j]=arr[i];
         j++;
     }
     int p=0;
     for(int i=n-d;i<n;i++)
     {
         arr[i]=arrleft[p];
         p++;
     }
     for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     
     return 0;
 }
