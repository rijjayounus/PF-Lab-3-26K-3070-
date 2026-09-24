#include<stdio.h>
int main()
{
	float weight;
	int people;
	
	printf("what is the total weight in the elevator: \n");
	scanf("%f",&weight);
	
	printf("how many people are in the elevator: \n");
	scanf("%d",&people);
	
	if(weight<=1000 && people<=10)
	{
		printf("can operate");
	}
	else
	{
		printf("cant operate");
	}
	return 0 ;
}