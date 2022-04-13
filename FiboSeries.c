//fibo series upto n terms
#include <stdio.h>
int main()
{
    int val1,val2,n,i;
    val1=0;
    val2=1;
    int val3=val1+val2;
    printf("ENTER NO OF TERMS:");
    scanf("%d",&n);
    printf("Fibonacci Series: %d ,%d ,",val1,val2);
    for(i=3;i<=n;++i){
        printf("%d ,",val3);
        val1=val2;
        val2=val3;
        val3=val1+val2;
    }
    return 0;

}