#include<stdio.h>
int fibonacci(int a);

int main(){
    int s=0;
    printf("enter a number\n");
    scanf("%d",&s);
       
    printf("%d\n",s,fibonacci(s));

    return 0;
}

int fibonacci(int a){
    int i=0;
    if(a==0 || a==1)
    {
        return 1;
    }
    else
    {  
        
        for(i=1; i<=a; i++)
    {
       a++;
    }
       return ( fibonacci(a-1) + fibonacci(a-2) );
    }
    
    return 0;
    
}
