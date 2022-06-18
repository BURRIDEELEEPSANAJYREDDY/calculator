// Calculator example using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define KEY "Enter the calculator Operation you want to do:"

void heading()
{
    printf("\n\t\t\t*****************");
    printf("\n\t\t\t**        CSE MINI PROJECT               **");
    printf("\n\t\t\t**          CALUCULATOR                  **");
    printf("\n\t\t\t**    USING C PROGRAMMING LANGUAGE       **");
    printf("\n\t\t\t*****************");
    printf("\n\n\n");
    getc;
}

void print_message()
{
    printf("\n\t\t\t*****************");
    printf("\n\t\t\t**             WELCOME                   **");
    printf("\n\t\t\t**                TO                     **");
    printf("\n\t\t\t**           CALUCULATOR                 **");
    printf("\n\t\t\t*****************");
    printf("\n\n\n");
}
// Function prototype declaration
void addition();
void power();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void Sine();
void Cos();
void Tan();
void Cot();
void Sec();
void Cosec();
int factorial();
void calculator_operations();

// Start of Main Program
int main()
{
    int x=0;

do
{
    heading();
    print_message();
}
while(x!=0);
    // Function call
    do
    {
        calculator_operations();
        printf("\n\t\t\tEnter your choice: ");
        scanf("%d",&x);
        if(x==1)
        {
            addition();
        }
        else if(x==2)
        {
            subtraction();
        }
        else if(x==3)
        {
            multiplication();
        }
        else if(x==4)
        {
            division();
        }
        else if(x==5)
        {
            modulus();
        }
        else if(x==6)
        {
            power();
        }
        else if(x==7)
        {
            factorial();
        }
        else if(x==8)
        {
            Sine();
        }
        else if(x==9)
        {
            Cos();
        }
        else if(x==10)
        {
            Tan();
        }
        else if(x==11)
        {
            Cot();
        }
        else if(x==12)
        {
            Sec();
        }
        else if(x==13)
        {
            Cosec();
        }
    }
    while(x!=0);
}

//Function Definitions

void calculator_operations()
{

    printf("\n\t\t\t1.Addition");
    printf("\n\t\t\t2.Subtraction");
    printf("\n\t\t\t3.Multiplication");
    printf("\n\t\t\t4.Division");
    printf("\n\t\t\t5.Modulus");
    printf("\n\t\t\t6.symbol for Power");
    printf("\n\t\t\t7.Factorial");
    printf("\n\t\t\t8.Sine");
    printf("\n\t\t\t9.Cos");
    printf("\n\t\t\t10.Tan");
    printf("\n\t\t\t11.Cot");
    printf("\n\t\t\t12.Sec");
    printf("\n\t\t\t13.Cosec");
    printf("\n\t\t\t0.Exit");
}

void addition()
{
    int n, total=0, k=0, number;
    printf("\n\t\t\tEnter the number of elements to add: ");
    scanf("%d",&n);
    printf("\n\t\t\tPlease enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("\n\t\t\tSum of %d numbers = %d \n",n,total);
    fflush(stdin);
    getchar();
}

void subtraction()
{
    int a, b, c = 0;
    printf("\n\t\t\tPlease enter first number  : ");
    scanf("%d", &a);
    printf("\n\t\t\tPlease enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n\t\t\t%d - %d = %d\n", a, b, c);
    fflush(stdin);
    getchar();
}

void multiplication()
{
    int a, b, mul=0;
    printf("\n\t\t\tPlease enter first number : ");
    scanf("%d", &a);
    printf("\n\t\t\tPlease enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\n\t\t\tMultiplication of entered numbers = %d\n",mul);
    fflush(stdin);
    getchar();
}

void division()
{
    int a, b, d=0;
    printf("\n\t\t\tPlease enter first number  : ");
    scanf("%d", &a);
    printf("\n\t\t\tPlease enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\n\t\t\tDivision of entered numbers=%d\n",d);
    fflush(stdin);
    getchar();
}

void modulus()
{
    int a, b, d=0;
    printf("\n\t\t\tPlease enter first number   : ");
    scanf("%d", &a);
    printf("\n\t\t\tPlease enter second number  : ");
    scanf("%d", &b);
    d=a%b;
    printf("\n\t\t\tModulus of entered numbers = %d\n",d);
    fflush(stdin);
    getchar();
}

void power()
{
    int n,m;
    int power=1;
    printf("\n\t\t\tEnter the number: ");
    scanf("%d",&n);
    printf("\n\t\t\tEnter the power of the number: ");
    scanf("%d",&m);
    for(int j=1;j<m;j++)
    {
        power=power*n;
    }
    printf("\n\t\t\tThe power of the number %d to %d is %d",n,m,power);
    fflush(stdin);
    getchar();
}

void Sine()
{
  double sinValue, number;
  printf(" Please Enter the Value to calculate Sine :  ");
  scanf("%lf", &number);
  number=number*3.14159/180.0;
  sinValue = sin(number);
  
  printf("\n The Sine value of %lf = %f ", number, sinValue);
  
}

void Cos()
{
  double cosValue, number;
  printf(" Please Enter the Value to calculate Cos :  ");
  scanf("%lf", &number);
  number=number*3.14159/180.0;
  cosValue = cos(number);
  
  printf("\n The Cos value of %lf = %f ", number, cosValue);
  
}

void Tan()
{
  double tanValue, number;
  printf(" Please Enter the Value to calculate Tan :  ");
  scanf("%lf", &number);
  number=number*3.14159/180.0;
  tanValue = tan(number);
  
  printf("\n The Tan value of %lf = %f ", number, tanValue);
  
}

void Cot()
{
  double cotValue, number;
  printf(" Please Enter the Value to calculate Cot :  ");
  scanf("%lf", &number);
  number=number*3.14159/180.0;
  cotValue = 1/(tan(number));
  
  printf("\n The Cot value of %lf = %f ", number, cotValue);
  
}

void Sec()
{
  double secValue, number;
  printf(" Please Enter the Value to calculate Sec :  ");
  scanf("%lf", &number);
  number=number*3.14159/180.0;
  secValue = 1/(cos(number));
  
  printf("\n The Sec value of %lf = %f ", number, secValue);
  
}

void Cosec()
{
  double cosecValue, number;
  printf(" Please Enter the Value to calculate Cosec :  ");
  scanf("%lf", &number);
  number=number*3.14159/180.0;
  cosecValue = 1/(sin(number));
  
  printf("\n The cosec value of %lf = %f ", number, cosecValue);
  
}

int factorial()
{
    heading();
    print_message();
    int i,fact=1,num;

    printf("\n\t\t\tEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\n\t\t\tPlease enter a positive number to");
        printf("\n\t\t\tfind factorial and try again.....");
        printf("\n\t\t\tFactorial can't be found for negative..");
        printf("\n\t\t\tIt can be only positive or 0");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("\n\t\t\tFactorial of entered number %d is:%d\n",num,fact);
    fflush(stdin);
    return 0;
}
