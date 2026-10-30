#include<stdio.h>
int main()
{
    int x;
    int guess;
    int flag =0;
    scanf("%d",&x);
    if (flag==0)
    {
        scanf("%d",&guess);
        if(guess==x)
        {
            printf("2nd p win\n");
            flag=1;
        }
        else
        {
            printf("2 chances left\n");
        }
    }
    if (flag==0)
    {
        scanf("%d",&guess);
        if (guess==x)
        {
            printf("2nd p win\n");

            flag=1;
        }
        else
        {
            printf("1 chance left\n");
        }
    }
    if (flag==0)
    {
        scanf("%d",&guess);
        if (guess==x)
        {
            printf("2nd p win\n");
            flag=1;
        }
        else
        {
            printf("0 chance left\n");
        }
    }
    if(flag==0)
    {
        printf("1st p win\n");
    }

    return 0;
}
