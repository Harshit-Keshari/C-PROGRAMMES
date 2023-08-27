//WAP TO SWAP THE TWO NUMBER USING CALL BY VALUE

#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a,b;
    printf("Enter Value Of A and B");
    scanf("%d %d",&a,&b);
    printf("\nValue Before Swap A is %d B is %d",a,b);
    swap(a,b);
    printf("\nValue After Swap A is %d B is %d",a,b);
}
void swap(int a,int b)
{
    int t=0;
    t=b;
    b=a;
    a=t;
}