
#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	if(n==0)
	{
		printf("enter valid input ");
		
	}
	else if(n==1)
	{
		printf("1 is neither prime nor composite");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0 && n!=i)
			{
				printf("it is not prime number");
				break;
				
			}
			 if(n%i==0 & n==i)
			 {
			 	printf("%d is a prime number",i);
			 }
			
			
		}
		
	
	}
	return 0;
}
