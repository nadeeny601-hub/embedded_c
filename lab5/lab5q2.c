#include <stdio.h>
#include <stdlib.h>

int x;

typedef struct
{int real;
 int imaginary;
}complex;

complex add(complex c1,complex c2)
{ complex c ;
 c.real=c1.real+c2.real;
 c.imaginary=c1.imaginary+c2.imaginary;
 return c ;
}
complex multiply(complex c1,complex c2)
{
    complex x;
    x.real=(c1.real*c2.real)-(c2.imaginary*c1.imaginary);
    x.imaginary=(c1.real*c2.imaginary)+(c1.imaginary*c2.real);
    return x ;

}
int main()
{   complex c1={3,4};
    complex c2={6,7};
    complex c3;
    complex c4;
    c3=add(c1,c2);
    c4=multiply(c1,c2);
    printf("the sum :%d+%d j ",c3.real , c3.imaginary );
     printf("the multiplication :%d+%d j ",c4.real , c4.imaginary );


    printf("Hello world!\n");
    return 0;
}
