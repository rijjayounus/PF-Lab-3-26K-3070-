#include<stdio.h>
int main ()
{
	int temperature,pressure;
	
	printf("what is the temperature: \n");
	scanf("%d",&pressure);
	
	printf("the pressure is: \n");
	scanf("%d",&pressure);
	
	if(temperature>100 || pressure>250)
	{
		printf("shutting down!");
	}
	else if(temperature>=85 && temperature<=100 && pressure>=200 && pressure<=250)
	{
		printf("warning mode!!!");
	}
	else
	{
		printf("normal");
	}
	return  0;
}
