#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);
int main()
{
	int n;
	printf("\n      Enter number of disks:");
	scanf("%d",&n);
	TOH(n,'O','D','T');
	return 0;
}
void TOH(int n,char A,char B,char C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("\tMove disk %d from %c to %c\n",n,A,B);
	}
}