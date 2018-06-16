<?php
error_reporting(E_ALL ^ E_DEPRECATED);
ini_set('display_errors', 1 );
?><!DOCTYPE html>
<html lang="pt-br">
<head>
	<title></title>
	<meta charset="utf-8">
</head>
<body>
<pre>
<?php
include "conecta_mysql.inc";
include "gabarito_provas.inc";

function calculaPercentual( $tq, $ta ) { // calcula quantos porcento o aluno teve de acerto; tq = Total de Questões; ta = Total de Acertos
	return ( ($ta * 100) / $tq );
}

function gabaritoAlunno( $spa, $ga, $spg ) { // spa = Série Prova Aluno; ga = Gabarito Aluno; spg = Série Prova do Gabarito
	$i = 0; // para controle do array no foreach
	$rga = str_split($ga); // rga = Respostas do Gabarito do Aluno
	$rgal = ""; // rga = Respostas do Gabarito do Aluno Limpa/sem caracteres desnecessários
	foreach( $spg[$spa] as $q ) { 
		$rgal .= $rga[$i];
		$i++;
	}
	return $rgal;
}
/*
function lsp( $sp ) { // sp = Série Prova; lsp = Limpa dados Série Prova para poder inserir apenas os 6 caracteres no banco de dados
	$spl = ""; // spl = Série Prova Limpa
	$sps = str_split( $sp ); // sps = Série Prova Suja
	for ( $i = 0; $i < 6; $i++ ) {
		$spl .= $sps[$i];
	}
	return $spl;
}
*/
$rg = mysql_query("SELECT c2, c3, c10, c13 FROM gabaritos ORDER BY c2 ASC, c10 ASC, c3 ASC"); // rg = resultado gabaritos
while ($rowg=mysql_fetch_array($rg))
        {
			// busca nome
			$rc = mysql_query("SELECT c2 FROM cadastro WHERE c4='$rowg[c3]'"); // rc = resultado cadastro
			$rowc=mysql_fetch_array($rc); // rowc = linha do cadastro contendo o nome 
			$rga = gabaritoAlunno( $rowg['c2'], $rowg['c13'], $spg ); // rga = Respostas do Gabarito do Aluno
			echo "<b>R:</b>$rga <b>SP:</b>$rowg[c2] <b>Nº</b>$rowg[c3] <b>T:</b>$rowg[c10] <b>N:</b>$rowc[0]";
			/* $spl = lsp(); // spl = Série Prova Limpa  */
			mysql_query( "INSERT INTO selecionados ( respostas, serie_prova, numero, turma, nome ) VALUES ( '$rga', '$rowg[c2]', '$rowg[c3]', '$rowg[c10]', '$rowc[0]' )" );
			printf(" Records inseridos: %d\n", mysql_affected_rows()); 
			echo mysql_error();
			echo "<br>";
        }        

mysql_close($conexao);
?>
</pre>
</body>
</html>