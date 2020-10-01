#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main()
    {
        void count (int k, int*c);
        int k,c;
        printf("How many no.");
        scanf("%d",&k);

        c=0;
        count(k,&c);

        printf("No. of palindrome: %d",c);
    }

    void count (int k, int *c)
    {
        int n,r,rv,n1,i;
        for(i=0; i<k; i++)
        {
            printf("Enter No: ");
            scanf("%d",&n);
            n1=n;
            rv=0;
        while(n!=0)
        {
            r=n%10;
            rv=rv*10+r;
            n=n/10;
        }
        if(rv==n1)
            *c=*c+1;
    }
    }
