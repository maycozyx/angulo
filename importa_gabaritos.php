<html lang="pt-br">
<head>
	<title></title>
	<meta charset="utf-8">
</head>
<body>
<?php
//echo "The current date is ";
//echo date("l F d, Y");


$arq = file("../fr2801.csv");
foreach ($arq as $temp_valor) { // c = coluna
      list($c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13, $c14) = explode(",", $temp_valor);
      echo $c1 . " - " . $c2 . " - " . $c3 . " - " . $c4 . " - " . $c5 . " - " . $c6 . " - " . $c7 . " - " . $c8 . " - " . $c9 . " - " . $c10 .
 " - " . $c11 . " - " . $c12 . " - " . $c13 . " - " . $c14 . "<BR>";
}

?>
</body>
</html>