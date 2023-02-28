<html>
    <head>
        <meta charset="UTF-8">
        <meta name="description" content="richard rapando project">
        <meta name="author" content="richard rapando">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Statistics</title>
    </head>
    <body> 
        <h1 style="color:blue;">Computing the Mode, Median, Mean, Variance and Standard deviation of a set of 25 values </h1>
        <h2 style="color:blue;"><b style="color:white;">.......</b>(the maximum value in the set can be 50 and the minimum value 1)</h2>
        <hr>
        <h4 style="color:green;">Once all the data is keyed in and the "Submit" button clicked, a frequency grouped data table is generated below the button<h4>
        <form action="" method="post" style="background-color:grey;">
            <b style="font-size:120%;">Key in the values</b><br><br>
            Enter number 1:<br>
            <input type="number" step="0.00001" name="number1"><br>
            Enter number 2:<br>
            <input type="number" step="0.00001" name="number2"><br>
            Enter number 3:<br>
            <input type="number" step="0.00001" name="number3"><br>
            Enter number 4:<br>
            <input type="number" step="0.00001" name="number4"><br>
            Enter number 5:<br>
            <input type="number" step="0.00001" name="number5"><br>
            Enter number 6<br>
            <input type="number" step="0.00001" name="number6"><br>
            Enter number 7:<br>
            <input type="number" step="0.00001" name="number7"><br>
            Enter number 8:<br>
            <input type="number" step="0.00001" name="number8"><br>
            Enter number 9:<br>
            <input type="number" step="0.00001" name="number9"><br>
            Enter number 10:<br>
            <input type="number" step="0.00001" name="number10"><br>
            Enter number 11:<br>
            <input type="number" step="0.00001" name="number11"><br>
            Enter number 12:<br>
            <input type="number" step="0.00001" name="number12"><br>
            Enter number 13:<br>
            <input type="number" step="0.00001" name="number13"><br>
            Enter number 14:<br>
            <input type="number" step="0.00001" name="number14"><br>
            Enter number 15:<br>
            <input type="number" step="0.00001" name="number15"><br>
            Enter number 16:<br>
            <input type="number" step="0.00001" name="number16"><br>
            Enter number 17:<br>
            <input type="number" step="0.00001" name="number17"><br>
            Enter number 18:<br>
            <input type="number" step="0.00001" name="number18"><br>
            Enter number 19:<br>
            <input type="number" step="0.00001" name="number19"><br>
            Enter number 20:<br>
            <input type="number" step="0.00001" name="number20"><br>
            Enter number 21:<br>
            <input type="number" step="0.00001" name="number21"><br>
            Enter number 22:<br>
            <input type="number" step="0.00001" name="number22"><br>
            Enter number 23:<br>
            <input type="number" step="0.00001" name="number23"><br>
            Enter number 24:<br>
            <input type="number" step="0.00001" name="number24"><br>
            Enter number 25:<br>
            <input type="number" step="0.00001" name="number25"><br><br>
            <input type="submit"><br><br>
        <?php
        if(isset($_POST["number1"]) && isset($_POST["number2"]) &&isset($_POST["number3"]) && isset($_POST["number4"]) &&
        isset($_POST["number5"]) && isset($_POST["number6"]) &&isset($_POST["number7"]) && isset($_POST["number8"]) &&
        isset($_POST["number9"]) && isset($_POST["number10"]) &&isset($_POST["number11"]) && isset($_POST["number12"]) &&
        isset($_POST["number13"]) && isset($_POST["number14"]) &&isset($_POST["number15"]) && isset($_POST["number16"]) &&
        isset($_POST["number17"]) && isset($_POST["number18"]) &&isset($_POST["number19"]) && isset($_POST["number20"]) &&
        isset($_POST["number21"]) && isset($_POST["number22"]) &&isset($_POST["number23"]) && isset($_POST["number24"]) &&
        isset($_POST["number25"])){
            $arrayList=array($_POST["number1"], $_POST["number2"], $_POST["number3"], $_POST["number4"], $_POST["number5"],
             $_POST["number6"], $_POST["number7"], $_POST["number8"],$_POST["number9"], $_POST["number10"], $_POST["number11"],
              $_POST["number12"], $_POST["number13"], $_POST["number14"], $_POST["number15"], $_POST["number16"], $_POST["number17"],
               $_POST["number18"], $_POST["number19"], $_POST["number20"], $_POST["number21"],$_POST["number22"], $_POST["number23"],
                $_POST["number24"], $_POST["number25"]);
            $a1=0;
            $a2=0;
            $a3=0;
            $a4=0;
            $a5=0;
            $a6=0;
            $a7=0;
            $a8=0;
            $a9=0;
            $a10=0;
            foreach($arrayList as $Element){
                if($Element >= 1 && $Element <= 5){
                    $a1=$a1+1;
                }else if($Element >= 6 && $Element <= 10){
                    $a2=$a2+1;
                }else if($Element >= 11 && $Element <= 15){
                    $a3=$a3+1;
                }else if($Element >= 16 && $Element <= 20){
                    $a4=$a4+1;
                }else if($Element >= 21 && $Element <= 25){
                    $a5=$a5+1;
                }else if($Element >= 26 && $Element <= 30){
                    $a6=$a6+1;
                }else if($Element >= 31 && $Element <= 35){
                    $a7=$a7+1;
                }else if($Element >= 36 && $Element <= 40){
                    $a8=$a8+1;
                }else if($Element >= 41 && $Element <= 45){
                    $a9=$a9+1;
                }else if($Element >= 46 && $Element <= 50){
                    $a10=$a10+1;
                }
            }
            $a14=$a1+$a2+$a3+$a4+$a5+$a6+$a7+$a8+$a9+$a10;
            $c1=$a1*((1+5)/2);
            $c2=$a2*((6+10)/2);
            $c3=$a3*((11+15)/2);
            $c4=$a4*((16+20)/2);
            $c5=$a5*((21+25)/2);
            $c6=$a6*((26+30)/2);
            $c7=$a7*((31+35)/2);
            $c8=$a8*((36+40)/2);
            $c9=$a9*((41+45)/2);
            $c10=$a10*((46+50)/2);
            $c11=$c1+$c2+$c3+$c4+$c5+$c6+$c7+$c8+$c9+$c10;
            $meanOfSet=$c11/$a14;
            $d1=$a1*pow(((1+5)/2),2);
            $d2=$a2*pow(((6+10)/2),2);
            $d3=$a3*pow(((11+15)/2),2);
            $d4=$a4*pow(((16+20)/2),2);
            $d5=$a5*pow(((21+25)/2),2);
            $d6=$a6*pow(((26+30)/2),2);
            $d7=$a7*pow(((31+35)/2),2);
            $d8=$a8*pow(((36+40)/2),2);
            $d9=$a9*pow(((41+45)/2),2);
            $d10=$a10*pow(((46+50)/2),2);
            $d11=$d1+$d2+$d3+$d4+$d5+$d6+$d7+$d8+$d9+$d10;
            $fxs=$d11/$a14;
            $fxw=$c11/$a14;
            $vari=($fxw)*($fxw);
            $variance=$fxs-$vari;
            $stdev=sqrt($variance);
            echo"<br><br><br>";
            echo "class limit_______________________________________________frequency<br><br>";
            echo  "01-05______________________________________________________$a1<br><br>";
            echo  "06-10______________________________________________________$a2<br><br>";
            echo  "11-15______________________________________________________$a3<br><br>";
            echo  "16-20______________________________________________________$a4<br><br>";
            echo  "21-25______________________________________________________$a5<br><br>";
            echo  "26-30______________________________________________________$a6<br><br>";
            echo  "31-35______________________________________________________$a7<br><br>";
            echo  "36-40______________________________________________________$a8<br><br>";
            echo  "41-45______________________________________________________$a9<br><br>";
            echo  "46-50______________________________________________________$a10<br><br>";
            echo  "<br><br><br>";
            $a13=max($a1,$a2,$a3,$a4,$a5,$a6,$a7,$a8,$a9,$a10);
            if($a13 == $a1) {
                echo "1)From the mode formular, mode cannot be calculated since there is no frequency that comes before the modal class (1-5)"."<br>";
            }else if($a13 == $a2) {
                $x1=5*($a2-$a1);
                $y1=(2*$a2)-$a1-$a3;
                $z1=5.5+(($x1)/($y1));
                echo"1)The mode is"." ".$z1."<br>";
            }else if($a13 == $a3) {
                $x2=5*($a3-$a2);
                $y2=(2*$a3)-$a2-$a4;
                $z2=10.5+(($x2)/($y2));
                echo "1)The mode is"." ".$z2."<br>";
            }else if($a13 == $a4) {
                $x3=5*($a4-$a3);
                $y3=(2*$a4)-$a3-$a5;
                $z3=15.5+(($x3)/($y3));
                echo "1)The mode is"." ".$z3."<br>";
            }else if($a13 == $a5) {
                $x4=5*($a5-$a4);
                $y4=(2*$a5)-$a4-$a6;
                $z4=20.5+(($x4)/($y4));
                echo "1)The mode is"." ".$z4."<br>";
            }else if($a13 == $a6) {
                $x5=5*($a6-$a5);
                $y5=(2*$a6)-$a5-$a7;
                $z5=25.5+(($x5)/($y5));
                echo "1)The mode is"." ".$z5."<br>";
            }else if($a13 == $a7) {
                $x6=5*($a7-$a6);
                $y6=(2*$a7)-$a6-$a8;
                $z6=30.5+(($x6)/($y6));
                echo "1)The mode is"." ".$z6."<br>";
            }else if($a13 == $a8) {
                $x7=5*($a8-$a7);
                $y7=(2*$a8)-$a7-$a9;
                $z7=35.5+($x7/$y7);
                echo "1)The mode is"." ".$z7."<br>";
            }else if($a13 == $a9) {
                $x8=5*($a9-$a8);
                $y8=(2*$a9)-$a8-$a10;
                $z8=40.5+(($x8)/($y8));
                echo "1)The mode is"+" "+$z8+"<br>";
            }else {
                echo"1)From the mode formular, mode cannot be calculated since there is no frequency that comes after the modal class (46-50)"."<br>";
            }
            echo "<br>";
            $t1=$a1+$a2;
            $t2=$t1+$a3;
            $t3=$t2+$a4;
            $t4=$t3+$a5;
            $t5=$t4+$a6;
            $t6=$t5+$a7;
            $t7=$t6+$a8;
            $t8=$t7+$a9;
            $t9=$t8+$a10;
            $t10=($t9)/2;
            if($t10 == $a1) {
                echo"2)From the median formular, median cannot be calculated since there is no cumulative frequency that comes before the median class (1-5)"."<br>";
            }else if($t10 > $a1 && $t10 <= $t1){
                $u2=5.5+((5/$a2)*($t10-$a1));
                echo "2)The median is"." ".$u2."<br>";
            }else if($t10 > $t1 && $t10 <= $t2) {
                $u3=10.5+((5/$a3)*($t10-$t1));
                echo "2)The median is"." ".$u3."<br>";
            }else if($t10 > $t2 && $t10 <= $t3) {
                $u4=15.5+((5/$a4)*($t10-$t2));
                echo "2)The median is"." ".$u4."<br>";
            }else if($t10 > $t3 && $t10 <= $t4) {
                $u5=20.5+((5/$a5)*($t10-$t3));
                echo "2)The median is"." ".$u5."<br>";
            }else if($t10 > $t4 && $t10 <= $t5) {
                $u6=25.5+((5/$a6)*($t10-$t4));
                echo "2)The median is"." ".$u6."<br>";
            }else if($t10 > $t5 && $t10 <= $t6) {
                $u7=30.5+((5/$a7)*($t10-$t5));
                echo "2)The median is"." ".u7."<br>";
            }else if($t10 > $t6 && $t10 <= $t7) {
                $u8=35.5+((5/$a8)*($t10-$t6));
                echo "2)The median is"." ".u8."<br>"; 
            }else if($t10 > $t7 && $t10 <= $t8) {
                $u9=40.5+((5/$a9)*($t10-$t7));
                echo "2)The median is"." ".u9."<br>";
            }else if($t10 > $t8 && $t10 <= $t9) {
                $u10=45.5+((5/$a10)*($t10-$t8));
                echo "2)The median is"." ".$u10."<br>";
            }else {
                echo "2)The data doesn't have a median"."<br>";
            }
            echo "<br>3)The mean is $meanOfSet<br><br>4)The variance is $variance<br><br>";
            echo "5)The standard deviation is $stdev"; 
        }             
        ?>
    </body>
</html>
