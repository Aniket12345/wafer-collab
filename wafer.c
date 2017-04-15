#include <stdio.h>
int add_no();

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