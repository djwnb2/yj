#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
    int x,y=0;
    scanf("%d %d",&x,&y);
    printf("%d",arr[x][y]);
    return 0;

}