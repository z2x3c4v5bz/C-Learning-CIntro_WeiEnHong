/* hw7_10 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	double sum=0;
	
	do
	{
		printf("輸入正整數n: ");
		scanf("%d",&n);
	}
	while(n<=0);
	
	for(i=1;i<=n;i++)
		sum+=1/(float)i;
	
	printf("1/1+1/2+...+1/%d=%lf\n",n,sum);
	
	system("pause");
	return 0;
}