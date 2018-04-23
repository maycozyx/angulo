<?php
error_reporting(E_ALL ^ E_DEPRECATED);
ini_set('display_errors', 1 );
?><!DOCTYPE html>
<html lang="pt-br">
<head>
	<title></title>
	<meta charset="utf-8">
	<style>
		.break { page-break-before: always; }
		b {
			font-weight: bold;
			font-family: "Arial Black", Times, serif;
			font-size: 12px;
		}
	</style>
</head>
<body>
<pre>
<?php
include "conecta_mysql.inc";
include "gabarito_provas.inc";

// ------------------ FUNÇÕES

function cp( $tq, $ta ) { // Calcula quantos Porcento o aluno teve de acerto; tq = Total de Questões; ta = Total de Acertos
	return round( ( ($ta * 100) / $tq ), 2 );
}

function confere( $sp, $t, $a, $qi, $qf, $d, $spg ) { // a = Aluno; qi = Questão Inicial, qf = Questão Final; d = Disciplina 
	//print_r($spg['D6EF01']['B']);
	//print_r($a['respostas']);
	
	$acertos = 0; // armazena a quantidade de acertos do aluno na prova
	$i = $qi; // para controle do while
	$qq = 0; // qq = Quantidade de Questões, p/ calcular a % de acertos
	$rga = str_split($a['respostas']); // rga = Respostas do Gabarito do Aluno
	//print_r($rga);
	//print_r($spg[$sp][$t]);
	//echo "$sp $t $d ";
	while ( ( $i >= $qi ) && ( $i <= $qf ) ) {
		if ( ($rga[$i-1] == $spg[$sp][$t][$i-1]) || ($spg[$sp][$t][$i-1] == 'Z') ) {
			//echo "*";
			$acertos++;
		}
		
		echo "<b>".$spg[$sp][$t][$i-1].'</b>'.$rga[$i-1].' '; // -1 porque o array começa com zero
		//echo $i;
		$i++;
		$qq++;
	}
	echo "<b>Q:</b>$qq <b>A:</b>$acertos ".cp($qq, $acertos). '<b>%</b> ' .$a['nome'].'<br>';
}

function processa( $sp, $t, $qi, $qf, $d, $spg) { // Processa notas da turma; sp = Série Prova; t = turma; qi = Questão Inicial, qf = Questão Final; d = Disciplina 
		echo "<center><b>$sp $t $d</b></center><br>";
		$rq = mysql_query("SELECT respostas, serie_prova, numero, turma, nome FROM selecionados WHERE serie_prova='$sp' AND turma='$t' ORDER BY turma ASC, nome ASC"); // rq = Resultado Query 
		while ( $row = mysql_fetch_array( $rq ) )
        {
			confere( $sp, $t, $row, $qi, $qf, $d, $spg );		
		}
		echo "<br class='break'>";
}

// ------------------ PRINCIPAL 


$ap = 'D6EF01'; // Ano Prova 
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	//print_r($t);
	processa( $ap, $t, 1, 7, 'Matemática', $spg);
	processa( $ap, $t, 8, 11, 'História', $spg);
	processa( $ap, $t, 12, 15, 'Geografia', $spg);
}

$ap = 'D6EF02';
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $ap, $t, 1, 10, 'Português', $spg);
	processa( $ap, $t, 11, 15, 'Ciências', $spg);
}

$ap = 'D7EF01';
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $ap, $t, 1, 7, 'Matemática', $spg);
	processa( $ap, $t, 8, 11, 'História', $spg);
	processa( $ap, $t, 12, 15, 'Geografia', $spg);
}

$ap = 'D7EF02';
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $ap, $t, 1, 10, 'Português', $spg);
	processa( $ap, $t, 11, 15, 'Ciências', $spg);
}

$ap = 'D8EF01';
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $ap, $t, 1, 10, 'Matemática', $spg);
	processa( $ap, $t, 11, 15, 'História', $spg);
	processa( $ap, $t, 16, 20, 'Geografia', $spg);
}

$ap = 'D8EF02';
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $ap, $t, 1, 10, 'Português', $spg);
	processa( $ap, $t, 11, 15, 'Física', $spg);
	processa( $ap, $t, 16, 20, 'Biologia', $spg);
}

$ap = 'D9EF01';
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $ap, $t, 1, 14, 'Matemática', $spg);
	processa( $ap, $t, 15, 22, 'História', $spg);
	processa( $ap, $t, 23, 30, 'Geografia', $spg);
}

$ap = 'D9EF02';
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $ap, $t, 1, 14, 'Português', $spg);
	processa( $ap, $t, 15, 22, 'Física', $spg);
	processa( $ap, $t, 23, 30, 'Química', $spg);
}

mysql_close($conexao);
?>
</pre>
</body>
</html>