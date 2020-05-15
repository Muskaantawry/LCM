#include<stdio.h>
int lcm (int x, int y);
int main()
{
	int a, b;
	printf("input first number");
	scanf("%d",&a);
	printf("input second number");
	scanf("%d",&b);
	printf("LCM of %d and %d is : %d",a,b,lcm(a,b));
}
int lcm (int x, int y)
{
	int max;
	max= x>y?x:y;
	while(1)
	{
		if(max%x==0 && max%y==0)
		{
			return max;
			break;
		}
		max+= max;
	}
}
