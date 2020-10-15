//Demo  
#include<stdio.h>
#include<stdlib.h>
void fun(int r1,int r2,int dsum)
{
	int i,n;
	int q,r,rsum=0;
	for(i=r1+1; i>r1 && i<r2 ;i++)
	{	
		rsum=0;
		n=i;
			while(n>0)
			{
				r=n%10;
				n=n/10;
				rsum=rsum+r;
				
			}
	
				if(dsum==rsum){
				 printf("\nthe smallest number is:%d",i);
			break;
			}
	}
	
		printf("Out of range");
}

			
void main()
{
    int n;
	int q,r,dsum=0;
	int r1,r2;
	printf("\nEnter the digit\n");
	scanf("%d",&n);
	printf("\nEnter the range\n");
	scanf("%d%d",&r1,&r2);	
	
		while(n>0)
		{
			r=n%10;
//			printf("\n\tr=%d",r);
			n=n/10;
//			printf("\n\tn=%d",n);
			dsum=dsum+r;
		}
//	printf("\n\tsum=%d",dsum);
	fun(r1,r2,dsum);
}
