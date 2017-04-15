#include <stdio.h>

int add_no();

void calling();

int evenodd(int n); //declaration
int fact(int);


int main()
{   
	
	return 0;


}

int add_no() {
	int n; 
	printf("Give me the no. of inputs\n");
	scanf("%d",&n);
	int array[n];
	int sum = 0;
	printf("give me the no.s\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&(array[i]));
		sum = sum + array[i];
	}

printf("sum = %d\n",sum );


}

int fact(int b)
{
	int c;
	int ans=1;
	for(c=1;c<=b;c++)
     ans=ans*c;
 printf("the answer is %d \n",ans);
 return(ans);
}



void evenodd(int n)
{
	if(n%2==0)
{
	printf("the number is even\n");
}
else 
{
	printf("the number is odd\n");
}


}
void calling()
{
	int values,i,sum=0,enter_value;
	for(i=0;i<10;i++)
	{
		scanf("%d",&enter_value);
		if(enter_value%2==1)
		{
			sum=enter_value+sum;
		}

	}
	printf("sum of all 0dd no=%d\n",sum);

}