#include<stdio.h>
int main()
{
	int a=15,b=25;
	printf("Before swap a=%d , b=%d ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swap a=%d, b=%d",a,b);
	return 0;
}
