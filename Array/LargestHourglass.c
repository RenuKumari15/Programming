/*
Date:-18-FEB-2018
URL:-https://www.hackerrank.com/challenges/2d-array/problem
Input parameter:-6*6 2D Array
Problem:- find the largest hourglass sum
Solution:- 1.create a 2D array to store the input values.
           2.create another 2D array 4*4 and store the sum of the hourglasss for index 0 to 3.
           3.check the max value one by one in the second array.
*/
#include<stdio.h>

int main()
{
    int arr[6][6];
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    
   int arrhg[4][4];
    
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {   int sum=0;
            for(int k=j;k<j+3;k++)
            {
                sum=sum+arr[i][k];
            }
         
            sum=sum+arr[i+1][j+1];
         
            
            for(int k=j;k<j+3;k++)
            {
                sum=sum+arr[i+2][k];
            }
            arrhg[i][j]=sum;
        }
    }
    
    int max=-999;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        { 
            if(arrhg[i][j]>max)
                max=arrhg[i][j];
        }
    }
    printf("%d\n",max);
    
    return 0;
}
