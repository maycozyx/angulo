<html lang="pt-br">
<head>
	<title></title>
	<meta charset="utf-8">
</head>
<body>
<?php

$arq = file("../2801_CADASTRO.csv");
foreach ($arq as $temp_valor) { // c = coluna
      list($c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13, $c14, $c15, $c16, $c17, $c18, $c19, $c20, $c21, $c22, $c23) = explode(",", $temp_valor);
      echo $c1 . " - " . $c2 . " - " . $c3 . " - " . $c4 . " - " . $c5 . " - " . $c6 . " - " . $c7 . " - " . $c8 . " - " . $c9 . " - " . $c10 .
 " - " . $c11 . " - " . $c12 . " - " . $c13 . " - " . $c14 . " - " . $c15 . " - " . $c16 . " - " . $c17 . " - " . $c18 . " - " . $c19 . " - " . $c20 .
 " - " . $c21 . " - " . $c22 . " - " . $c23 . "<BR>";
}

?>
</body>
</html>