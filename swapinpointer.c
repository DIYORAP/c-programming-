#include<stdio.h>
#include<conio.h>
void swap(int *no1,int *no2);
void main()
{
    int a,b,t;
    clrscr();
    printf("enter value of A and B");
    scanf("%d %d",&a,&b);
    printf("before swapping value");
    printf("\na=%d\nb=%d",a,b);
    swap(&a,&b);
    printf("\nafter swapping value");
    printf("\na=%d\nb=%d",a,b);
    
}

    void swap(int *no1,int *no2)
    {
        int t;
        t=*no1;
        *no1=*no2;
        *no2=t;
    }
    
