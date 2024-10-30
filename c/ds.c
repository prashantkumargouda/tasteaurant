#include<stdio.h>

int main(){
    int x,y,flag,n,r,sum=0,temp,add;
    printf("enter the value of x,y");
    scanf("%d%d",&x,&y);

   
    if(x%1==0 && x%x==0){
    	int flag=1;
        for(n=2;n<x;++n){
            if(x%n==0){
     	        flag=0;	
	        }
        }
        if(flag){
            printf("prime\n");
	    }
	    else{
            printf("not prime\n");
	    }
    }
    temp=y;
    while(y>0){
	    r=y%10;
	    sum=sum+(r*r*r);
	    y=y/10;
    }
    if(temp==sum){

	    printf("armstrong\n");
    }
    else{

	    printf("not armstrong\n");
    }
    if(flag=1 && temp==sum && x>y){

        add=x+temp;
        printf("sum is:%d",add);
    }
    else{
        printf("invalid entry");
    }
    return 0 ;

    
}


