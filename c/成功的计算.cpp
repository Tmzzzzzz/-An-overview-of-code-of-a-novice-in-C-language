#include <stdio.h>
#include <stdlib.h>

int sum(int a){
	int i=a;
	int sum=0;
	while (i>0) {
		int x=i%10;
		sum+=x;
		i/=10;
	}
	return sum;
}

int main(){
	
	int max=100000;
	int jia=29;
	int yi=29;
	int cha=10000;
	int e=0;
	int f=0;


	while(jia<max){
		int a=sum(jia);
		if (a%11!=0)
		goto out;
		for(yi=29;yi<max;yi++)
		{
			int b=sum(yi);
			if(b%11!=0){
				continue;
			}
			int he=jia+yi;
			int c=sum(he);
			if (c==6)
			{	
				if(abs(jia-yi)<cha)
				{
					cha=abs(yi-jia);
					e=jia;
					f=yi;
				}
			}
		}
		out:
		jia++;
	}		
		
	printf ("%d",cha) ;
	
	return 0;
}
