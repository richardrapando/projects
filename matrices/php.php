<html>
    <head>
    <meta charset="UTF-8">
        <meta name="description" content="richard rapando projects">
        <meta name="author" content="richard rapando">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Matrices</title>
    </head>
    <body>
        
        <h1 style="color:blue;">Computing the Transpose, Determinant and Inverse of a 3 by 3 matrix</h1>
        <hr>
        <h2>A 3 by 3 matrix normally has three rows and three columns (9 values in total)</h2>
        <h4 style="color:green;">Once all the data is keyed in and "Submit" button clicked, the results appear below the submit button<h4>
        <form action="" method="post" style="background-color:grey;">
            <b style="font-size:120%;">Matrix values</b><br><br>
            First value in row 1:<br>
            <input type="number" step="0.00001" name="number1"><br>
            Second value in row 1:<br>
            <input type="number" step="0.00001" name="number2"><br>
            Third value in row 1:<br>
            <input type="number" step="0.00001" name="number3"><br>
            First value in row 2:<br>
            <input type="number" step="0.00001" name="number4"><br>
            Second value in row 2:<br>
            <input type="number" step="0.00001" name="number5"><br>
            Third value in row 2:<br>
            <input type="number" step="0.00001" name="number6"><br>
            First value in row 3:<br>
            <input type="number" step="0.00001" name="number7"><br>
            Second value in row 3:<br>
            <input type="number" step="0.00001" name="number8"><br>
            Third value in row 3:<br>
            <input type="number" step="0.00001" name="number9"><br><br>
            <input type="submit"<br><br><br><br><br>
        <?php
        if(isset($_POST["number1"]) && isset($_POST["number2"]) &&isset($_POST["number3"]) && isset($_POST["number4"]) &&
        isset($_POST["number5"]) && isset($_POST["number6"]) &&isset($_POST["number7"]) && isset($_POST["number8"]) &&
        isset($_POST["number9"])){
            $number1=$_POST["number1"];
            $number2=$_POST["number2"];
            $number3=$_POST["number3"];
            $number4=$_POST["number4"];
            $number5=$_POST["number5"];
            $number6=$_POST["number6"];
            $number7=$_POST["number7"];
            $number8=$_POST["number8"];
            $number9=$_POST["number9"];
            $a2=($number1*$number5*$number9)+($number2*$number6*$number7)+($number3*$number4*$number8);
            $b2=($number1*$number6*$number8)+($number2*$number4*$number9)+($number3*$number5*$number7);
            $c2=$a2-$b2;
            $a3=($number5*$number9)-($number8*$number6);
            $b3=($number4*$number9)-($number7*$number6);
            $c3=($number4*$number8)-($number7*$number5);
            $d3=($number2*$number9)-($number8*$number3);
            $e3=($number1*$number9)-($number7*$number3);
            $f3=($number1*$number8)-($number7*$number2);
            $g3=($number2*$number6)-($number5*$number3);
            $h3=($number1*$number6)-($number4*$number3);
            $i3=($number1*$number5)-($number4*$number2);
            $a4=$a3*(1/$c2);
            $b4=-$d3*(1/$c2);
            $c4=$g3*(1/$c2);
            $d4=-$b3*(1/$c2);
            $e4=$e3*(1/$c2);
            $f4=-$h3*(1/$c2);
            $g4=$c3*(1/$c2);
            $h4=-$f3*(1/$c2);
            $i4=$i3*(1/$c2); 
            echo "The transpose of the matrix is<br><br>";
            echo "[$number1, $number4, $number7]<br>[$number2, $number5, $number8]<br>[$number3, $number6, $number9]<br><br><br>";
            echo "The determinant of the matrix is<br><br>$c2<br><br><br>";
            echo "The inverse of the matrix is<br><br>[$a4, $b4, $c4]<br>[$d4 , $e4, $f4]<br>[$g4, $h4, $i4]<br>";
        }          
        ?>
    </body>
</html>
