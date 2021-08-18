#include<stdio.h>

int main()
{
    int a=0,b=1,c,n;
    printf("Enter the value up to which fibbonacci series is to be displayed : ");
    scanf("%d",&n);
    printf("The required fibbonacci series is: \n");
    for(int i=0;i<n;i++)
    {
        
        printf("%d \t",a);
        c=a+b;
        a=b;
        b=c;
        
    }
   
}
