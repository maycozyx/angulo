<?php
error_reporting(E_ALL ^ E_DEPRECATED);
ini_set('display_errors', 1 );
?><!DOCTYPE html><html lang="pt-br">
<head>
	<title></title>
	<meta charset="utf-8">
</head>
<body>
<?php
include "conecta_mysql.inc";

function insere_dado($conexao, $c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13, $c14, $c15, $c16, $c17, $c18, $c19, $c20, $c21, $c22, $c23) {
	
	mysqli_query($conexao, "INSERT INTO cadastro ( c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23 ) VALUES ( '$c1', '$c2', '$c3', '$c4', '$c5', '$c6', '$c7', '$c8', '$c9', '$c10', '$c11', '$c12', '$c13', '$c14', '$c15', '$c16', '$c17', '$c18', '$c19', '$c20', '$c21', '$c22', '$c23' )");
}

$arq = file("../../2801_A995916BF.csv");
foreach ($arq as $temp_valor) { // c = coluna
      list($c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13, $c14, $c15, $c16, $c17, $c18, $c19, $c20, $c21, $c22, $c23) = explode(",", $temp_valor);
      echo $c1 . " - " . $c2 . " - " . $c3 . " - " . $c4 . " - " . $c5 . " - " . $c6 . " - " . $c7 . " - " . $c8 . " - " . $c9 . " - " . $c10 .
 " - " . $c11 . " - " . $c12 . " - " . $c13 . " - " . $c14 . " - " . $c15 . " - " . $c16 . " - " . $c17 . " - " . $c18 . " - " . $c19 . " - " . $c20 .
 " - " . $c21 . " - " . $c22 . " - " . $c23;
	if ( $c1 == "*") { // se for um cadastro ativo, então insere no banco de dados
		insere_dado($conexao, $c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13, $c14, $c15, $c16, $c17, $c18, $c19, $c20, $c21, $c22, $c23);
		echo " INCLUÍDO";
	}
	echo "<BR>";
}

mysqli_close($conexao);
?>
</body>
</html>