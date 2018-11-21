#include<stdio.h>
long int day(int d,int m,int y);
int main()
{
	long int d,m,y,f,b,test,i;
	scanf("%ld",&test);
	for(i=1;i<=test;i++)
	{
		scanf("%ld %ld",&m,&d);
		y=2011;
		d=day(d,m,y);
		f=(y-1)/4;
		b=(y+d+f)%7;
		if(b==0)
			printf("Friday");
		else if(b==1)
			printf("Saturday");
		else if(b==2)
			printf("Sunday");
		else if(b==3)
			printf("Monday");
		else if(b==4)
			printf("Tuesday");
		else if(b==5)
			printf("Wednesday");
		else if(b==6)
			printf("Thursday");
		printf("\n");
	}
	return 0;
}
long int day(int d,int m,int y)
{
	long int din;
	if(m==1)
		din=d;
	else if(m==2)
		din=31+d;
	else if(m==3)
		din=31+28+d;
	else if(m==4)
		din=31+28+31+d;
	else if(m==5)
		din=31+28+31+30+d;
	else if(m==6)
		din=31+28+31+30+31+d;
	else if(m==7)
		din=31+28+31+30+31+30+d;
	else if(m==8)
		din=31+28+31+30+31+30+31+d;
	else if(m==9)
		din=31+28+31+30+31+30+31+31+d;
	else if(m==10)
		din=31+28+31+30+31+30+31+31+30+d;
	else if(m==11)
		din=31+28+31+30+31+30+31+31+30+31+d;
	else if(m==12)
		din=31+28+31+30+31+30+31+31+30+31+30+d;
	return din;
}