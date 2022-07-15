//Temperature Converter

#include<stdio.h>
int main () {
char originaltem2,convertedtemp;
float result;
int originaltem1; 

printf("[f]-Fahrenheit\n[c]-celsius\n[k]-kelvin\n");
printf("input original temperature value:");
scanf("%d",&originaltem1);
printf("select original temperature scale:");
scanf("%s",&originaltem2);

switch(originaltem2)
{
case 'f':
    printf("select converted temperature:");
    scanf("%s",&convertedtemp);


    if(convertedtemp == 'k')
    {
     result=(originaltem1 - 32)* 5/9+ 273.15;
     printf("%d f = %.2f k",originaltem1,result);
    }

   else if (convertedtemp == 'c')
   {
    result=(originaltem1-32)*5/9;
    printf("%d f = %.2f c",originaltem1,result);
   }
  else
   {
    printf("invalid output");
   }
break;

case 'c':
    printf("select converted temperature:");
    scanf("%s",&convertedtemp);

    if(convertedtemp=='f')
    {
    result=(originaltem1*9/5)+32;
    printf("%d c = %.2f f",originaltem1,result);
    }

   else if (convertedtemp=='k')
    {
    result=originaltem1+273.15;
    printf("%d c = %.2f k",originaltem1,result);
    }

break;


case 'k':
    printf("select converted temperature:");
    scanf("%s",&convertedtemp);

    if(convertedtemp=='f')
    {
    result=(convertedtemp-273.15)*9/5+32;
    printf("%d k = %.2f f",originaltem1,result);
    }

  else if(convertedtemp=='c')
   {
    result=originaltem1-273.15;
    printf("%d k = %.2f c",originaltem1,result);
   }

break;

default: { printf("invalid output");

}
}
    return 0;
}


//Min and Maxx

#include<stdio.h>
int main(){
int a,i,min,max,b=1,c=0;


printf("[%d]Input number:",b++);
scanf("%d",&a);


min=a; max=a;
 for (int i=1;i<=9;i++)
 {
     printf("[%d]Input number:",b++);
     scanf("%d",&a);

     if (a<=0)
 {   c=b-1;;
        printf("this is an invalid input. Try Agian \n");
        printf("[%d]Input number:",c);
        scanf("%d",&a);
    }
     min=(a<min) ? a:min;
     max=(a>max) ? a:max;

 }
 printf("Min:%d Max:%d",min,max);

return 0;
}


//Number Sorting

#include<stdio.h>
main()
{
    int i,j,num,temp,d=1,c=0;

    int a[10];

    for(i=0; i<10; i++)
    {
        printf("[%d]input number:",d++);
        scanf("%d",&a[i]);
        if(a[i]<=0)
        {   c=d-1;
            printf("this is an invalid input try again\n");
            printf("[%d]input number:",c);
            scanf("%d",&a[i]);
        }

    }
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted list: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}


//Letter Grade

#include <stdio.h>
int main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);
    if(grade <= 100 && grade >= 92)
        printf("your grade is A");
    else if(grade <= 91 && grade >= 84)
        printf("your grade is -A");
    else if(grade <= 83 && grade >= 76)
        printf("your grade is B");
    else if(grade <= 75 && grade >= 68)
        printf("your grade is -B");
    else if(grade <= 67 && grade >= 60)
        printf("your grade is C");
    else if(grade <= 59 && grade >= 50)
        printf("your grade is D");
    else if(grade < 50 && grade > 0)
        printf("your grade is F");
    else
        printf("Invalid Input");
    return 0;
}


//Finding the Mean

#include <stdio.h>
int main()
{
    int i = 1, temp, rsum = 0, vcount = 0;
    float mean;
    while (1)
    {
        printf("[%d] Input Number: ", i);
        scanf("%d", &temp);
        if (temp < 0) {
            continue;
        }
        else if (temp == 0) {
            break;
        }
        else
        {
            vcount++;
            rsum += temp;
            i++;
        }
    }
    mean = rsum / vcount;
    printf("Average = %.2f.", mean);
    return 0;
}


//The Nth Number

#include <stdio.h>
int main() {
    int base, exp, x;
    long long result = 1;
    printf("Enter X: ");
    scanf("%d", &base);
    printf("Enter Y: ");
    scanf("%d", &exp);
    x = exp;
    while (x != 0) {
        result *= base;
        --x;
    }
    printf("%d ^ %d = %lld",base, exp, result);
    return 0;
}


//Pattern Pyramid

int main() {
    int num;

    printf("Enter Integer: ");
    scanf("%d", &num);
    
    int row, space, star;

    for (row=1; row<=num; row++)
    {
        for (space=num-row; space>=1; space--)
        {
            printf(" ");
        }
        for (star=1; star<=row*2-1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
}


//Decimal to Binary, Octa, Hexa

#include<stdio.h>

int main()
{
    int a;
    printf("Enter decimal number:");
    scanf("%d",&a);

    bin(a);
    octa(a);
    hex(a);
    
    return 0;
}
void bin(int a) {
    int temp, i, binary=0, j=1;
    
    temp=a;
    while(temp!=0) {
        i=temp%2;
        binary=binary+(i*j);
        temp=temp/2;
        j=j*10;
    }
    printf("binary: %d\n",binary);
}
void octa(int a) {
    int templ, b, octal=0, c=1;

    templ=a;
    while(templ!=0) {
        b=templ%8;
        octal=octal+(b*c);
        templ=templ/8;
        c=c*10;
    }
    printf("octal: %d",octal);
}
void hex(int a) {
    long int decimalNumber,remainder,quotient;
    int i=1,j,temp;
    char hexadecimalNumber[100];

    quotient =a ;
    while(quotient!=0) {
        temp = quotient % 16;

        if( temp < 10)
            temp =temp + 48;
        else
            temp = temp + 55;
        hexadecimalNumber[i++]= temp;
        quotient = quotient / 16;
    }

    for (j = i -1 ; j> 0; j--)
        printf("\nHexadecimal: %c",hexadecimalNumber[j]);

}
