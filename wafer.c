#include <stdio.h>
int evenodd(int n); //declaration
int fact(int);

int main()
{   
	
	return 0;
}

int fact(int b)
{
	int c;
	int ans=1;
	for(c=1;c<=b;c++)
     ans=ans*c;
 printf("the answer is %d \n",ans);
 printf("y u do dis?\n");
 printf("coz i can!!\n");
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