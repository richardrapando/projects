fun main() {
    println("Computing the Mode, Median, Mean, Variance and Standard deviation of a set of 25 values.")
    println("The maximum value in the set can be 50 and the minimum value 1.")
    println("A frequency grouped data table is generated for the data keyed in\n")
    println("Key in the 25 values;\n\n")
    print("enter number 1: ")
    val number1: Double = readLine()!!.toDouble()
    print("enter number 2: ")
    val number2: Double = readLine()!!.toDouble()
    print("enter number 3: ")
    val number3: Double = readLine()!!.toDouble()
    print("enter number 4: ")
    val number4: Double = readLine()!!.toDouble()
    print("enter number 5: ")
    val number5: Double = readLine()!!.toDouble()
    print("enter number 6: ")
    val number6: Double = readLine()!!.toDouble()
    print("enter number 7: ")
    val number7: Double = readLine()!!.toDouble()
    print("enter number 8: ")
    val number8: Double = readLine()!!.toDouble()
    print("enter number 9: ")
    val number9: Double = readLine()!!.toDouble()
    print("enter number 10: ")
    val number10: Double = readLine()!!.toDouble()
    print("enter number 11: ")
    val number11: Double = readLine()!!.toDouble()
    print("enter number 12: ")
    val number12: Double = readLine()!!.toDouble()
    print("enter number 13: ")
    val number13: Double = readLine()!!.toDouble()
    print("enter number 14: ")
    val number14: Double = readLine()!!.toDouble()
    print("enter number 15: ")
    val number15: Double = readLine()!!.toDouble()
    print("enter number 16: ")
    val number16: Double = readLine()!!.toDouble()
    print("enter number 17: ")
    val number17: Double = readLine()!!.toDouble()
    print("enter number 18: ")
    val number18: Double = readLine()!!.toDouble()
    print("enter number 19: ")
    val number19: Double = readLine()!!.toDouble()
    print("enter number 20: ")
    val number20: Double = readLine()!!.toDouble()
    print("enter number 21: ")
    val number21: Double = readLine()!!.toDouble()
    print("enter number 22: ")
    val number22: Double = readLine()!!.toDouble()
    print("enter number 23: ")
    val number23: Double = readLine()!!.toDouble()
    print("enter number 24: ")
    val number24: Double = readLine()!!.toDouble()
    print("enter number 25: ")
    val number25: Double = readLine()!!.toDouble()
    val arrayList = mutableListOf(
        number1, number2, number3, number4, number5, number6, number7, number8, number9,
        number10, number11, number12, number13, number14, number15, number16, number17, number18, number19,
        number20, number21, number22, number23, number24, number25
    )
    var frequency1: Double = 0.0
    var frequency2: Double = 0.0
    var frequency3: Double = 0.0
    var frequency4: Double = 0.0
    var frequency5: Double = 0.0
    var frequency6: Double = 0.0
    var frequency7: Double = 0.0
    var frequency8: Double = 0.0
    var frequency9: Double = 0.0
    var frequency10: Double = 0.0
    for (arrayElement in arrayList) {
        if (arrayElement >= 1 && arrayElement <= 5) {
            frequency1 = frequency1 + 1
        } else if (arrayElement >= 6 && arrayElement <= 10) {
            frequency2 = frequency2 + 1
        } else if (arrayElement >= 11 && arrayElement <= 15) {
            frequency3 = frequency3 + 1
        } else if (arrayElement >= 16 && arrayElement <= 20) {
            frequency4 = frequency4 + 1
        } else if (arrayElement >= 21 && arrayElement <= 25) {
            frequency5 = frequency5 + 1
        } else if (arrayElement >= 26 && arrayElement <= 30) {
            frequency6 = frequency6 + 1
        } else if (arrayElement >= 31 && arrayElement <= 35) {
            frequency7 = frequency7 + 1
        } else if (arrayElement >= 36 && arrayElement <= 40) {
            frequency8 = frequency8 + 1
        } else if (arrayElement >= 41 && arrayElement <= 45) {
            frequency9 = frequency9 + 1
        } else if (arrayElement >= 46 && arrayElement <= 50) {
            frequency10 = frequency10 + 1
        }
    }
    val sumOfFrequency: Double = frequency1 + frequency2 + frequency3 + frequency4 + frequency5 + frequency6 +
            frequency7 + frequency8 + frequency9 + frequency10
    val b1: Double = frequency1 * ((1.0 + 5.0) / 2)
    val b2: Double = frequency2 * ((6.0 + 10.0) / 2)
    val b3: Double = frequency3 * ((11.0 + 15.0) / 2)
    val b4: Double = frequency4 * ((16.0 + 20.0) / 2)
    val b5: Double = frequency5 * ((21.0 + 25.0) / 2)
    val b6: Double = frequency6 * ((26.0 + 30.0) / 2)
    val b7: Double = frequency7 * ((31.0 + 35.0) / 2)
    val b8: Double = frequency8 * ((36.0 + 40.0) / 2)
    val b9: Double = frequency9 * ((41.0 + 45.0) / 2)
    val b10: Double = frequency10 * ((46.0 + 50.0) / 2)
    val sumOfProductOfFrequencyAndMidpoint: Double = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 + b10
    val meanOfSet: Double = sumOfProductOfFrequencyAndMidpoint / sumOfFrequency
    val c1: Double = frequency1 * Math.pow(((1.0 + 5.0) / 2), 2.0)
    val c2: Double = frequency2 * Math.pow(((6.0 + 10.0) / 2), 2.0)
    val c3: Double = frequency3 * Math.pow(((11.0 + 15.0) / 2), 2.0)
    val c4: Double = frequency4 * Math.pow(((16.0 + 20.0) / 2), 2.0)
    val c5: Double = frequency5 * Math.pow(((21.0 + 25.0) / 2), 2.0)
    val c6: Double = frequency6 * Math.pow(((26.0 + 30.0) / 2), 2.0)
    val c7: Double = frequency7 * Math.pow(((31.0 + 35.0) / 2), 2.0)
    val c8: Double = frequency8 * Math.pow(((36.0 + 40.0) / 2), 2.0)
    val c9: Double = frequency9 * Math.pow(((41.0 + 45.0) / 2), 2.0)
    val c10: Double = frequency10 * Math.pow(((46.0 + 50.0) / 2), 2.0)
    val sumOfProductOfFrequencyAndSquareOfMidpoint: Double = c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10
    val fxxf: Double = sumOfProductOfFrequencyAndSquareOfMidpoint / sumOfFrequency
    val fxf: Double = sumOfProductOfFrequencyAndMidpoint / sumOfFrequency
    val fxfSquared: Double = (fxf) * (fxf)
    val variance: Double = (fxxf) - (fxfSquared)
    val standDeviation: Double = Math.sqrt(variance)
    print("\n\n\n")
    println("class Limit\t\tfrequency\n1-   5\t\t\t  "+ frequency1+"\n\n6-  10\t\t\t  " +
            frequency2+"\n\n11- 15\t\t\t  " + frequency3+"\n\n16- 20\t\t\t  " +
            frequency4+"\n\n21- 25\t\t\t  " + frequency5+"\n\n26- 30\t\t\t  " +
            frequency6+"\n\n31- 35\t\t\t  " + frequency7+"\n\n36- 40\t\t\t  " +
            frequency8+"\n\n41- 45\t\t\t  " + frequency9+"\n\n46- 50\t\t\t  " + frequency10+"\n\n\n")
    if (frequency1 > frequency2 && frequency1 > frequency3 && frequency1 > frequency4 && frequency1 > frequency5 && frequency1 > frequency6 && frequency1 > frequency7 && frequency1 > frequency8 && frequency1 > frequency9 && frequency1 > frequency10) {
        println("1)From the mode formula, mode cannot be calculated since there is no frequency that comes before the modal class (1-5)")
    }else if (frequency2 > frequency1 && frequency2 > frequency3 && frequency2 > frequency4 && frequency2 > frequency5 && frequency2 > frequency6 && frequency2 > frequency7 && frequency2 > frequency8 && frequency2 > frequency9 && frequency2 > frequency10) {
        var x1: Double = 5 * (frequency2 - frequency1)
        var y1: Double = (2 * frequency2) - frequency1 - frequency3
        val z1: Double = 5.5 + ((x1) / (y1))
        println("1)The mode is " + z1)
    }else if (frequency3 > frequency1 && frequency3 > frequency2 && frequency3 > frequency4 && frequency3 > frequency5 && frequency3 > frequency6 && frequency3 > frequency7 && frequency3 > frequency8 && frequency3 > frequency9 && frequency3 > frequency10) {
        var x2: Double = 5 * (frequency3 - frequency2)
        var y2: Double = (2 * frequency3) - frequency2 - frequency4
        val z2: Double = 10.5 + x2 / y2
        println("1)The mode is " + z2)
    }else if (frequency4 > frequency1 && frequency4 > frequency2 && frequency4 > frequency3 && frequency4 > frequency5 && frequency4 > frequency6 && frequency4 > frequency7 && frequency4 > frequency8 && frequency4 > frequency9 && frequency4 > frequency10) {
        var x3: Double = 5 * (frequency4 - frequency3)
        var y3: Double = (2 * frequency4) - frequency3 - frequency5
        val z3: Double = 15.5 + x3 / y3
        println("1)The mode is " + z3)
    }else if (frequency5 > frequency1 && frequency5 > frequency2 && frequency5 > frequency4 && frequency5 > frequency3 && frequency5 > frequency6 && frequency5 > frequency7 && frequency5 > frequency8 && frequency5 > frequency9 && frequency5 > frequency10) {
        var x4: Double = 5 * (frequency5 - frequency4)
        var y4: Double = (2 * frequency5) - frequency4 - frequency6
        val z4: Double = 20.5 + x4 / y4
        println("1)The mode is " + z4)
    }else if (frequency6 > frequency1 && frequency6 > frequency2 && frequency6 > frequency4 && frequency6 > frequency5 && frequency6 > frequency3 && frequency6 > frequency7 && frequency6 > frequency8 && frequency6 > frequency9 && frequency6 > frequency10) {
        var x5: Double = 5 * (frequency6 - frequency5)
        var y5: Double = (2 * frequency6) - frequency5 - frequency7
        val z5: Double = 25.5 + x5 / y5
        println("1)The mode is " + z5)
    }else if (frequency7 > frequency1 && frequency7 > frequency2 && frequency7 > frequency3 && frequency7 > frequency4 && frequency7 > frequency5 && frequency7 > frequency6 && frequency7 > frequency8 && frequency7 > frequency9 && frequency7 > frequency10) {
        var x6: Double = 5 * (frequency7 - frequency6)
        var y6: Double = (2 * frequency7) - frequency6 - frequency8
        val z6: Double = 30.5 + x6 / y6
        println("1)The mode is " + z6)
    }else if (frequency8 > frequency1 && frequency8 > frequency2 && frequency8 > frequency3 && frequency8 > frequency4 && frequency8 > frequency5 && frequency8 > frequency6 && frequency8 > frequency7 && frequency8 > frequency9 && frequency8 > frequency10) {
        var x7: Double = 5 * (frequency8 - frequency7)
        var y7: Double = (2 * frequency8) - frequency7 - frequency9
        val z7: Double = 35.5 + x7 / y7
        println("1)The mode is " + z7)
    }else if (frequency9 > frequency1 && frequency9 > frequency2 && frequency9 > frequency3 && frequency9 > frequency4 && frequency9 > frequency5 && frequency9 > frequency6 && frequency9 > frequency7 && frequency9 > frequency8 && frequency9 > frequency10) {
        var x8: Double = 5 * (frequency9 - frequency8)
        var y8: Double = (2 * frequency9) - frequency8 - frequency10
        val z8: Double = 40.5 + x8 / y8
        println("1)The median is " + z8)
    }else if (frequency10 > frequency1 && frequency10 > frequency2 && frequency10 > frequency3 && frequency10 > frequency4 && frequency10 > frequency5 && frequency10 > frequency6 && frequency10 > frequency7 && frequency10 > frequency8 && frequency10 > frequency9) {
        println("1)From the mode formula, mode cannot be calculated since there is no frequency that comes after the modal class (46-50)")
    }else {
        println("1)From the frequency distribution table generated above, mode cannot be calculated since all the frequencies are not unique(\"some are repeated\")")
    }
    println(" ")
    val t1: Double = frequency1 + frequency2
    val t2: Double = t1 + frequency3
    val t3: Double = t2 + frequency4
    val t4: Double = t3 + frequency5
    val t5: Double = t4 + frequency6
    val t6: Double = t5 + frequency7
    val t7: Double = t6 + frequency8
    val t8: Double = t7 + frequency9
    val t9: Double = t8 + frequency10
    val t10: Double = (t9) / 2
    if (t10 == frequency1) {
        println("2)From the median formula, median cannot be calculated since there is no cumulative frequency that comes before the median class (1-5)")
    }else if (t10 > frequency1 && t10 <= t1) {
        val u2: Double = 5.5 + ((5 / frequency2) * (t10 - frequency1))
        println("2)The median is " + u2)
    }else if (t10 > t1 && t10 <= t2) {
        val u3: Double = 10.5 + ((5 / frequency3) * (t10 - t1))
        println("2)The median is " + u3)
    }else if (t10 > t2 && t10 <= t3) {
        val u4: Double = 15.5 + ((5 / frequency4) * (t10 - t2))
        println("2)The median is " + u4)
    } else if (t10 > t3 && t10 <= t4) {
        val u5: Double = 20.5 + ((5 / frequency5) * (t10 - t3))
        println("2)The median is " + u5)
    } else if (t10 > t4 && t10 <= t5) {
        val u6: Double = 25.5 + ((5 / frequency6) * (t10 - t4))
        println("2)The median is " + u6)
    } else if (t10 > t5 && t10 <= t6) {
        val u7: Double = 30.5 + ((5 / frequency7) * (t10 - t5))
        println("2)The median is " + u7)
    } else if (t10 > t6 && t10 <= t7) {
        val u8: Double = 35.5 + ((5 / frequency8) * (t10 - t6))
        println("2)The median is " + u8)
    } else if (t10 > t7 && t10 <= t8) {
        val u9: Double = 40.5 + ((5 / frequency9) * (t10 - t7))
        println("2)The median is " + u9)
    } else if (t10 > t8 && t10 <= t9) {
        val u10: Double = 45.5 + ((5 / frequency10) * (t10 - t8))
        println("2)The median is " + u10)
    } else {
        println("2)The data does not have a median")
    }
    println("\n3)The mean is " + meanOfSet+"\n")
    println("4)The variance is " + variance+"\n")
    println("5)The standard Deviation is " + standDeviation+"\n\n")
}
