<html>
<body>
<?php
echo "Great! your age is: ";
function ageCalculator($dob){
  if(!empty($dob)){

    $date1 = strtotime($dob);
    $date2 = strtotime('today');

    $formatdate1 = date('Y',$date1);
    $formatdate2 = date('Y',$date2);
    //echo $formatdate1;
    //echo $formatdate2;

   $age =  $formatdate2 - $formatdate1;
    return $age;

  }else{ 
    return 0;
  }
}
//echo $_GET["dob"];
$dob = $_GET["dob"];
echo ageCalculator($dob) ;
echo " years!";

?>
<br><br>
<input type="submit" <a href="#" onclick="history.back();">" Go Back"</a>
</body>
</html>
