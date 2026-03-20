#include <stdio.h>
#include <stdbool.h>
long long f[40][40]={0};
bool b[40][40]={false};
void horse(int x,int y){
    b[x][y]=1;
    b[x+1][y+2]=1;
    b[x+1][y-2]=1;
    b[x+2][y+1]=1;
    b[x+2][y-1]=1;    
    b[x-1][y+2]=1;
    b[x-1][y-2]=1;
    b[x-2][y-1]=1;
    b[x-2][y+1]=1;
}

int main(){
    int bx,by,hx,hy;
    int i,j;
    scanf("%d %d %d %d",&bx,&by,&hx,&hy);
    horse(hx+2,hy+2);
    if(b[2][2]==0){
    	f[2][2]=1;
	}else{
		f[2][2]=0;
	}
    for(i=2;i<=bx+2;i++){
        for(j=2;j<=by+2;j++){
        	if(i==2&&j==2){
        		continue;
			}
            if(b[i][j]==0){
                f[i][j]=f[i-1][j]+f[i][j-1];
            }else{
            	f[i][j]=0;
			}
        }
    }
    printf("%lld",f[bx+2][by+2]);
    
    return 0;
}
