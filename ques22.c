#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
	int i,n,x,s=0,k=1;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(fn(k)==i){
		s=s+x;
		k++;
		}
		
	}
	printf("Output=%d",s);
	return 0;
}
int fn(int n)
{
	int i,s=1;
	for(i=1;i<n;i++)
	s=s+i;
	return s;
}
