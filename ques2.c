#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
	int i,n,x,s=0;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		s=s+x%100;
	}
	printf("Output=%d",s);
	return 0;
}
