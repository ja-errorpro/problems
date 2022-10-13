#include <stdio.h>
long long int gcd(long long int a, long long int b){
    long long int r=a%b;
    while(r){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
long long int lcm(long long int a,long long int b,long long int c){
    return a*b/c;
}
int main()
{
    long long int a,b,n=0,x,q,w;
    scanf("%lld",&a);
    do{
        scanf("%lld",&b);
        if(b==0){
            break;
        }
        if(n==0){
        q=gcd(a,b);
        x=lcm(a,b,q);
        }else{
            q=gcd(q,b);
            w=gcd(x,b);
            x=lcm(x,b,w);
        }
        n++;
    }while(1);
    printf("%lld %lld",q,x);
    return 0;
}
