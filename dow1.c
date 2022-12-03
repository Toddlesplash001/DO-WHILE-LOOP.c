/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,s=0,o=0,e=0;
    char ch;
    do
    {
        printf("Enter desired number: ");
        scanf("%d",&i);
        if(i%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
        s=s+i;
        printf("Do you want to continue? y/n: ");
        fflush(stdin);
        scanf("%c",&ch);
        
    }
    while(ch =='y');
    printf("The total of entered numbers is %d\n",s);
    printf("The number of even numbers is %d\n",e);
    printf("The number of odd numbers is %d\n",o);

    return 0;
}
