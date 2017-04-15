#include <stdio.h>
void calling();
int main()
{

	return 0;
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