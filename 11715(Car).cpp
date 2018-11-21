#include<stdio.h>
#include<math.h>

int main()
{
	double s,v,u,a,t,num[4];
	long int i;
	i=1;
	while(1)
	{
		scanf("%lf",&num[0]);
		if(num[0]==0)
			break;
		scanf("%lf%lf%lf",&num[1],&num[2],&num[3]);
		if(num[0]==1)
		{
			u=num[1];
			v=num[2];
			t=num[3];
			a=(v-u)/t;
			s=(u*t)+((a*t*t)/2);
			printf("Case %ld: %.3lf %.3lf\n",i,s,a);
		}
		else if(num[0]==2)
		{
			u=num[1];
			v=num[2];
			a=num[3];
			t=(v-u)/a;
			s=(u*t)+((a*t*t)/2);
			printf("Case %ld: %.3lf %.3lf\n",i,s,t);
		}
		else if(num[0]==3)
		{
			u=num[1];
			a=num[2];
			s=num[3];
			v=(u*u)+(2*a*s);
			v=sqrt(v);
			t=(v-u)/a;
			printf("Case %ld: %.3lf %.3lf\n",i,v,t);
		}
		else if(num[0]==4)
		{
			v=num[1];
			a=num[2];
			s=num[3];
			u=(v*v)-(2*a*s);
			u=sqrt(u);
			t=(v-u)/a;
			printf("Case %ld: %.3lf %.3lf\n",i,u,t);
		}
		i++;
	}
	return 0;
}