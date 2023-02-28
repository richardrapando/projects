#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Computing the Transpose, determinant and Inverse of a 3 by 3 matrix."<<endl;
    cout<<"Enter matrix values"<<endl;
    cout<<"\n";
    double number1;
    cout<<"enter first value in row 1: ";
    cin>>number1;
    double number2;
    cout<<"enter second value in row 1: ";
    cin>>number2;
    double number3;
    cout<<"enter third value in row 1: ";
    cin>>number3;
    double number4;
    cout<<"enter first value in row 2: ";
    cin>>number4;
    double number5;
    cout<<"enter second value in row 2: ";
    cin>>number5;
    double number6;
    cout<<"enter third value in row 2: ";
    cin>>number6;
    double number7;
    cout<<"enter first value in row 3: ";
    cin>>number7;
    double number8;
    cout<<"enter second value in row 3: ";
    cin>>number8;
    double number9;
    cout<<"enter third value in row 3: ";
    cin>>number9;
    cout<<"\n\n";
    cout<<"the transpose of the matrix is\n\n\t["<<number1<<","<<number4<<","<<
    number7<<"]\n\t["<<number2<<","<<number5<<","<<
    number8<<"]\n\t["<<number3<<","<<number6<<","<<number9<<"]\n\nthe determinant of the matrix is\n\n";
    double a2 = (number1 * number5 * number9) + (number2 * number6 * number7) + (number3 * number4 * number8);
    double b2 = (number1 * number6 * number8) + (number2 * number4 * number9) + (number3 * number5 * number7);
    double c2 = a2 - b2;
    cout<<"\t"<<c2<<"\n\n\nthe inverse of the matrix is\n\n";
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
    cout<<"\t["<<a4<<","<<b4<<","<<c4<<"]\n\t["<<d4<<","<<e4<<","<<f4<<"]\n\t["<<g4<<","<<h4<<","<<i4<<"]\n\n\n";
    return 0;
}

