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

function insere_dado($conexao, $c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13) {
	
	mysqli_query($conexao, "INSERT INTO gabaritos ( c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13 ) VALUES ( '$c1', '$c2', '$c3', '$c4', '$c5', '$c6', '$c7', '$c8', '$c9', '$c10', '$c11', '$c12', '$c13' )");
}

function abre_arquivo($conexao, $nome_arquivo) {
	
	$arq = file($nome_arquivo);
	foreach ($arq as $temp_valor) { // c = coluna
		list($c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13 ) = explode(",", $temp_valor);
		echo $c1 . " - " . $c2 . " - " . $c3 . " - " . $c4 . " - " . $c5 . " - " . $c6 . " - " . $c7 . " - " . $c8 . " - " . $c9 . " - " . $c10 .
 " - " . $c11 . " - " . $c12 . " - " . $c13 . "<BR>";
	
		insere_dado($conexao, $c1, $c2, $c3, $c4, $c5, $c6, $c7, $c8, $c9, $c10, $c11, $c12, $c13);
	}
}
//-------- PROGRAMA PRINCIPAL ------

abre_arquivo($conexao, "../../2801-EF6P5.csv");
abre_arquivo($conexao, "../../2801-EF6P6.csv");
abre_arquivo($conexao, "../../2801-EF7P5.csv");
abre_arquivo($conexao, "../../2801-EF7P6.csv");
abre_arquivo($conexao, "../../2801-EF8P5.csv");
abre_arquivo($conexao, "../../2801-EF8P6.csv");
abre_arquivo($conexao, "../../2801-EF9P5.csv");
abre_arquivo($conexao, "../../2801-EF9P6.csv");

mysqli_close($conexao);
?>
</body>
</html>