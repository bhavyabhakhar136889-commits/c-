#include<stdio.h>
#include<conio.h>
void main()
{ char str[50];
int i,len=0;
clrscr();
printf("enter a string:");
gets(str);
while(str[len]!='\0')
len++;
printf("reversed string=");
for(i=len-1;i>=0;i--)
{ printf("%c",str[i]);}
getch();}