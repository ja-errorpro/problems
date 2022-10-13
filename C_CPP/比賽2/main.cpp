#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<iostream>

using namespace std;
int main()
{
    double a,b,c,d,e;
    a=1.0;
    b=1.0;
    c=1.0;
    d=1.0;
    e=1.0;
    char input[20];
    scanf("%[^\n]",input);
    int leng=strlen(input);
    for(int k=0;k<leng;k++){
        switch(input[k]){
            case '1':
                b*=0.95;
                e*=0.8;
                break;
            case '2':
                a*=0.7;
                e*=0.7;
                break;
            case '3':
                c*=0.9;
                d*=0.95;
                break;
            case '4':
                a*=0.8;
                break;
            case '5':
                a*=0.9;
                b*=0.75;
                e*=0.9;
                break;
            case '6':
                b*=0.95;
                c*=0.6;
                break;
            case '7':
                d*=0.85;
                e*=0.6;
                break;
            case '8':
                a*=0.95;
                b*=0.9;
                c*=0.95;
                d*=0.8;
                break;
            default:
                break;
        }
    }
    a=(1-a)*100;
    b=(1-b)*100;
    c=(1-c)*100;
    d=(1-d)*100;
    e=(1-e)*100;
    if(a!=0){
            printf("A %.f%%",a);
        if(b!=0||c!=0||d!=0||e!=0){
            printf(" ");
        }
    }
    if(b!=0){
        printf("B %.f%%",b);
        if(c!=0||d!=0||e!=0){
            printf(" ");
        }
    }
    if(c!=0){
        printf("C %.f%%",c);
        if(d!=0||e!=0){
            printf(" ");
        }
    }
    if(d!=0){
        printf("D %.f%%",d);
        if(e!=0){
            printf(" ");
        }
    }
    if(e!=0){
        printf("E %.f%%",e);
    }
    return 0;
}
