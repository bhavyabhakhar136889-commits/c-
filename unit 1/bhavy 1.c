#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter value %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Entered Values are as follows \n");

	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}