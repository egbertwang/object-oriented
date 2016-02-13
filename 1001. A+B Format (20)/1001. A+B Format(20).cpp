#include<stdio.h>
#include<string.h>

int main()
{
	int a,b,sum,k=0,i=0,j=0;
	//int count = 0;
	char num[10];
	
	scanf("%d %d",&a,&b);
	sum=a+b;
	
	//sprintf(num,"%d",sum);
	
	/*while (sum!= 0)
    {
     count++;
     sum/= 10;
    }*/
    
	if(sum == 0)
	{
		printf("%d",sum);
	}
	if(sum!=0)
	{
		if(sum<0)	{k=1;	sum=-sum;}
    	
		for(;sum!=0;sum/=10)
    	{ 
			num[i++]='0'+sum%10;j++;
     		if(j==3)
      		{ 	
		  		j=0;
       			num[i++]=',';
      		} 
    	}
    	if(k==1) printf("-");
  		for(i-=1+(num[i-1]==',');i>=0;i--)
   		printf("%c",num[i]);
	}
	
	return 0;

}
