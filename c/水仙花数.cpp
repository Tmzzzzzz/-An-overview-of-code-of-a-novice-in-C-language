//水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=13+53+33 
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int t=N;
    int i=1;
    int I=1;
    for (t=N;t>0;t--){
        i*=10;
        I*=10;
    }
    I/=10;
    
    int number=I;
    int a,b;
    for (number=I;number<i;number++){
    	int s=0;
    	int count=number;
        while(count>0){
            a=count%10;
            b=1;
            int n=0;
            while(n<N) {
            	b*=a;
            	n++;
			}
			s+=b;
            count/=10;
        }
        if(s==number){
            printf("%d\n",number);
        }
    }
    return 0;
}
