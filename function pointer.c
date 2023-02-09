#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int (*fptr)(int,int);
int add(int x,int y)
 {
   return x+y;
}

void main()
{ 
  int p;
  fptr=&add;
  p=fptr(20,4);
  printf("%d",p);
  getch();
  }
