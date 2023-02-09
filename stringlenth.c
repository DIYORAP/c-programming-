#include<stdio.h>
#include<conio.h>
int strl(char*);
void main()
{
   char str[30],l;
   clrscr();
   printf("enter string");
   gets(str);
    l=strl(str);
    printf("%d",l);
}
int strl(char *p)
 { 
  int l=0;
   while(*p!='\0')
    {
     l++;
      p++;
    }
    return l;
    }