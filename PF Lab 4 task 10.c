#include<stdio.h>
int main()
{
	int zone_type;
	 float speed,limit,fine;
	
	printf("enter zone type (1-3): \n ");
	scanf("%d",&zone_type);
	
	printf("what is the speed of the vehicle: \n");
	scanf("%d",&speed);
	
	switch(zone_type)
{
	case 1:
		limit = 30;
		
		if(speed<=limit)
		{
			printf("no violation, no fine allotted");
		}
		
		 else if(speed>limit +20)
		{
			fine=fine*2;
			printf("submit fine= Rs.%.2f",fine);
		}
		else
		{
			fine=1000;
			printf("submit fine= Rs. %.2f",fine);
		}
		break;
		
		case 2:
			limit=100;
			
			if(speed<=limit)
			{
				printf("no violation,no fine alloted");
			}
			
			 else if(speed>limit+20)
			{
				fine=fine*2;
				printf("submit fine=Rs .%.2f",fine);
			}
			
			else
			{
				fine=1000;
				printf("submit fine=Rs. %.2f",fine);
			}
			break;
			
			case 3:
				limit=50;
				
				if(speed<=limit)
				{
					printf("no violation, no fine allotted");
				}
				else if(speed>limit +20)
				{
					fine=fine*2;
					printf("submit fine=Rs. %d",fine);
				}
				
		        else
		        {
		        	fine=1000;
		        	printf("submit fine= Rs.%.0f",fine);
				}
				break;
				
				default:
					printf("invalid zone type!");
		
}
	return 0;
}