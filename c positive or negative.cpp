#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num==0)
	else if(num<0)
		printf("The number %d is NEGATIVE",num);
	else if(num>0)
		printf("The number %d is POSITIVE ",num);
}
