#include <stdio.h>

int main()
{
    int t,n,i,j,k,count=0,xo;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    	scanf("%d",&n);
    	count=0;
    	for(j=1;j<n;j++){
    		for(k=j;k<=n;k++){
    			xo=10000;
    			if(j!=k)
    				xo=j^k;
    			if(xo<=n)
    				count++;
    		}
    	}
    	printf("%d\n",count);
    }
    return 0;
}
