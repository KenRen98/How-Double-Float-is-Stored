#include <stdio.h>
#include <math.h>

void print_double_Dec(double d)
{

 unsigned long long *doubleINint = (unsigned long long *)&d;
 int sign;
 unsigned int exponent;
 unsigned long long fraction;
 sign = (unsigned int)(*doubleINint >> 63);
 exponent = (unsigned int)(*doubleINint >> 52 & 0x7FF);
 fraction = *doubleINint & 0x000FFFFFFFFFFFFFULL;
 printf("\n\nDouble: %lf\nRawDouble: %llX\n\nDec Form:\n*****************\nSign: %d\nExponent: %d\nFraction: %lld\n",d,*doubleINint,sign,exponent,fraction);
 printf("\n\nHex Form:\n*****************\nSign: %d\nExponent: %X\nFraction: %llX\n",sign,exponent,fraction);

 char frac[53];
 frac[52]=0;
 int i;
 for (i = 0; i < 52; i++)
 {
    frac[i]='0';
 }
 for ( i = 51; i >=0 ; i--)
 {
        frac[i]=fraction%2+'0';
        fraction=(fraction-fraction%2)/2;
 }
 if (sign == 0)
 {
     printf("\n\nConversion:\n*****************\nSign: Positive");
     sign=1;
 }
 else
 {
     printf("\n\nConversion:\n*****************\nSign: Negative");
     sign=-1;
 }
 exponent = exponent - 1023;
 printf("\nExponent: %d",exponent);
 printf("\nBinary Fraction: %s",frac);
 double sum=0;
 double k=0;
 for ( i = 0; i < 52; i++)
 {
     if (frac[i]=='1')
     {
         k=1/pow(2.0,i+1);
         sum=sum+k;
     }
 }
 sum=sum+1;
 printf("\nDecimal Fraction: %lf",sum);
 printf("\nRaw Double in Decimal Calculation: %lf=%d*%lf*2^%d", d, sign, sum, exponent);
 printf("\n\nDouble Check Answer: %lf\n",sign*sum*pow(2.0,exponent));
}

int main(void){
double db;
printf("\nPlease enter a double number: ");
scanf("%lf", &db);
print_double_Dec(db);
return 0;
}
