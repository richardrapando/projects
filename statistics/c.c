#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Computing the Mode, Median, Mean, Variance and Standard deviation of a set of 25 values.\n");
    printf("The maximum value in the set can be 50 and the minimum value 1.\n");
    printf("A frequency grouped distribution is generated for the data keyed in\n\n");
    printf("Key in the 25 values;\n");
    printf("\n\n");
    double number1;
    printf("enter number 1: ");
    scanf("%lf", &number1);
    double number2;
    printf("enter number 2: ");
    scanf("%lf", &number2);
    double number3;
    printf("enter number 3: ");
    scanf("%lf", &number3);
    double number4;
    printf("enter number 4: ");
    scanf("%lf", &number4);
    double number5;
    printf("enter number 5: ");
    scanf("%lf", &number5);
    double number6;
    printf("enter number 6: ");
    scanf("%lf", &number6);
    double number7;
    printf("enter number 7: ");
    scanf("%lf", &number7);
    double number8;
    printf("enter number 8: ");
    scanf("%lf", &number8);
    double number9;
    printf("enter number 9: ");
    scanf("%lf", &number9);
    double number10;
    printf("enter number 10: ");
    scanf("%lf", &number10);
    double number11;
    printf("enter number 11: ");
    scanf("%lf", &number11);
    double number12;
    printf("enter number 12: ");
    scanf("%lf", &number12);
    double number13;
    printf("enter number 13: ");
    scanf("%lf", &number13);
    double number14;
    printf("enter number 14: ");
    scanf("%lf", &number14);
    double number15;
    printf("enter number 15: ");
    scanf("%lf", &number15);
    double number16;
    printf("enter number 16: ");
    scanf("%lf", &number16);
    double number17;
    printf("enter number 17: ");
    scanf("%lf", &number17);
    double number18;
    printf("enter number 18: ");
    scanf("%lf", &number18);
    double number19;
    printf("enter number 19: ");
    scanf("%lf", &number19);
    double number20;
    printf("enter number 20: ");
    scanf("%lf", &number20);
    double number21;
    printf("enter number 21: ");
    scanf("%lf", &number21);
    double number22;
    printf("enter number 22: ");
    scanf("%lf", &number22);
    double number23;
    printf("enter number 23: ");
    scanf("%lf", &number23);
    double number24;
    printf("enter number 24: ");
    scanf("%lf", &number24);
    double number25;
    printf("enter number 25: ");
    scanf("%lf", &number25);
    double arrayList [] = {number1,number2,number3,number4,number5,number6,number7,number8,number9,number10,number11,number12,number13,number14,number15,number16,number17,number18,number19,number20,number21,number22,number23,number24, number25};
    int indexPosition;
    int lengthOfArray=sizeof(arrayList)/sizeof(arrayList[0]);
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
    double sumOfFrequency = frequency1 + frequency2 + frequency3 + frequency4 + frequency5 + frequency6+ frequency7 + frequency8 + frequency9 + frequency10;
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
    printf("\n\n\n");
    printf("class Limit\t\tfrequency\n\n1-   5\t\t\t  %f\n\n6-  10\t\t\t  %f\n\n11- 15\t\t\t  %f\n\n16- 20\t\t\t  %f\n\n",
           frequency1,frequency2,frequency3,frequency4);
    printf("21- 25\t\t\t  %f\n\n26- 30\t\t\t  %f\n\n31- 35\t\t\t  %f\n\n36- 40\t\t\t  %f\n\n",frequency5,frequency6,frequency7,frequency8);
    printf("41- 45\t\t\t  %f\n\n46- 50\t\t\t  %f\n\n\n",frequency9,frequency10);
    if (frequency1 > frequency2 && frequency1 > frequency3 && frequency1 > frequency4 && frequency1 > frequency5 && frequency1 > frequency6 && frequency1 > frequency7 && frequency1 > frequency8 && frequency1 > frequency9 && frequency1 > frequency10){
        printf("1)From the mode formula, mode cannot be calculated since there is no frequency that comes before the modal class (1-5)\n");
    }else if (frequency2 > frequency1 && frequency2 > frequency3 && frequency2 > frequency4 && frequency2 > frequency5 && frequency2 > frequency6 && frequency2 > frequency7 && frequency2 > frequency8 && frequency2 > frequency9 && frequency2 > frequency10){
        double x1 = 5 * (frequency2 - frequency1);
        double y1 = (2 * frequency2) - frequency1 - frequency3;
        double z1 = 5.5 + ((x1) / (y1));
        printf("1)The mode is %f\n",z1);
    }else if (frequency3 > frequency1 && frequency3 > frequency2 && frequency3 > frequency4 && frequency3 > frequency5 && frequency3 > frequency6 && frequency3 > frequency7 && frequency3 > frequency8 && frequency3 > frequency9 && frequency3 > frequency10){
        double x2 = 5 * (frequency3 - frequency2);
        double y2 = (2 * frequency3) - frequency2 - frequency4;
        double z2 = 10.5 + x2 / y2;
        printf("1)The mode is %f\n",z2);
    }else if (frequency4 > frequency1 && frequency4 > frequency2 && frequency4 > frequency3 && frequency4 > frequency5 && frequency4 > frequency6 && frequency4 > frequency7 && frequency4 > frequency8 && frequency4 > frequency9 && frequency4 > frequency10){
        double x3 = 5 * (frequency4 - frequency3);
        double y3 = (2 * frequency4) - frequency3 - frequency5;
        double z3 = 15.5 + x3 / y3;
        printf("1)The mode is %f\n",z3);
    }else if (frequency5 > frequency1 && frequency5 > frequency2 && frequency5 > frequency4 && frequency5 > frequency3 && frequency5 > frequency6 && frequency5 > frequency7 && frequency5 > frequency8 && frequency5 > frequency9 && frequency5 > frequency10){
        double x4 = 5 * (frequency5 - frequency4);
        double y4 = (2 * frequency5) - frequency4 - frequency6;
        double z4 = 20.5 + x4 / y4;
        printf("1)The mode is %f\n",z4);
    }else if (frequency6 > frequency1 && frequency6 > frequency2 && frequency6 > frequency4 && frequency6 > frequency5 && frequency6 > frequency3 && frequency6 > frequency7 && frequency6 > frequency8 && frequency6 > frequency9 && frequency6 > frequency10){
        double x5 = 5 * (frequency6 - frequency5);
        double y5 = (2 * frequency6) - frequency5 - frequency7;
        double z5 = 25.5 + x5 / y5;
        printf("1)The mode is %f\n",z5);
    }else if (frequency7 > frequency1 && frequency7 > frequency2 && frequency7 > frequency3 && frequency7 > frequency4 && frequency7 > frequency5 && frequency7 > frequency6 && frequency7 > frequency8 && frequency7 > frequency9 && frequency7 > frequency10){
        double x6 = 5 * (frequency7 = frequency6);
        double y6 = (2 * frequency7) - frequency6 - frequency8;
        double z6 = 30.5 + x6 / y6;
        printf("1)The mode is %f\n",z6);
    }else if (frequency8 > frequency1 && frequency8 > frequency2 && frequency8 > frequency3 && frequency8 > frequency4 && frequency8 > frequency5 && frequency8 > frequency6 && frequency8 > frequency7 && frequency8 > frequency9 && frequency8 > frequency10){
        double x7 = 5 * (frequency8 - frequency7);
        double y7 = (2 * frequency8) - frequency7 - frequency9;
        double z7 = 35.5 + x7 / y7;
        printf("1)The mode is %f\n",z7);
    }else if (frequency9 > frequency1 && frequency9 > frequency2 && frequency9 > frequency3 && frequency9 > frequency4 && frequency9 > frequency5 && frequency9 > frequency6 && frequency9 > frequency7 && frequency9 > frequency8 && frequency9 > frequency10){
        double x8 = 5 * (frequency9 - frequency8);
        double y8 = (2 * frequency9) - frequency8 -frequency10;
        double z8 = 40.5 + x8 / y8;
        printf("1)The mode is %f\n",z8);
    }else if (frequency10 > frequency1 && frequency10 > frequency2 && frequency10 > frequency3 && frequency10 > frequency4 && frequency10 > frequency5 && frequency10 > frequency6 && frequency10 > frequency7 && frequency10 > frequency8 && frequency10 > frequency9){
        printf("1)From the mode formula, mode cannot be calculated since there is no frequency that comes after the modal class (46-50)\n");
    }else{
        printf("1)From the frequency distribution table generated above, mode cannot be calculated since all the frequencies are not unique(\"some are repeated\")\n");
    }
    printf("\n");
    double t1 = frequency1 + frequency2;
    double t2 = t1 + frequency3;
    double t3 = t2 + frequency4;
    double t4 = t3 + frequency5;
    double t5 = t4 + frequency6;
    double t6 = t5 + frequency7;
    double t7 = t6 + frequency8;
    double t8 = t7 + frequency9;
    double t9 = t8 + frequency10;
    double t10 = t9 / 2;
    if (t10 == frequency1){
        printf("2)From the median formula, median cannot be calculated since there is no cumulative frequency that comes before the median class (1-5)\n");
    }else if (t10 > frequency1 && t10 <= t1){
        double u2 = 5.5 + ((5 / frequency2) * (t10 - frequency1));
        printf("2)The median is %f\n",u2);
    }else if (t10 > t1 && t10 <= t2){
        double u3 = 10.5 + ((5 / frequency3) * (t10 - t1));
        printf("2)The median is %f\n",u3);
    }else if (t10 > t2 && t10 <= t3){
        double u4 = 15.5 + ((5 / frequency4) * (t10 - t2));
        printf("2)The median is %f\n",u4);
    }else if (t10 > t3 && t10 <= t4){
        double u5 = 20.5 + ((5 / frequency5) * (t10 - t3));
        printf("2)The median is %f\n",u5);
    }else if (t10 > t4 && t10 <= t5){
        double u6 = 25.5 + ((5 / frequency6) * (t10 - t4));
        printf("2)The median is %f\n",u6);
    }else if (t10 > t5 && t10 <= t6){
        double u7 = 30.5 + ((5 / frequency7) * (t10 - t5));
        printf("2)The median is %f\n",u7);
    }else if (t10 > t6 && t10 <= t7){
        double u8 = 35.5 + ((5 / frequency8) * (t10 - t6));
        printf("2)The median is %f\n",u8);
    }else if (t10 > t7 && t10 <= t8){
        double u9 = 40.5 + ((5 / frequency9) * (t10 - t7));
        printf("2)The median is %f\n",u9);
    }else if (t10 > t8 && t10 <= t9){
        double u10 = 45.5 + ((5 / frequency10) * (t10 - t8));
        printf("2)The median is %f\n",u10);
    }else{
        printf("2)The data does not have a median\n");
    };
    printf("\n");
    printf("3)The mean is %f\n\n",meanOfSet);
    printf("4)The variance is %f\n\n",variance);
    printf("5)The standard Deviation is %f\n\n\n\n",standDeviation);
    return 0;
}
