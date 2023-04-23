#include<stdio.h>
int fibonacci(int ,int ,int);
int main()
{
    int i,j,k,n,n1=0,n2=1;
    printf("Enter me a goddamn number: ");
    scanf("%d",&n);
    fibonacci(n1,n2,n);
    return 0;
}
int fibonacci(int n1,int n2,int n){
    if(n==0)
    return 0;
    else{
        printf("%d ",n1);
        return(fibonacci(n2,n1+n2,(n-1)));
    }
    
}