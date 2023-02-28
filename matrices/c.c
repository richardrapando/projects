#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Computing the Transpose, determinant and Inverse of a 3 by 3 matrix.\n");
    printf("Enter matrix values\n\n");
    double number1;
    printf("enter first value in row 1: ");
    scanf("%lf",&number1);
    double number2;
    printf("enter second value in row 1: ");
    scanf("%lf",&number2);
    double number3;
    printf("enter third value in row 1: ");
    scanf("%lf",&number3);
    double number4;
    printf("enter first value in row 2: ");
    scanf("%lf",&number4);
    double number5;
    printf("enter second value in row 2: ");
    scanf("%lf",&number5);
    double number6;
    printf("enter third value in row 2: ");
    scanf("%lf",&number6);
    double number7;
    printf("enter first value in row 3: ");
    scanf("%lf",&number7);
    double number8;
    printf("enter second value in row 3: ");
    scanf("%lf",&number8);
    double number9;
    printf("enter third value in row 3: ");
    scanf("%lf",&number9);
    printf("\n\nthe transpose of the matrix is\n\n");
    printf("\t[ %f, %f, %f ]\n\t[ %f, %f, %f ]\n\t[ %f, %f, %f ]\n\n\n",
           number1,number4,number7,number2,number5,number8,number3,number6,number9);
    printf("the determinant of the matrix is \n\n");
    double a2 = (number1 * number5 * number9) + (number2 * number6 * number7) + (number3 * number4 * number8);
    double b2 = (number1 * number6 * number8) + (number2 * number4 * number9) + (number3 * number5 * number7);
    double c2 = a2 - b2;
    printf("\t%f\n\n",c2);
    printf("the inverse of the matrix is\n");
    double a3 = (number5 * number9) - (number8 * number6);
    double b3 = (number4 * number9) - (number7 * number6);
    double c3 = (number4 * number8) - (number7 * number5);
    double d3 = (number2 * number9) - (number7 * number3);
    double e3 = (number1 * number9) - (number7 * number3);
    double f3 = (number1 * number8) - (number7 * number2);
    double g3 = (number2 * number6) - (number5 * number3);
    double h3 = (number1 * number6) - (number4 * number3);
    double i3 = (number1 * number5) - (number4 * number2);
    double a4 = a3 * (1 / c2);
    double b4 = -d3 * (1 / c2);
    double c4 = g3 * (1 / c2);
    double d4 = -b3 * (1 / c2);
    double e4 = e3 * (1 / c2);
    double f4 = -h3 * (1 / c2);
    double g4 = c3 * (1 / c2);
    double h4 = -f3 * (1 / c2);
    double i4 = i3 * (1 / c2);
    printf("\t[ %f, %f, %f ]\n\t[ %f, %f, %f ]\n\t[ %f, %f, %f ]\n\n\n",a4,b4,c4,d4,e4,f4,g4,h4,i4);
    return 0;
}
