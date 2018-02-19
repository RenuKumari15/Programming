/*
Date:- 19-FEB-18
URL:-https://www.hackerrank.com/challenges/sparse-arrays/problem
Problem:-need to find how many times the given string occurs in the collection.
input parameter:-Number of strings and queries,string collection and string query.
Solution:-First we store the strings in one array and also we store the string query in different aaray.
        after that we started comparing the string query with the collection string one by one.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int N,Q;
    scanf("%d",&N);
    char str[1000][20];
    char str1[1000][20];
    for(int i=0;i<N;i++)
    {
        scanf("%s",str[i]);
    }
    scanf("%d",&Q);
    for(int i=0;i<Q;i++)
    {   int count=0;
        scanf("%s",str1[i]);
        for(int j=0;j<N;j++)
        {
            if(strcmp(str1[i],str[j])==0)
                count++;
        }
     printf("%d\n",count);
    }
    return 0;
}
