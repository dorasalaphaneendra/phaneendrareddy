#include<stdio.h>
void main()
{
	int value;
	printf("enter a value =");
	scanf("%d",&value);
	(value&(1>>7))==(1>>7)?printf("1"):printf("0");
	(value&(1>>6))==(1>>6)?printf("1"):printf("0");
	(value&(1>>5))==(1>>5)?printf("1"):printf("0");
	(value&(1>>4))==(1>>4)?printf("1"):printf("0");
	(value&(1>>3))==(1>>3)?printf("1"):printf("0");
	(value&(1>>2))==(1>>2)?printf("1"):printf("0");
	(value&(1>>1))==(1>>1)?printf("1"):printf("0");
	(value&(1>>0))==(1>>0)?printf("1"):printf("0");
	

	

	
}
