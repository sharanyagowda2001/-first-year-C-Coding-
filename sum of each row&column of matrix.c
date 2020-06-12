/* C Program to find Sum of rows and columns in a Matrix  */
#include<stdio.h>
int main()
{
    int i, j,m,n, a[10][10],rsum,csum;
    printf("Enter Number of rows and columns  :  ");
    scanf("%d %d", &m, &n);
    printf("%d\t%d",m,n);
    printf("\nEnter the Matrix Elements:\n");
    for(i= 0;i< m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\t", &a[i][j]);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        rsum= 0;
        for(j=0;j<n;j++)
        {
            rsum = rsum + a[i][j];
        }
        printf("The Sum of Elements of a Rows in a Matrix =  %d\n", rsum );
    }
    for(j=0;j<m;j++)
    {
        csum = 0;
        for(i=0;i<n;i++)
        {
            csum = csum + a[i][j];
        }
        printf("The Sum of Elements of a columns in a Matrix =  %d \n", rsum );
    }
}