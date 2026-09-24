#include<stdio.h>
int main()
{
	float CGPA,family_income;
	
	printf("what is your CGPA: \n");
	scanf("%f",&CGPA);
	
	printf("enter your family income: \n");
	scanf("%f",&family_income);
	
	if(CGPA>3.7 && family_income<50000)
	{
		printf("Full scholarship granted");
	}
	else if(CGPA>3.3 && family_income<n100000)
	{
		printf("Half scholarship granted");
	  }  
	  else 
	  {
	  	printf("No scholarship awarded :)");
	  }
	  return 0;
}