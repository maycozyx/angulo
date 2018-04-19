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

//$spg = array("D6EF01", "D6EF02", "D7EF01", "D7EF02", "D8EF01", "D8EF02", "D9EF01", "D9EF02"); // spg = Série Prova do Gabarito
$spg["D6EF01"] = array('B', 'A', 'C', 'C', 'Z', 'B', 'Z', 'B', 'D', 'A', 'C', 'C', 'B', 'B', 'Z'); // Z significa validada para todos
$spg["D6EF02"] = array('B', 'C', 'B', 'A', 'C', 'D', 'C', 'B', 'Z', 'D', 'B', 'D', 'A', 'A', 'D');
$spg["D7EF01"] = array('A', 'B', 'A', 'D', 'C', 'D', 'Z', 'A', 'C', 'B', 'Z', 'C', 'D', 'B', 'Z');
$spg["D7EF02"] = array('C', 'B', 'D', 'A', 'A', 'B', 'D', 'Z', 'D', 'D', 'B', 'D', 'A', 'B', 'A');
$spg["D8EF01"] = array('D', 'C', 'A', 'B', 'A', 'C', 'Z', 'Z', 'B', 'C', 'C', 'A', 'D', 'A', 'B', 'D', 'C', 'C', 'Z', 'D');
$spg["D8EF02"] = array('B', 'D', 'B', 'B', 'A', 'B', 'Z', 'C', 'Z', 'C', 'D', 'C', 'B', 'A', 'Z', 'B', 'A', 'D', 'D', 'B');
$spg["D9EF01"] = array('C', 'A', 'E', 'B', 'C', 'B', 'D', 'D', 'C', 'A', 'B', 'D', 'E', 'Z', 'E', 'A', 'C', 'B', 'C', 'Z', 'Z', 'Z', 'E', 'D', 'C', 'C', 'D', 'C', 'A', 'E');
$spg["D9EF02"] = array('B', 'B', 'D', 'B', 'A', 'C', 'A', 'B', 'D', 'E', 'E', 'B', 'E', 'B', 'C', 'E', 'A', 'B', 'B', 'D', 'C', 'B', 'A', 'C', 'B', 'B', 'E', 'D', 'E', 'E');

function contaAcertos( $spa, $ga, $t, $spg) { // spa = Série Prova Aluno; ga = Gabarito do Aluno, t = Turma
	$acertos = 0; // armazena a quantidade de acertos do aluno na prova
	$i = 0; // para controle do array no foreach
	if ( $spa == 'D6EF01' ) {
		//print_r($spg[$spa]);
		$rga = str_split($ga); // rga = Respostas do Gabarito do Aluno
		//print_r($rga);
		foreach( $spg[$spa] as $q ) {
			if ( $q == $rga[$i] || $q == 'Z' ) {
				$acertos++;
			}
			echo $q . $rga[$i] . ' ';
			$i++;
		}
	}
	echo " <b>Acertos:</b>" . $acertos;
}

//$r = mysql_query("SELECT * FROM gabaritos");
$rg = mysql_query("SELECT c2, c3, c10, c13 FROM gabaritos ORDER BY c2 ASC, c10 ASC, c3 ASC"); // rg = resultado gabaritos

while ($rowg=mysql_fetch_array($rg))
        {
            //print_r($row);
			
			// busca nome
			$rc = mysql_query("SELECT c2 FROM cadastro WHERE c4='$rowg[c3]'"); // rc = resultado cadastro
			$rowc=mysql_fetch_array($rc);
						
			if ( $rowg['c2'] == 'D6EF01' ) { // após todas as turmas serem feitas as conferências, este IF vai ser retirado
				contaAcertos( $rowg['c2'], $rowg['c13'], $rowg['c10'], $spg );
			}
			echo " <b>Série:</b>$rowg[c2] <b>Nº</b>$rowg[c3] <b>Turma:</b>$rowg[c10] <b>Nome:</b>$rowc[0]";
			echo "<br>";
        }        


//print_r($r);
//var_dump($r);
print_r($sp);

mysql_close($conexao);
?>
</pre>
</body>
</html>