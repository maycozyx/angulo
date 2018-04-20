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

// ------------------ FUNÇÕES

function confere( $a, $qi, $qf, $d ) { // a = Aluno; qi = Questão Inicial, qf = Questão Final; d = Disciplina 
	// fazer uma função que retorna o gabarito específico
}

function processa( $sp, $t, $qi, $qf, $d ) { // Processa notas da turma; sp = Série Prova; t = turma; qi = Questão Inicial, qf = Questão Final; d = Disciplina 
		$rq = mysql_query("SELECT respostas, serie_prova, numero, turma, nome FROM selecionados WHERE serie_prova='$sp' AND turma='$t' ORDER BY turma ASC, nome ASC"); // rq = Resultado Query 
		while ( $row = mysql_fetch_array( $rq ) )
        {
			confere( $row, $qi, $qf, $d );
		}
}

// ------------------ PRINCIPAL 

processa( 'D6EF01', 'A', 1, 7, 'Matemática' );


mysql_close($conexao);
?>
</pre>
</body>
</html>