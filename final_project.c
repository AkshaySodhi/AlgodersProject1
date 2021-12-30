#include<stdio.h>
#include<math.h>
int DECItoBIN();
int DECItoOCT();
int BINtoDECI();
int OCTtoDECI();
int DECItoHEX();

int main(){
    int choice;
    printf("Enter 1 for Decimal conversions,\n\nEnter 2 for Binary conversions,\n\nEnter 3 for Octal convserions,\n\nEnter any other character to exit- ");
    scanf("%d",&choice);
    
    if(choice==1){ 
        int deci;
        printf("\nEnter a decimal no.- ");
        scanf("%d",&deci);
        DECItoBIN(deci);
        DECItoOCT(deci);
        DECItoHEX(deci);
    }
    else if(choice==2){ 
        int bin,b;
        printf("\nEnter a binary no.- ");
        scanf("%d",&bin);
        b=BINtoDECI(bin);
        DECItoOCT(b);
        DECItoHEX(b);
    }
    else if(choice==3){
        int octal,o;
        printf("\nEnter octal no- ");
        scanf("%d",&octal);
        o=OCTtoDECI(octal);
        DECItoBIN(o);
        DECItoHEX(o);
    }else{
        printf("Bye bye");
    }
return 0;
}




///////////////////////////////////////////
int DECItoBIN(int deci){
        int t,n,bin;
        n=deci,t=0;
        while(n!=0){
            t++;               
            n=n/2;
        }

        if(deci==0)printf("0");
        while(t>0){
            bin=deci/pow(2,t-1);
            printf("%d",bin);               
            deci=deci-bin*(pow(2,t-1));
            t--;
        }
    printf(" -is the binary value\n");
}
/////////////////////////////////////////////
int DECItoOCT(int deci){
    int oct,n,d,i,o;
       
        n=deci,d=0;
        while(n!=0){
            d++;                 
            n=n/10;
        }

        i=d;
        while(i>0){
            o=deci/(pow(8,i));
            printf("%d",o);             
            deci=deci-(o*(pow(8,i)));
            i--;
        }
        printf("%d -is the octal value\n",deci);
}
/////////////////////////////////////////////////////////////////////////
int BINtoDECI(int bin){
    int deci=0,d;

    int i=0;
    do{
        d=bin%10;
        deci+=d*pow(2,i);
        bin/=10;
        i++;
    }while(bin!=0);

    printf("%d -is the decimal value\n",deci);
    return deci;
}
/////////////////////////////////////////////////////////////////////////
int OCTtoDECI(int octal){
    int d,deci=0;
    
    int i=0;
    do{
        d=octal%10;
        deci+=d*pow(8,i);
        octal/=10;
        i++;
    }while(octal!=0);

    printf("%d -is the decimal value\n",deci);
    return deci;
}
///////////////////////////////////////////////////////////////////////////
int DECItoHEX(int deci){
    int hex,n,d,i,h;

    n=deci,d=0;
    while(n!=0){
        d++;                 
        n=n/10;
    }

    i=d-1;
    while(i>0){
        h=deci/(pow(16,i));
        if(h==15){
            printf("F");
        }else if(h==14){
            printf("E");
        }else if(h==13){
            printf("D");
        }else if(h==12){
            printf("C");
        }else if(h==11){
            printf("B");
        }else if(h==10){
            printf("A");
        }else{
            printf("%d",h);
        }
        deci=deci-(h*(pow(16,i)));
        i--;
    }           
    
        
    if(deci==15){
            printf("F is the hex value");
    }else if(deci==14){
            printf("E is the hex value");
    }else if(deci==13){
            printf("D is the hex value");
    }else if(deci==12){
            printf("C is the hex value");
    }else if(deci==11){
            printf("B is the hex value");
    }else if(deci==10){
            printf("A is the hex value");
    }else{
            printf("%d is the hex value",deci);
    }

}
/////////////////////////////////////////////////////////////////////////////