#include<stdio.h>
int main(){
	int n,i=1,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n){
	sum+=i;
	i++;
	}
	printf("sum of series = %dn",sum);
		return 0;
}
