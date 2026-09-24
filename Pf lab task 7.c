#include<stdio.h>
int main()
{
	int plan,minutes;
	float bill;
	
	printf("enter plan number(1-4): \n");
	scanf("%d",&plan);
	
	switch(plan)
	{
		case 1:
			printf("enter minutes: \n");
			scanf("%d",&minutes);
			
			bill=500;
			
			if(minutes>1000)
			{
				bill=bill+(minutes-1000)*2;
			}
			printf("total bill =Rs %.2f",bill);
			break;
			
			case 2:
				printf("enter minutes: \n");
				scanf("%d",&minutes);
				
				bill=800;
				
				if(minutes>2000)
				{
					bill=bill+(minutes-2000)*2;
				}
				printf("total bill= Rs %.2f ",bill);
				break;
				
				case 3:
					bill=1200;
					
					printf("total bill=Rs %.2f",bill);
					break;
					
					case 4:
						printf("enter minutes: \n");
						scanf("%d",&minutes);
						
						bill=minutes*1;
						
						printf("total bill=Rs %.2f",bill);
						break;
						
						default:
							printf("invalid plan number");
							}
							return 0;
}