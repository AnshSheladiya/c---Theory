#include<stdio.h>
#include<conio.h>
void main()
{
int i, n;
printf("Enter number : ");
scanf("%d", &n);

for(i=1; i<=n; i++)
    {
        // printf("%d\n",n%i);
        if(n%i==0)
        {
            printf("Number is not Prime");
            getch();
            break;
        }
    }
    printf("Number is Prime");
    getch();
}