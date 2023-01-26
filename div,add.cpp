#include<stdio.h>
int a,b,ans;
void add();
void sub();
void mul();
void divi();
void modulo();

main()
{
	add();
	sub();
	mul();
	divi();
	modulo();
}

void add()
{
	printf("\n enter value of A");
	scanf("%d",&a);
	
	printf("\n enter value of B");
	scanf("%d",&b);
	
	ans=a+b;
	
	printf("ANS=%d",ans);
}

void sub()
{
	printf("\n enter value of A");
	scanf("%d",&a);
	
	printf("\n enter value of B");
	scanf("%d",&b);
	
	ans=a-b;
	
	printf("ANS=%d",ans);
}

void mul()
{
	printf("\n enter value of A");
	scanf("%d",&a);
	
	printf("\n enter value of B");
	scanf("%d",&b);
	
	ans=a*b;
	
	printf("ANS=%d",ans);
}

void divi()
{
	printf("\n enter value of A");
	scanf("%d",&a);
	
	printf("\n enter value of B");
	scanf("%d",&b);
	
	ans=a/b;
	
	printf("ANS=%d",ans);
}

void modulo()
{
	printf("\n enter value of A");
	scanf("%d",&a);
	
	printf("\n enter value of B");
	scanf("%d",&b);
	
	ans=a*b/100;
	
	printf("ANS=%d",ans);
}
