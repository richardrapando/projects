#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Computing the Mode, Median, Mean, Variance and Standard deviation of a set of 25 values."<<endl;
    cout<<"The maximum value in the set can be 50 and the minimum value 1."<<endl;
    cout<<"A frequency grouped distribution is generated for the data keyed in"<<endl;
    cout<<"\n";
    cout<<"Key in the 25 values;"<<endl;
    cout<<"\n\n";
    double number1;
    cout<<"enter number 1: ";
    cin>>number1;
    double number2;
    cout<<"enter number 2: ";
    cin>>number2;
    double number3;
    cout<<"enter number 3: ";
    cin>>number3;
    double number4;
    cout<<"enter number 4: ";
    cin>>number4;
    double number5;
    cout<<"enter number 5: ";
    cin>>number5;
    double number6;
    cout<<"enter number 6: ";
    cin>>number6;
    double number7;
    cout<<"enter number 7: ";
    cin>>number7;
    double number8;
    cout<<"enter number 8: ";
    cin>>number8;
    double number9;
    cout<<"enter number 9: ";
    cin>>number9;
    double number10;
    cout<<"enter number 10: ";
    cin>>number10;
    double number11;
    cout<<"enter number 11: ";
    cin>>number11;
    double number12;
    cout<<"enter number 12: ";
    cin>>number12;
    double number13;
    cout<<"enter number 13: ";
    cin>>number13;
    double number14;
    cout<<"enter number 14: ";
    cin>>number14;
    double number15;
    cout<<"enter number 15: ";
    cin>>number15;
    double number16;
    cout<<"enter number 16: ";
    cin>>number16;
    double number17;
    cout<<"enter number 17: ";
    cin>>number17;
    double number18;
    cout<<"enter number 18: ";
    cin>>number18;
    double number19;
    cout<<"enter number 19: ";
    cin>>number19;
    double number20;
    cout<<"enter number 20: ";
    cin>>number20;
    double number21;
    cout<<"enter number 21: ";
    cin>>number21;
    double number22;
    cout<<"enter number 22: ";
    cin>>number22;
    double number23;
    cout<<"enter number 23: ";
    cin>>number23;
    double number24;
    cout<<"enter number 24: ";
    cin>>number24;
    double number25;
    cout<<"enter number 25: ";
    cin>>number25;
    double arrayList [] = {number1,number2,number3,number4,number5,number6,number7,number8,number9,
    number10,number11,number12,number13,number14,number15,number16,number17,number18,number19,
    number20,number21,number22,number23,number24, number25};
    int lengthOfArray=sizeof(arrayList)/sizeof(arrayList[0]);
    int indexPosition;
    double frequency1 = 0.0;
    double frequency2 = 0.0;
    double frequency3 = 0.0;
    double frequency4 = 0.0;
    double frequency5 = 0.0;
    double frequency6 = 0.0;
    double frequency7 = 0.0;
    double frequency8 = 0.0;
    double frequency9 = 0.0;
    double frequency10 =0.0;
    cout<<"\n\n"<<endl;
    for(indexPosition=0; indexPosition<lengthOfArray; indexPosition++){
        if (arrayList[indexPosition] >= 1 && arrayList[indexPosition] <= 5){
            frequency1++;
        }else if (arrayList[indexPosition] >= 6 && arrayList[indexPosition] <= 10){
            frequency2++;
        }else if (arrayList[indexPosition] >= 11 && arrayList[indexPosition] <= 15){
            frequency3++;
        }else if (arrayList[indexPosition] >= 16 && arrayList[indexPosition] <= 20){
            frequency4++;
        }else if (arrayList[indexPosition] >= 21 && arrayList[indexPosition] <= 25){
            frequency5++;
        }else if (arrayList[indexPosition] >= 26 && arrayList[indexPosition] <= 30){
            frequency6++;
        }else if (arrayList[indexPosition] >= 31 && arrayList[indexPosition] <= 35){
            frequency7++;
        }else if (arrayList[indexPosition] >= 36 && arrayList[indexPosition] <= 40){
            frequency8++;
        }else if (arrayList[indexPosition] >= 41 && arrayList[indexPosition] <= 45){
            frequency9++;
        }else if (arrayList[indexPosition] >= 46 && arrayList[indexPosition] <= 50){
            frequency10++;
        }
    }
    double sumOfFrequency = frequency1 + frequency2 + frequency3 + frequency4 + frequency5 + frequency6+
    frequency7 + frequency8 + frequency9 + frequency10;
    double b1 = frequency1 * ((1.0 + 5.0) / 2);
    double b2 = frequency2 * ((6.0 + 10.0) / 2);
    double b3 = frequency3 * ((11.0 + 15.0) / 2);
    double b4 = frequency4 * ((16.0 + 20.0) / 2);
    double b5 = frequency5 * ((21.0 + 25.0) / 2);
    double b6 = frequency6 * ((26.0 + 30.0) / 2);
    double b7 = frequency7 * ((31.0 + 35.0) / 2);
    double b8 = frequency8 * ((36.0 + 40.0) / 2);
    double b9 = frequency9 * ((41.0 + 45.0) / 2);
    double b10 = frequency10 * ((46.0 + 50.0) / 2);
    double sumOfProductOfFrequencyAndMidpoint = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10;
    double meanOfSet = sumOfProductOfFrequencyAndMidpoint / sumOfFrequency;
    double c1 = frequency1 * pow(((1.0 + 5.0) / 2), 2.0);
    double c2 = frequency2 * pow(((6.0 + 10.0) / 2), 2.0);
    double c3 = frequency3 * pow(((11.0 + 15.0) / 2), 2.0);
    double c4 = frequency4 * pow(((16.0 + 20.0) / 2), 2.0);
    double c5 = frequency5 * pow(((21.0 + 25.0) / 2), 2.0);
    double c6 = frequency6 * pow(((26.0 + 30.0) / 2), 2.0);
    double c7 = frequency7 * pow(((31.0 + 35.0) / 2), 2.0);
    double c8 = frequency8 * pow(((36.0 + 40.0) / 2), 2.0);
    double c9 = frequency9 * pow(((41.0 + 45.0) / 2), 2.0);
    double c10 = frequency10 * pow(((46.0 + 50.0) / 2), 2.0);
    double sumOfProductOfFrequencyAndSquareOfMidpoint = c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10;
    double fxxf = sumOfProductOfFrequencyAndSquareOfMidpoint /sumOfFrequency ;
    double fxf = sumOfProductOfFrequencyAndMidpoint / sumOfFrequency;
    double fxfSquared = (fxf) * (fxf);
    double variance = (fxxf) - (fxfSquared);
    double standDeviation = sqrt(variance);
    cout<<"class Limit\t\tfrequency"<<"\n\n"<<"1-   5\t\t\t  "<<frequency1<<"\n\n"<<"6-  10\t\t\t  "<<
    frequency2<<"\n\n"<<"11- 15\t\t\t  "<<frequency3<<"\n\n"<<"16- 20\t\t\t  "<<frequency4<<
    "\n\n"<<"21- 25\t\t\t  "<<frequency5<<"\n\n"<<"26- 30\t\t\t  "<<frequency6<<"\n\n"<<
    "26- 30\t\t\t  "<<frequency6<<"\n\n"<<"31- 35\t\t\t  "<<frequency7<<"\n\n"<<"36- 40\t\t\t  "<<frequency8<<
    "\n\n"<<"41- 45\t\t\t  "<<frequency9<<"\n\n"<<"46- 50\t\t\t  "<<frequency10<<"\n\n"<<endl;
    if (frequency1 > frequency2 && frequency1 > frequency3 && frequency1 > frequency4 && frequency1 > frequency5 && frequency1 > frequency6 && frequency1 > frequency7 && frequency1 > frequency8 && frequency1 > frequency9 && frequency1 > frequency10){
        cout<<"1)From the mode formula, mode cannot be calculated since there is no frequency that comes before the modal class (1-5)"<<endl;
    }else if (frequency2 > frequency1 && frequency2 > frequency3 && frequency2 > frequency4 && frequency2 > frequency5 && frequency2 > frequency6 && frequency2 > frequency7 && frequency2 > frequency8 && frequency2 > frequency9 && frequency2 > frequency10){
        double x1 = 5 * (frequency2 - frequency1);
        double y1 = (2 * frequency2) - frequency1 - frequency3;
        double z1 = 5.5 + ((x1) / (y1));
        cout<<"1)The mode is "<<z1<<endl;
    }else if (frequency3 > frequency1 && frequency3 > frequency2 && frequency3 > frequency4 && frequency3 > frequency5 && frequency3 > frequency6 && frequency3 > frequency7 && frequency3 > frequency8 && frequency3 > frequency9 && frequency3 > frequency10){
        double x2 = 5 * (frequency3 - frequency2);
        double y2 = (2 * frequency3) - frequency2 - frequency4;
        double z2 = 10.5 + x2 / y2;
        cout<<"1)The mode is "<<z2<<endl;
    }else if (frequency4 > frequency1 && frequency4 > frequency2 && frequency4 > frequency3 && frequency4 > frequency5 && frequency4 > frequency6 && frequency4 > frequency7 && frequency4 > frequency8 && frequency4 > frequency9 && frequency4 > frequency10){
        double x3 = 5 * (frequency4 - frequency3);
        double y3 = (2 * frequency4) - frequency3 - frequency5;
        double z3 = 15.5 + x3 / y3;
        cout<<"1)The mode is "<<z3<<endl;
    }else if (frequency5 > frequency1 && frequency5 > frequency2 && frequency5 > frequency4 && frequency5 > frequency3 && frequency5 > frequency6 && frequency5 > frequency7 && frequency5 > frequency8 && frequency5 > frequency9 && frequency5 > frequency10){
        double x4 = 5 * (frequency5 - frequency4);
        double y4 = (2 * frequency5) - frequency4 - frequency6;
        double z4 = 20.5 + x4 / y4;
        cout<<"1)The mode is "<<z4<<endl;
    }else if (frequency6 > frequency1 && frequency6 > frequency2 && frequency6 > frequency4 && frequency6 > frequency5 && frequency6 > frequency3 && frequency6 > frequency7 && frequency6 > frequency8 && frequency6 > frequency9 && frequency6 > frequency10){
        double x5 = 5 * (frequency6 - frequency5);
        double y5 = (2 * frequency6) - frequency5 - frequency7;
        double z5 = 25.5 + x5 / y5;
        cout<<"1)The mode is "<<z5<<endl;
    }else if (frequency7 > frequency1 && frequency7 > frequency2 && frequency7 > frequency3 && frequency7 > frequency4 && frequency7 > frequency5 && frequency7 > frequency6 && frequency7 > frequency8 && frequency7 > frequency9 && frequency7 > frequency10){
        double x6 = 5 * (frequency7 = frequency6);
        double y6 = (2 * frequency7) - frequency6 - frequency8;
        double z6 = 30.5 + x6 / y6;
        cout<<"1)The mode is "<<z6<<endl;
    }else if (frequency8 > frequency1 && frequency8 > frequency2 && frequency8 > frequency3 && frequency8 > frequency4 && frequency8 > frequency5 && frequency8 > frequency6 && frequency8 > frequency7 && frequency8 > frequency9 && frequency8 > frequency10){
        double x7 = 5 * (frequency8 - frequency7);
        double y7 = (2 * frequency8) - frequency7 - frequency9;
        double z7 = 35.5 + x7 / y7;
        cout<<"1)The mode is "<<z7<<endl;
    }else if (frequency9 > frequency1 && frequency9 > frequency2 && frequency9 > frequency3 && frequency9 > frequency4 && frequency9 > frequency5 && frequency9 > frequency6 && frequency9 > frequency7 && frequency9 > frequency8 && frequency9 > frequency10){
        double x8 = 5 * (frequency9 - frequency8);
        double y8 = (2 * frequency9) - frequency8 -frequency10;
        double z8 = 40.5 + x8 / y8;
        cout<<"1)The mode is "<<z8<<endl;
    }else if (frequency10 > frequency1 && frequency10 > frequency2 && frequency10 > frequency3 && frequency10 > frequency4 && frequency10 > frequency5 && frequency10 > frequency6 && frequency10 > frequency7 && frequency10 > frequency8 && frequency10 > frequency9){
        cout<<"1)From the mode formula, mode cannot be calculated since there is no frequency that comes after the modal class (46-50)"<<endl;
    }else{
        cout<<"1)From the frequency distribution generated above, mode cannot be calculated(\"frequency repetition\")"<<endl;
    }
    cout<<"\n";
    double t1 = frequency1 + frequency2;
    double t2 = t1 + frequency3;
    double t3 = t2 + frequency4;
    double t4 = t3 + frequency5;
    double t5 = t4 + frequency6;
    double t6 = t5 + frequency7;
    double t7 = t6 + frequency8;
    double t8 = t7 + frequency9;
    double t9 = t8 + frequency10;
    double t10 = (t9) / 2;
    if (t10 == frequency1){
        cout<<"2)From the median formula, median cannot be calculated since there is no cumulative frequency that comes before the median class (1-5)"<<endl;
    }else if (t10 > frequency1 && t10 <= t1){
        double u2 = 5.5 + ((5 / frequency2) * (t10 - frequency1));
        cout<<"2)The median is "<<u2<<endl;
    }else if (t10 > t1 && t10 <= t2){
        double u3 = 10.5 + ((5 / frequency3) * (t10 - t1));
        cout<<"2)The median is "<<u3<<endl;
    }else if (t10 > t2 && t10 <= t3){
        double u4 = 15.5 + ((5 / frequency4) * (t10 - t2));
        cout<<"2)The median is "<<u4<<endl;
    }else if (t10 > t3 && t10 <= t4){
        double u5 = 20.5 + ((5 / frequency5) * (t10 - t3));
        cout<<"2)The median is "<<u5<<endl;
    }else if (t10 > t4 && t10 <= t5){
        double u6 = 25.5 + ((5 / frequency6) * (t10 - t4));
        cout<<"2)The median is "<<u6<<endl;
    }else if (t10 > t5 && t10 <= t6){
        double u7 = 30.5 + ((5 / frequency7) * (t10 - t5));
        cout<<"2)The median is "<<u7<<endl;
    }else if (t10 > t6 && t10 <= t7){
        double u8 = 35.5 + ((5 / frequency8) * (t10 - t6));
        cout<<"2)The median is "<<u8<<endl;
    }else if (t10 > t7 && t10 <= t8){
        double u9 = 40.5 + ((5 / frequency9) * (t10 - t7));
        cout<<"2)The median is "<<u9<<endl;
    }else if (t10 > t8 && t10 <= t9){
        double u10 = 45.5 + ((5 / frequency10) * (t10 - t8));
        cout<<"2)The median is "<<u10<<endl;
    }else{
        cout<<"2)The data does not have a median"<<endl;
    };
    cout<<"\n3)The mean is "<<meanOfSet<<"\n\n";
    cout<<"4)The variance is "<<variance<<"\n\n";
    cout<<"5)The standard Deviation is "<<standDeviation<<"\n\n\n\n";
    return 0;
}
