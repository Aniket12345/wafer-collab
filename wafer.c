#include <stdio.h>
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
 return(ans);

}