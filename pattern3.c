

1 2 3 4 5
2     5
3   5
4 5
5




/* C program print hollow inverted half pyramid pattern using numbers */
#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf(“%d”,&n);
for(i = 1; i <= n; i++)
{
for(j = i; j <= n; j++)
{
if (i == 1 || j == i || j == n)
printf(“%d”, j);
else
printf(” “);
}
printf(“\n”);
}
return 0;
}
