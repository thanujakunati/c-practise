#include<stdio.h>
void main()
{
    int a,b,c,ans;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("options are\n1.Addition\n2.sub\n3.multiplication\n4.division");
    printf("select option\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1: ans=a+b;
            printf("answer=%d\n",ans);
        break;
    case 2: ans=a-b;
            printf("answer=%d\n",ans);
        break;
    case 3: ans=a*b;
            printf("answer=%d\n",ans);
        break;
    case 4: ans=a/b;
            printf("answer=%d\n",ans);
        break;
    default: printf("wrong option");
        break;
    }
}