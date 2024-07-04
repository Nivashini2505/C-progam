#include<stdio.h>

int main(){
    int a,b,c,value;
    
    printf("enter a,b,c: ");
    scanf("%d,%d,%d",&a,&b,&c);
    int dis=(b*b)-4*a*c;
    if(dis>0){
        value=1;
    }else if(dis==0){value=2;}
    int rru1,rru2,re;
    switch(value){
    case 1:{
        printf("the roots are real and unequal");
        rru1=(-b+sqrt((dis)))/(2*a);
        rru2=(-b-sqrt((dis)))/(2*a);
        printf("%d,%.d",rru1,rru2);
        break;
    }
    case 2:{
        printf("the roots are real and equal");
        re=-b/(2*a);
        printf("%d",re);
        break;
    }
    default:{
        printf("the root are imaginary");
        break;
    }}
    return 0;
}