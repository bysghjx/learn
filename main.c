#include <stdio.h>

int main() {
    int i,j,n;
    scanf ("%d",&n);
    for ( j=1 ; i<=(n/2)+1 ; i++ ) // n/2+1 上半部分几行
    {
        for ( j = (n/2+1) - i ; j >= 1 ; j-- )
        printf(" ");
        for ( j = 1 ; j<= 2*i-1 ;j++)
            printf("*");
        printf("\n");
        }
    for ( i = 1 ;i <= n/2 ; i++)    // n/2  下半部分几行
    {
        for ( j = 1 ; j <= i + 1 ; j++)
            printf(" ");
        for ( j = 1 ; j <= (n - 2) * i ; j++)
            printf("*");
        printf("\n");
    }
}
