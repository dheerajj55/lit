#include<stdio.h>
int main()
{

    int i,n,temp1=0,temp2=0,nt;
    printf("enter n\n");
    scanf("%d",&n);
    printf("fibonacci series for n numbers\n");
    for(i=1;i<=n;i++)
    {

        if (i<=1)
            nt=i;
        else
        {

            nt=temp1+temp2;
            temp1=temp2;
            temp2=nt;
        }
        printf("%d\n",nt);
        return 0;
    }
}
