#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double func,x1,x2,delta;
    unsigned int N=1,value;

    printf("Enter variant (1 or 2):");
    scanf("%d",&value);
    while(value < 1  ||  value > 2)
        {
        printf("Enter variant again(1 or 2):");
        scanf("%d",&value);
        }
    if(value == 1)
        {
        printf("\nEnter x1: ");
        scanf("%lf",&x1);
        printf("\nEnter x2: ");
        scanf("%lf",&x2);
        printf("\nSelect N: ");
        scanf("%u",&N);

        printf("\n________________________________________________");
        printf("\n|  N  |         X         |        F(X)        |");

        delta=(x2-x1)/(N-1);
        for(int i=1;i<=N;i++)
        {
            func=0.25*(x1-25)*(x1-25)+((x1+25)*(x1+25)*(x1+25))/100+1;
            printf("\n|%5.0d|%19.2f|%20.2f|",i,x1,func);
            if(i%10==0)
            {
                printf("\n|_____|___________________|____________________|\n");
                system("pause");
                printf("\n________________________________________________");
            }
        x1+=delta;
            }
        }
    if(value == 2){
        printf("\nEnter x1: ");
        scanf("%lf",&x1);
        printf("\nEnter x2: ");
        scanf("%lf",&x2);
        printf("\nEnter delta:");
        scanf("%lf",&delta);

        printf("\n************************************************");
        printf("\n*  N  *         X         *        F(X)        *");
        printf("\n************************************************");
        while(x1<x2)
        {
            func=0.25*(x1-25)*(x1-25)+((x1+25)*(x1+25)*(x1+25))/100+1;
            printf("\n|%5.0d|%19.2f|%20.2f|\n",N,x1,func);
            if(N%10==0)
            {
                printf("\n|_____|___________________|____________________|\n");
                system("pause");
                printf("\n________________________________________________");
            }
            x1+=delta;
            N++;
        }
    }
    return 0;
}

