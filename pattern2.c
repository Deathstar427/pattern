#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<6;j++)
        {
            printf("*");
        }printf("\n");
    }
   
}
