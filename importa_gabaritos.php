<html lang="pt-br">
<head>
	<title></title>
	<meta charset="utf-8">
</head>
<body>
<?php
include "conecta_mysql.inc";

function insere_dado($c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13) {
	
	mysql_query("INSERT INTO gabaritos ( c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13 ) VALUES ( '$c1', '$c2', '$c3', '$c4', '$c5', '$c6', '$c7', '$c8', '$c9', '$c10', '$c11', '$c12', '$c13' )");
}

$arq = file("../fr2801.csv");
foreach ($arq as $temp_valor) { // c = coluna
    list($c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13 ) = explode(",", $temp_valor);
    echo $c1 . " - " . $c2 . " - " . $c3 . " - " . $c4 . " - " . $c5 . " - " . $c6 . " - " . $c7 . " - " . $c8 . " - " . $c9 . " - " . $c10 .
 " - " . $c11 . " - " . $c12 . " - " . $c13 . "<BR>";
	
//	insere_dado($c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13);
}
mysql_close($conexao);
?>
</body>
</html>