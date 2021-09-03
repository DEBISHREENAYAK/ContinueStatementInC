// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n,sum=0;
    for(i=0;i<5;i=i+1)
    {
    printf("Enter interger ");
    scanf("%d",&n);
    if(n<=0)
    continue;
    sum=sum+n;
}
    printf("the sum of postive numbers are%d ",sum);
    
    return 0;
}
