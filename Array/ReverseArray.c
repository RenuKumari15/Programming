/*
Date:-18-FEB-2018
URL:-https://www.hackerrank.com/challenges/arrays-ds/problem
Input parameter:-integer N and elements of array
Problem:- Reverse the array
Solution:- we have to start printing from the last index to first index
*/
#include<stdio.h>

int main()
{
    int N;
    scanf("%d\n",&N);
    int arr[1001];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=N-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
