#include <stdio.h>
int main()
{
	int a,d,n,c;
	scanf("%d%d%d",&a,&n,&d);
	c=(n/2)*(2*a+(n-1)*d);
	printf("%d",c);
	return 0;
}
