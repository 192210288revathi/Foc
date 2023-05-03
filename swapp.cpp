#include<stdio.h>
void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("x=%d,y=%d",x,y);
	
}
main()
{
	int a=40,b=60;
	swap(a,b);
	printf("a=%d,b=%d",a,b);
	
}
