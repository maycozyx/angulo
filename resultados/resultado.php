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
		.totalAlunos { 
			text-align: right;
		}
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
		//if ( ($rga[$i-1] == $spg[$sp][$t][$i-1]) || ($spg[$sp][$t][$i-1] == 'Z') ) { // era para quando recebia ponto da questão anulada
		if ( $rga[$i-1] == $spg[$sp][$t][$i-1] ) { // 1-4 para descondiderar questões anuladas e não recebe ponto por elas
			//echo "*";
			$acertos++;
			$qq++; // 2-4 para descondiderar questões anuladas e não recebe ponto por elas
		} elseif ($spg[$sp][$t][$i-1] != 'Z') { // 3-4 para descondiderar questões anuladas e não recebe ponto por elas
			$qq++;
		}
		
		echo "<b>".$spg[$sp][$t][$i-1].'</b>'.$rga[$i-1].' '; // -1 porque o array começa com zero
		//echo $i;
		$i++;
		//$qq++; // 4-4 para descondiderar questões anuladas e não recebe ponto por elas
	}
	echo "<b>Q:</b>$qq <b>A:</b>$acertos ".cp($qq, $acertos). '<b>%</b> ' .$a['nome'].'<br>';
}

function processa( $conexao, $sp, $t, $qi, $qf, $d, $spg) { // Processa notas da turma; sp = Série Prova; t = turma; qi = Questão Inicial, qf = Questão Final; d = Disciplina 
		echo "<center><b>$sp $t $d</b></center><br>";
		$rq = mysqli_query($conexao, "SELECT respostas, serie_prova, numero, turma, nome FROM selecionados WHERE serie_prova='$sp' AND turma='$t' ORDER BY turma ASC, nome ASC"); // rq = Resultado Query 
		$qtda = 0; // qtda = Quantidade De Alunos
		while ( $row = mysqli_fetch_array( $rq ) )
        {
			confere( $sp, $t, $row, $qi, $qf, $d, $spg );
			$qtda++;
		}
		echo "<div class='totalAlunos'>TOTAL DE ALUNOS: $qtda</div>";
		echo "<br class='break'>";
}

// ------------------ PRINCIPAL 


//$ap = 'D6EF01'; // Ano Prova 
//print_r($ap);
$ap = $lp['A6P1']; // Ano Prova 
//print_r($ap);
//print_r($spg[$lp['A6P1']]);
//foreach( $spg[$lp['A6P1']] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	//print_r($t);
	processa( $conexao, $ap, $t, 1, 7, 'Matemática', $spg);
	processa( $conexao, $ap, $t, 8, 11, 'História', $spg);
	processa( $conexao, $ap, $t, 12, 15, 'Geografia', $spg);
}

$ap = $lp['A6P2'];
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $conexao, $ap, $t, 1, 10, 'Português', $spg);
	processa( $conexao, $ap, $t, 11, 15, 'Ciências', $spg);
}

$ap = $lp['A7P1'];
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $conexao, $ap, $t, 1, 7, 'Matemática', $spg);
	processa( $conexao, $ap, $t, 8, 11, 'História', $spg);
	processa( $conexao, $ap, $t, 12, 15, 'Geografia', $spg);
}

$ap = $lp['A7P2'];
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $conexao, $ap, $t, 1, 10, 'Português', $spg);
	processa( $conexao, $ap, $t, 11, 15, 'Ciências', $spg);
}

$ap = $lp['A8P1'];
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $conexao, $ap, $t, 1, 10, 'Matemática', $spg);
	processa( $conexao, $ap, $t, 11, 15, 'História', $spg);
	processa( $conexao, $ap, $t, 16, 20, 'Geografia', $spg);
}

$ap = $lp['A8P2'];
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $conexao, $ap, $t, 1, 10, 'Português', $spg);
	processa( $conexao, $ap, $t, 11, 15, 'Biologia', $spg);
	processa( $conexao, $ap, $t, 16, 20, 'Física', $spg);
}

$ap = $lp['A9P1'];
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $conexao, $ap, $t, 1, 14, 'Matemática', $spg);
	processa( $conexao, $ap, $t, 15, 22, 'História', $spg);
	processa( $conexao, $ap, $t, 23, 30, 'Geografia', $spg);
}

$ap = $lp['A9P2'];
foreach( $spg[$ap] as $t => $value ) { // faz para todas as turmas do 6 ano prova 1
	processa( $conexao, $ap, $t, 1, 14, 'Português', $spg);
	processa( $conexao, $ap, $t, 15, 22, 'Física', $spg);
	processa( $conexao, $ap, $t, 23, 30, 'Química', $spg);
}

mysqli_close($conexao);
?>
</pre>
</body>
</html>