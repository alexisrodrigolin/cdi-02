#include <stdio.h>
int main(void) {
    int m;
    printf("Cuanto dinero quiere retirar?");
    scanf("%d",&m);
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int r= 0;
    int diferencia= m-r;
    if(m>5000){
        printf("El valor supero a lo autorizado");
        return 1;
    }
    else if(m<20){  
        printf("El valor es menor a lo autorizado");
        return 2;
    }
    else{
        for(a=0; diferencia>=100; a++){
            r= r+100;
            diferencia= m-r;
        }
        for(b=0; diferencia>=50; b++){
            r= r+50;
            diferencia= m-r;
        }
        for(c=0; diferencia>=20; c++){
            r= r+20;
            diferencia= m-r;
        }
        for(d=0; diferencia>=10; d++){
            r= r+10;
            diferencia= m-r;
        }
        for(e=0; diferencia>=5; e++){
            r= r+5;
            diferencia= m-r;
        }
        for(f=0; diferencia>=1; f++){
            r= r+1;
            diferencia= m-r;
        }
        printf("Valor ingresado: %d\n", m);
        printf("$100: %d\n", a);
        printf("$50: %d\n", b);
        printf("$20: %d\n", c);
        printf("$10: %d\n", d);
        printf("$5: %d\n", e);
        printf("$1: %d\n", f);
    }
    
}