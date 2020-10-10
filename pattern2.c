#include<stdio.h>
int main()
{
    //in this we have to put # instead of *
    int i,j;
    for(i=1;i<8;i++)
    {
        for(j=1;j<8-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<8;j++)
        {
            printf("#");
        }printf("\n");
    }
}
