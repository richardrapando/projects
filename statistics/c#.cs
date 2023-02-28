            Console.WriteLine("Computing the Mode, Median, Mean, Variance and Standard deviation of a set of 25 values.");
            Console.WriteLine("The maximum value in the set can be 50 and the minimum value 1.");
            Console.WriteLine("A frequency grouped distribution is generated for the data keyed in\n\n");
            Console.WriteLine("Key in the 25 values;\n\n\n");
            Console.Write("enter number 1: ");
            double number1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 2: ");
            double number2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 3: ");
            double number3 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 4: ");
            double number4 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 5: ");
            double number5 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 6: ");
            double number6 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 7: ");
            double number7 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 8: ");
            double number8 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 9: ");
            double number9 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 10: ");
            double number10 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 11: ");
            double number11 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 12: ");
            double number12 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 13: ");
            double number13 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 14: ");
            double number14 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 15: ");
            double number15 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 16: ");
            double number16 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 17: ");
            double number17 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 18: ");
            double number18 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 19: ");
            double number19 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 20: ");
            double number20 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 21: ");
            double number21 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 22: ");
            double number22 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 23: ");
            double number23 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 24: ");
            double number24 = Convert.ToDouble(Console.ReadLine());
            Console.Write("enter number 25: ");
            double number25 = Convert.ToDouble(Console.ReadLine());
            double[] arrayList = {number1,number2,number3,number4,number5,number6,number7,number8,number9,
            number10,number11,number12,number13,number14,number15,number16,number17,number18,number19,
            number20,number21,number22,number23,number24, number25};
            double frequency1 = 0.0;
            double frequency2 = 0.0;
            double frequency3 = 0.0;
            double frequency4 = 0.0;
            double frequency5 = 0.0;
            double frequency6 = 0.0;
            double frequency7 = 0.0;
            double frequency8 = 0.0;
            double frequency9 = 0.0;
            double frequency10 = 0.0;
            for (int indexPosition = 0; indexPosition < arrayList.Length; indexPosition++)
            {
                if (arrayList[indexPosition] >= 1 && arrayList[indexPosition] <= 5)
                {
                    frequency1++;
                }
                else if (arrayList[indexPosition] >= 6 && arrayList[indexPosition] <= 10)
                {
                    frequency2++;
                }
                else if (arrayList[indexPosition] >= 11 && arrayList[indexPosition] <= 15)
                {
                    frequency3++;
                }
                else if (arrayList[indexPosition] >= 16 && arrayList[indexPosition] <= 20)
                {
                    frequency4++;
                }
                else if (arrayList[indexPosition] >= 21 && arrayList[indexPosition] <= 25)
                {
                    frequency5++;
                }
                else if (arrayList[indexPosition] >= 26 && arrayList[indexPosition] <= 30)
                {
                    frequency6++;
                }
                else if (arrayList[indexPosition] >= 31 && arrayList[indexPosition] <= 35)
                {
                    frequency7++;
                }
                else if (arrayList[indexPosition] >= 36 && arrayList[indexPosition] <= 40)
                {
                    frequency8++;
                }
                else if (arrayList[indexPosition] >= 41 && arrayList[indexPosition] <= 45)
                {
                    frequency9++;
                }
                else if (arrayList[indexPosition] >= 46 && arrayList[indexPosition] <= 50)
                {
                    frequency10++;
                }
            }
            double sumOfFrequency = frequency1 + frequency2 + frequency3 + frequency4 + frequency5 + frequency6 +
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
            double c1 = frequency1 * Math.Pow(((1.0 + 5.0) / 2), 2.0);
            double c2 = frequency2 * Math.Pow(((6.0 + 10.0) / 2), 2.0);
            double c3 = frequency3 * Math.Pow(((11.0 + 15.0) / 2), 2.0);
            double c4 = frequency4 * Math.Pow(((16.0 + 20.0) / 2), 2.0);
            double c5 = frequency5 * Math.Pow(((21.0 + 25.0) / 2), 2.0);
            double c6 = frequency6 * Math.Pow(((26.0 + 30.0) / 2), 2.0);
            double c7 = frequency7 * Math.Pow(((31.0 + 35.0) / 2), 2.0);
            double c8 = frequency8 * Math.Pow(((36.0 + 40.0) / 2), 2.0);
            double c9 = frequency9 * Math.Pow(((41.0 + 45.0) / 2), 2.0);
            double c10 = frequency10 * Math.Pow(((46.0 + 50.0) / 2), 2.0);
            double sumOfProductOfFrequencyAndSquareOfMidpoint = c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10;
            double fxxf = sumOfProductOfFrequencyAndSquareOfMidpoint / sumOfFrequency;
            double fxf = sumOfProductOfFrequencyAndMidpoint / sumOfFrequency;
            double fxfSquared = (fxf) * (fxf);
            double variance = (fxxf) - (fxfSquared);
            double standDeviation = Math.Sqrt(variance);
            Console.WriteLine("\n\n\nclass Limit\t\tfrequency\n\n1-   5\t\t\t  " + frequency1 + "\n\n6-  10\t\t\t  " +
                frequency2 + "\n\n11- 15\t\t\t  " + frequency3 + "\n\n16- 20\t\t\t  " + frequency4 + "\n\n21- 25\t\t\t  " +
                frequency5 + "\n\n26- 30\t\t\t  " + frequency6 + "\n\n31- 35\t\t\t  " + frequency7 + "\n\n36- 40\t\t\t  " +
                frequency8 + "\n\n41- 45\t\t\t  " + frequency9 + "\n\n46- 50\t\t\t  " + frequency10+"\n\n\n");
            if (frequency1 > frequency2 && frequency1 > frequency3 && frequency1 > frequency4 && frequency1 > frequency5 && frequency1 > frequency6 && frequency1 > frequency7 && frequency1 > frequency8 && frequency1 > frequency9 && frequency1 > frequency10)
            {
                Console.WriteLine("1)From the mode formula, mode cannot be calculated since there is no frequency that comes before the modal class (1-5)");
            }
            else if (frequency2 > frequency1 && frequency2 > frequency3 && frequency2 > frequency4 && frequency2 > frequency5 && frequency2 > frequency6 && frequency2 > frequency7 && frequency2 > frequency8 && frequency2 > frequency9 && frequency2 > frequency10)
            {
                double x1 = 5 * (frequency2 - frequency1);
                double y1 = (2 * frequency2) - frequency1 - frequency3;
                double z1 = 5.5 + ((x1) / (y1));
                Console.WriteLine("1)The mode is " + z1);
            }
            else if (frequency3 > frequency1 && frequency3 > frequency2 && frequency3 > frequency4 && frequency3 > frequency5 && frequency3 > frequency6 && frequency3 > frequency7 && frequency3 > frequency8 && frequency3 > frequency9 && frequency3 > frequency10)
            {
                double x2 = 5 * (frequency3 - frequency2);
                double y2 = (2 * frequency3) - frequency2 - frequency4;
                double z2 = 10.5 + x2 / y2;
                Console.WriteLine("1)The mode is " + z2);
            }
            else if (frequency4 > frequency1 && frequency4 > frequency2 && frequency4 > frequency3 && frequency4 > frequency5 && frequency4 > frequency6 && frequency4 > frequency7 && frequency4 > frequency8 && frequency4 > frequency9 && frequency4 > frequency10)
            {
                double x3 = 5 * (frequency4 - frequency3);
                double y3 = (2 * frequency4) - frequency3 - frequency5;
                double z3 = 15.5 + x3 / y3;
                Console.WriteLine("1)The mode is " + z3);
            }
            else if (frequency5 > frequency1 && frequency5 > frequency2 && frequency5 > frequency4 && frequency5 > frequency3 && frequency5 > frequency6 && frequency5 > frequency7 && frequency5 > frequency8 && frequency5 > frequency9 && frequency5 > frequency10)
            {
                double x4 = 5 * (frequency5 - frequency4);
                double y4 = (2 * frequency5) - frequency4 - frequency6;
                double z4 = 20.5 + x4 / y4;
                Console.WriteLine("1)The mode is " + z4);
            }
            else if (frequency6 > frequency1 && frequency6 > frequency2 && frequency6 > frequency4 && frequency6 > frequency5 && frequency6 > frequency3 && frequency6 > frequency7 && frequency6 > frequency8 && frequency6 > frequency9 && frequency6 > frequency10)
            {
                double x5 = 5 * (frequency6 - frequency5);
                double y5 = (2 * frequency6) - frequency5 - frequency7;
                double z5 = 25.5 + x5 / y5;
                Console.WriteLine("1)The mode is " + z5);
            }
            else if (frequency7 > frequency1 && frequency7 > frequency2 && frequency7 > frequency3 && frequency7 > frequency4 && frequency7 > frequency5 && frequency7 > frequency6 && frequency7 > frequency8 && frequency7 > frequency9 && frequency7 > frequency10)
            {
                double x6 = 5 * (frequency7 = frequency6);
                double y6 = (2 * frequency7) - frequency6 - frequency8;
                double z6 = 30.5 + x6 / y6;
                Console.WriteLine("1)The mode is " + z6);
            }
            else if (frequency8 > frequency1 && frequency8 > frequency2 && frequency8 > frequency3 && frequency8 > frequency4 && frequency8 > frequency5 && frequency8 > frequency6 && frequency8 > frequency7 && frequency8 > frequency9 && frequency8 > frequency10)
            {
                double x7 = 5 * (frequency8 - frequency7);
                double y7 = (2 * frequency8) - frequency7 - frequency9;
                double z7 = 35.5 + x7 / y7;
                Console.WriteLine("1)The mode is " + z7);
            }
            else if (frequency9 > frequency1 && frequency9 > frequency2 && frequency9 > frequency3 && frequency9 > frequency4 && frequency9 > frequency5 && frequency9 > frequency6 && frequency9 > frequency7 && frequency9 > frequency8 && frequency9 > frequency10)
            {
                double x8 = 5 * (frequency9 - frequency8);
                double y8 = (2 * frequency9) - frequency8 - frequency10;
                double z8 = 40.5 + x8 / y8;
                Console.WriteLine("1)The mode is " + z8);
            }
            else if (frequency10 > frequency1 && frequency10 > frequency2 && frequency10 > frequency3 && frequency10 > frequency4 && frequency10 > frequency5 && frequency10 > frequency6 && frequency10 > frequency7 && frequency10 > frequency8 && frequency10 > frequency9)
            {
                Console.WriteLine("1)From the mode formula, mode cannot be calculated since there is no frequency that comes after the modal class (46-50)");
            }
            else
            {
                Console.WriteLine("1)From the frequency distribution generated above, mode cannot be calculated(\"frequency repetition\")");
            }
            Console.WriteLine(" ");
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
            if (t10 == frequency1)
            {
                Console.WriteLine("2)From the median formula, median cannot be calculated since there is no cumulative frequency that comes before the median class (1-5)");
            }
            else if (t10 > frequency1 && t10 <= t1)
            {
                double u2 = 5.5 + ((5 / frequency2) * (t10 - frequency1));
                Console.WriteLine("2)The median is " + u2);
            }
            else if (t10 > t1 && t10 <= t2)
            {
                double u3 = 10.5 + ((5 / frequency3) * (t10 - t1));
                Console.WriteLine("2)The median is " + u3);
            }
            else if (t10 > t2 && t10 <= t3)
            {
                double u4 = 15.5 + ((5 / frequency4) * (t10 - t2));
                Console.WriteLine("2)The median is " + u4);
            }
            else if (t10 > t3 && t10 <= t4)
            {
                double u5 = 20.5 + ((5 / frequency5) * (t10 - t3));
                Console.WriteLine("2)The median is " + u5);
            }
            else if (t10 > t4 && t10 <= t5)
            {
                double u6 = 25.5 + ((5 / frequency6) * (t10 - t4));
                Console.WriteLine("2)The median is " + u6);
            }
            else if (t10 > t5 && t10 <= t6)
            {
                double u7 = 30.5 + ((5 / frequency7) * (t10 - t5));
                Console.WriteLine("2)The median is " + u7);
            }
            else if (t10 > t6 && t10 <= t7)
            {
                double u8 = 35.5 + ((5 / frequency8) * (t10 - t6));
                Console.WriteLine("2)The median is " + u8);
            }
            else if (t10 > t7 && t10 <= t8)
            {
                double u9 = 40.5 + ((5 / frequency9) * (t10 - t7));
                Console.WriteLine("2)The median is " + u9);
            }
            else if (t10 > t8 && t10 <= t9)
            {
                double u10 = 45.5 + ((5 / frequency10) * (t10 - t8));
                Console.WriteLine("2)The median is " + u10);
            }
            else
            {
                Console.WriteLine("2)The data does not have a median");
            }
            Console.WriteLine("\n3)The mean is " + meanOfSet);
            Console.WriteLine("\n4)The variance is " + variance);
            Console.WriteLine("\n5)The standard Deviation is " + standDeviation + "\n\n\n");
            Console.ReadLine();
