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

function contaAcertos( $spa, $ga, $t, $spg ) { // spa = Série Prova Aluno; 
	$acertos = 0; // armazena a quantidade de acertos do aluno na prova
	$i = 0; // para controle do array no foreach
	$rga = str_split($ga); // rga = Respostas do Gabarito do Aluno
	foreach( $spg[$spa] as $q ) { // se acertou a questão
		if ( $q == $rga[$i] ) {
			$acertos++;
		} elseif ( $q == 'Z' ) { // se questão é validada para todas as turmas
			$acertos++;
		}
		echo $q . $rga[$i] . ' ';
		$i++; // também é utilizado para saber-se quantas questões tem a prova
	}
	echo " <b>Ac:</b>" . $acertos . "/$i <b>%</b>" . round(calculaPercentual( $i, $acertos ), 1);
}

$rg = mysql_query("SELECT c2, c3, c10, c13 FROM gabaritos ORDER BY c2 ASC, c10 ASC, c3 ASC"); // rg = resultado gabaritos

while ($rowg=mysql_fetch_array($rg))
        {
			// busca nome
			$rc = mysql_query("SELECT c2 FROM cadastro WHERE c4='$rowg[c3]'"); // rc = resultado cadastro
			$rowc=mysql_fetch_array($rc);
						
			if ( ( $rowg['c2'] == 'D6EF01' ) || ( $rowg['c2'] == 'D6EF02' ) || ( $rowg['c2'] == 'D7EF01' ) || ( $rowg['c2'] == 'D7EF02' ) || ( $rowg['c2'] == 'D8EF01' ) || ( $rowg['c2'] == 'D9EF01' ) || ( $rowg['c2'] == 'D9EF02' ) ) { // após todas as turmas serem feitas as conferências, este IF vai ser retirado
				contaAcertos( $rowg['c2'], $rowg['c13'], $rowg['c10'], $spg );
			}
			echo " <b>S:</b>$rowg[c2] <b>Nº</b>$rowg[c3] <b>T:</b>$rowg[c10] <b>N:</b>$rowc[0]";
			echo "<br>";
        }        

mysql_close($conexao);
?>
</pre>
</body>
</html>