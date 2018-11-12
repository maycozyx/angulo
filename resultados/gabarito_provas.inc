<?php

// mysql> select serie_prova from selecionados group by serie_prova;
// mysql> select turma from selecionados where serie_prova='P3-EF6' group by turma;

/*
// modelo em branco para ser prenchido com novas nomeclaturas de provas
// A = Ano/série; P = prova/primeira prova ou segunda do simulado;
$listaProvas = [
    "A6P1" => "",
	"A6P2" => "",
	"A7P1" => "",
	"A7P2" => "",
	"A8P1" => "",
	"A8P2" => "",
	"A9P1" => "",
	"A9P2" => "",
];
*/

/*
// Esta nomeclatura das provas foi utilizada na P1 e P2 de 2018
// A = Ano/série; P = prova/primeira prova ou segunda do simulado;
$listaProvas = [
    "A6P1" => "D6EF01",
	"A6P2" => "D6EF02",
	"A7P1" => "D7EF01",
	"A7P2" => "D7EF02",
	"A8P1" => "D8EF01",
	"A8P2" => "D8EF02",
	"A9P1" => "D9EF01",
	"A9P2" => "D9EF02",
];
*/

/*
// Esta nomeclatura das provas foi utilizada na P3 e P4 de 2018
// lp = Lista de Provas; A = Ano/série; P = prova/primeira prova ou segunda do simulado;
$lp = [
    "A6P1" => "P3-EF6",
	"A6P2" => "P4-EF6",
	"A7P1" => "P3-EF7",
	"A7P2" => "P4-EF7",
	"A8P1" => "P3-EF8",
	"A8P2" => "P4-EF8",
	"A9P1" => "P3-EF9",
	"A9P2" => "P4-EF9",
];
*/

/*
// Esta nomeclatura das provas foi utilizada na P3 e P4 de 2018
// lp = Lista de Provas; A = Ano/série; P = prova/primeira prova ou segunda do simulado;
$lp = [
    "A6P1" => "P5-EF6",
	"A6P2" => "P6-EF6",
	"A7P1" => "P5-EF7",
	"A7P2" => "P6-EF7",
	"A8P1" => "P5-EF8",
	"A8P2" => "P6-EF8",
	"A9P1" => "P5-EF9",
	"A9P2" => "P6-EF9",
];
*/

// Esta nomeclatura das provas foi utilizada na P7 e P8 de 2018
// lp = Lista de Provas; A = Ano/série; P = prova/primeira prova ou segunda do simulado;
$lp = [
    "A6P1" => "P7-EF6",
	"A6P2" => "P8-EF6",
	"A7P1" => "P7-EF7",
	"A7P2" => "P8-EF7",
	"A8P1" => "P7-EF8",
	"A8P2" => "P8-EF8",
	"A9P1" => "P7-EF9",
	"A9P2" => "P8-EF9",
];

// spg = Série Prova do Gabarito; Z significa validada para todos
$spg = array( ); // inicializa o array

/*
// modelo em branco para ser preenchido com novos gabaritos
$spg[$lp['A6P1']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', ''); 
$spg[$lp['A6P2']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A7P1']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A7P2']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A8P1']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A8P2']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A9P1']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A9P2']] = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
*/

/*
// esta sequencia abaixo poderia ser utilizada caso seja o mesmo gabarito para todas as turmas
// este foi o gabarito geral da P1 e P2 de 2018
$spg["D6EF01"] = array('B', 'A', 'C', 'C', 'Z', 'B', 'Z', 'B', 'D', 'A', 'C', 'C', 'B', 'B', 'Z'); 
$spg["D6EF02"] = array('B', 'C', 'B', 'A', 'C', 'D', 'C', 'B', 'Z', 'D', 'B', 'D', 'A', 'A', 'D');
$spg["D7EF01"] = array('A', 'B', 'A', 'D', 'C', 'D', 'Z', 'A', 'C', 'B', 'Z', 'C', 'D', 'B', 'Z');
$spg["D7EF02"] = array('C', 'B', 'D', 'A', 'A', 'B', 'D', 'Z', 'D', 'D', 'B', 'D', 'A', 'B', 'A');
$spg["D8EF01"] = array('D', 'C', 'A', 'B', 'A', 'C', 'Z', 'Z', 'B', 'C', 'C', 'A', 'D', 'A', 'B', 'D', 'C', 'C', 'Z', 'D');
$spg["D8EF02"] = array('B', 'D', 'B', 'B', 'A', 'B', 'Z', 'C', 'Z', 'C', 'D', 'C', 'B', 'A', 'Z', 'B', 'A', 'D', 'D', 'B');
$spg["D9EF01"] = array('C', 'A', 'E', 'B', 'C', 'B', 'D', 'D', 'C', 'A', 'B', 'D', 'E', 'Z', 'E', 'A', 'C', 'B', 'C', 'Z', 'Z', 'Z', 'E', 'D', 'C', 'C', 'D', 'C', 'A', 'E');
$spg["D9EF02"] = array('B', 'B', 'D', 'B', 'A', 'C', 'A', 'B', 'D', 'E', 'E', 'B', 'E', 'B', 'C', 'E', 'A', 'B', 'B', 'D', 'C', 'B', 'A', 'C', 'B', 'B', 'E', 'D', 'E', 'E');
*/

/*
// Este foi o gabarito utilizado para conferência interna da P1 e P2 de 2018
$g6sp1 = array('B', 'A', 'C', 'C', 'Z', 'B', 'Z', 'B', 'D', 'A', 'C', 'C', 'B', 'B', 'Z');
$spg['D6EF01']['A'] = $g6sp1;
//$spg[$array[FOO]]['A'] = $g6sp1;
$spg['D6EF01']['B'] = $g6sp1;
$spg['D6EF01']['C'] = $g6sp1;
$spg['D6EF01']['D'] = $g6sp1;
$spg['D6EF01']['E'] = $g6sp1;
$spg['D6EF01']['F'] = $g6sp1;
$spg['D6EF01']['G'] = $g6sp1;
$spg['D6EF01']['H'] = $g6sp1;

$g6sp2 = array('B', 'C', 'B', 'A', 'C', 'D', 'C', 'B', 'Z', 'D', 'B', 'D', 'A', 'C', 'D'); 
$spg['D6EF02']['A'] = $g6sp2;
$spg['D6EF02']['B'] = $g6sp2;
$spg['D6EF02']['C'] = $g6sp2;
$spg['D6EF02']['D'] = $g6sp2;
$spg['D6EF02']['E'] = $g6sp2;
$spg['D6EF02']['F'] = $g6sp2;
$spg['D6EF02']['G'] = $g6sp2;
$spg['D6EF02']['H'] = $g6sp2;

$g7sp1 = array('A', 'B', 'A', 'D', 'C', 'D', 'Z', 'A', 'C', 'B', 'Z', 'C', 'D', 'B', 'Z');
$spg['D7EF01']['A'] = $g7sp1;
$spg['D7EF01']['B'] = $g7sp1;
$spg['D7EF01']['C'] = $g7sp1;
$spg['D7EF01']['D'] = $g7sp1;
$spg['D7EF01']['E'] = $g7sp1;
$spg['D7EF01']['F'] = $g7sp1;

$g7sp2 = array('C', 'B', 'D', 'A', 'A', 'B', 'D', 'Z', 'D', 'D', 'B', 'D', 'A', 'B', 'A');
$spg['D7EF02']['A'] = $g7sp2;
$spg['D7EF02']['B'] = $g7sp2;
$spg['D7EF02']['C'] = $g7sp2;
$spg['D7EF02']['D'] = $g7sp2;
$spg['D7EF02']['E'] = $g7sp2;
$spg['D7EF02']['F'] = $g7sp2;

$g8sp1 = array('D', 'C', 'A', 'B', 'A', 'C', 'Z', 'Z', 'B', 'C', 'C', 'A', 'D', 'A', 'B', 'D', 'C', 'C', 'Z', 'D');
$spg['D8EF01']['A'] = $g8sp1;
$spg['D8EF01']['B'] = $g8sp1;
$spg['D8EF01']['C'] = $g8sp1;
$spg['D8EF01']['D'] = $g8sp1;
$spg['D8EF01']['E'] = $g8sp1;
$spg['D8EF01']['F'] = $g8sp1;
$spg['D8EF01']['G'] = $g8sp1;


$spg['D8EF02']['A'] = array('B', 'D', 'B', 'B', 'A',
 'B', 'Z', 'C', 'B', 'C',
 'D', 'C', 'B', 'A', 'Z',
 'B', 'A', 'D', 'D', 'B');
$spg['D8EF02']['B'] = array('B', 'D', 'B', 'B', 'A',
 'B', 'Z', 'C', 'B', 'C',
 'D', 'C', 'B', 'A', 'Z',
 'B', 'A', 'D', 'D', 'B');
$spg['D8EF02']['C'] = array('B', 'D', 'B', 'B', 'A',
 'B', 'Z', 'C', 'B', 'C',
 'D', 'C', 'B', 'A', 'Z',
 'B', 'A', 'D', 'D', 'B');
$spg['D8EF02']['D'] = array('B', 'D', 'B', 'B', 'A',
 'B', 'Z', 'C', 'Z', 'C',
 'D', 'C', 'B', 'A', 'Z',
 'B', 'A', 'D', 'D', 'B');
$spg['D8EF02']['E'] = array('B', 'D', 'B', 'B', 'A',
 'B', 'Z', 'C', 'Z', 'C',
 'D', 'C', 'B', 'A', 'C',
 'B', 'A', 'D', 'D', 'B');
$spg['D8EF02']['F'] = array('B', 'D', 'B', 'B', 'A',
 'B', 'Z', 'C', 'Z', 'C',
 'D', 'C', 'B', 'A', 'C',
 'B', 'A', 'D', 'D', 'B');
$spg['D8EF02']['G'] = array('B', 'D', 'B', 'B', 'A',
 'B', 'Z', 'C', 'B', 'C',
 'D', 'C', 'B', 'A', 'C',
 'B', 'A', 'D', 'D', 'B');

$g9sp1 = array('C', 'A', 'E', 'B', 'C', 'B', 'D', 'D', 'C', 'A', 'B', 'D', 'E', 'Z', 'E', 'A', 'C', 'B', 'C', 'Z', 'Z', 'Z', 'E', 'D', 'C', 'C', 'D', 'C', 'A', 'E');
$spg['D9EF01']['A'] = $g9sp1;
$spg['D9EF01']['B'] = $g9sp1;
$spg['D9EF01']['C'] = $g9sp1;
$spg['D9EF01']['D'] = $g9sp1;
$spg['D9EF01']['E'] = $g9sp1;
$spg['D9EF01']['F'] = $g9sp1;

$g9sp2 = array('B', 'B', 'D', 'B', 'A', 'C', 'A', 'B', 'D', 'E', 'E', 'B', 'E', 'B', 'C', 'E', 'A', 'B', 'B', 'D', 'C', 'B', 'A', 'C', 'B', 'B', 'E', 'D', 'E', 'E');
$spg['D9EF02']['A'] = $g9sp2;
$spg['D9EF02']['B'] = $g9sp2;
$spg['D9EF02']['C'] = $g9sp2;
$spg['D9EF02']['D'] = $g9sp2;
$spg['D9EF02']['E'] = $g9sp2;
$spg['D9EF02']['F'] = $g9sp2;
*/

// gabarito utilizado na P3 e P4 de 2018
/*
$g6sp1 = array('D', 'B', 'D', 'A', 'C', 'B', 'A', 'D', 'D', 'D', 'B', 'A', 'B', 'C', 'B'); 
$spg[$lp['A6P1']]['A'] = $g6sp1;
$spg[$lp['A6P1']]['B'] = $g6sp1;
$spg[$lp['A6P1']]['C'] = $g6sp1;
$spg[$lp['A6P1']]['D'] = $g6sp1;
$spg[$lp['A6P1']]['E'] = $g6sp1;
$spg[$lp['A6P1']]['F'] = $g6sp1;
$spg[$lp['A6P1']]['G'] = $g6sp1;
$spg[$lp['A6P1']]['H'] = $g6sp1;

$g6sp2 = array('B', 'D', 'C', 'D', 'B', 'D', 'A', 'A', 'A', 'D', 'A', 'D', 'C', 'C', 'B');
$spg[$lp['A6P2']]['A'] = $g6sp2;
$spg[$lp['A6P2']]['B'] = $g6sp2;
$spg[$lp['A6P2']]['C'] = $g6sp2;
$spg[$lp['A6P2']]['D'] = $g6sp2;
$spg[$lp['A6P2']]['E'] = $g6sp2;
$spg[$lp['A6P2']]['F'] = $g6sp2;
$spg[$lp['A6P2']]['G'] = $g6sp2;
$spg[$lp['A6P2']]['H'] = $g6sp2;

$g7sp1 = array('C', 'B', 'C', 'D', 'A', 'D', 'B', 'A', 'D', 'B', 'D', 'D', 'B', 'D', 'B');
$spg[$lp['A7P1']]['A'] = $g7sp1;
$spg[$lp['A7P1']]['B'] = $g7sp1;
$spg[$lp['A7P1']]['C'] = $g7sp1;
$spg[$lp['A7P1']]['D'] = $g7sp1;
$spg[$lp['A7P1']]['E'] = $g7sp1;
$spg[$lp['A7P1']]['F'] = $g7sp1;

$g7sp2 = array('B', 'C', 'A', 'A', 'D', 'B', 'A', 'C', 'D', 'A', 'A', 'D', 'A', 'D', 'B');
$spg[$lp['A7P2']]['A'] = $g7sp2;
$spg[$lp['A7P2']]['B'] = $g7sp2;
$spg[$lp['A7P2']]['C'] = $g7sp2;
$spg[$lp['A7P2']]['D'] = $g7sp2;
$spg[$lp['A7P2']]['E'] = $g7sp2;
$spg[$lp['A7P2']]['F'] = $g7sp2;

$g8sp1 = array('C', 'A', 'B', 'B', 'D', 'D', 'C', 'A', 'C', 'D', 'A', 'D', 'A', 'D', 'D', 'C', 'A', 'C', 'C', 'B');
$spg[$lp['A8P1']]['A'] = $g8sp1;
$spg[$lp['A8P1']]['B'] = $g8sp1;
$spg[$lp['A8P1']]['C'] = $g8sp1;
$spg[$lp['A8P1']]['D'] = $g8sp1;
$spg[$lp['A8P1']]['E'] = $g8sp1;
$spg[$lp['A8P1']]['F'] = $g8sp1;
$spg[$lp['A8P1']]['G'] = $g8sp1;

$g8sp2 = array('D', 'C', 'A', 'D', 'D', 'C', 'D', 'B', 'D', 'C', 'A', 'B', 'B', 'B', 'D', 'A', 'A', 'B', 'A', 'D');
$spg[$lp['A8P2']]['A'] = $g8sp2;
$spg[$lp['A8P2']]['B'] = $g8sp2;
$spg[$lp['A8P2']]['C'] = $g8sp2;
$spg[$lp['A8P2']]['D'] = $g8sp2;
$spg[$lp['A8P2']]['E'] = $g8sp2;
$spg[$lp['A8P2']]['F'] = $g8sp2;
$spg[$lp['A8P2']]['G'] = $g8sp2;

$g9sp1 = array('B', 'E', 'C', 'A', 'C', 'B', 'D', 'A', 'C', 'E', 'D', 'A', 'B', 'D', 'A', 'E', 'A', 'C', 'E', 'A', 'B', 'D', 'C', 'D', 'E', 'D', 'D', 'C', 'C', 'B');
$spg[$lp['A9P1']]['A'] = $g9sp1;
$spg[$lp['A9P1']]['B'] = $g9sp1;
$spg[$lp['A9P1']]['C'] = $g9sp1;
$spg[$lp['A9P1']]['D'] = $g9sp1;
$spg[$lp['A9P1']]['E'] = $g9sp1;
$spg[$lp['A9P1']]['F'] = $g9sp1;

$g9sp2 = array('B', 'B', 'D', 'B', 'D', 'D', 'B', 'C', 'C', 'A', 'D', 'B', 'A', 'A', 'D', 'A', 'E', 'B', 'C', 'E', 'C', 'D', 'B', 'B', 'E', 'C', 'E', 'E', 'A', 'C');
$spg[$lp['A9P2']]['A'] = $g9sp2;
$spg[$lp['A9P2']]['B'] = $g9sp2;
$spg[$lp['A9P2']]['C'] = $g9sp2;
$spg[$lp['A9P2']]['D'] = $g9sp2;
$spg[$lp['A9P2']]['E'] = $g9sp2;
$spg[$lp['A9P2']]['F'] = $g9sp2;
*/


// gabarito utilizado na P5 e P6 de 2018
/*
$g6sp1 = array('B', 'D', 'B', 'C', 'A', 'A', 'C', 'A', 'C', 'C', 'D', 'C', 'B', 'C', 'A'); 
$spg[$lp['A6P1']]['A'] = $g6sp1;
$spg[$lp['A6P1']]['B'] = $g6sp1;
$spg[$lp['A6P1']]['C'] = $g6sp1;
$spg[$lp['A6P1']]['D'] = $g6sp1;
$spg[$lp['A6P1']]['E'] = $g6sp1;
$spg[$lp['A6P1']]['F'] = $g6sp1;
$spg[$lp['A6P1']]['G'] = $g6sp1;
$spg[$lp['A6P1']]['H'] = $g6sp1;

$g6sp2 = array('C', 'D', 'C', 'D', 'C', 'A', 'D', 'A', 'B', 'A', 'D', 'B', 'D', 'B', 'C');
$spg[$lp['A6P2']]['A'] = $g6sp2;
$spg[$lp['A6P2']]['B'] = $g6sp2;
$spg[$lp['A6P2']]['C'] = $g6sp2;
$spg[$lp['A6P2']]['D'] = $g6sp2;
$spg[$lp['A6P2']]['E'] = $g6sp2;
$spg[$lp['A6P2']]['F'] = $g6sp2;
$spg[$lp['A6P2']]['G'] = $g6sp2;
$spg[$lp['A6P2']]['H'] = $g6sp2;

$g7sp1 = array('B', 'C', 'D', 'A', 'B', 'D', 'B', 'A', 'A', 'A', 'A', 'B', 'C', 'C', 'C');
$spg[$lp['A7P1']]['A'] = $g7sp1;
$spg[$lp['A7P1']]['B'] = $g7sp1;
$spg[$lp['A7P1']]['C'] = $g7sp1;
$spg[$lp['A7P1']]['D'] = $g7sp1;
$spg[$lp['A7P1']]['E'] = $g7sp1;
$spg[$lp['A7P1']]['F'] = $g7sp1;

$g7sp2 = array('A', 'D', 'A', 'B', 'B', 'A', 'A', 'A', 'B', 'C', 'A', 'D', 'A', 'A', 'B');
$spg[$lp['A7P2']]['A'] = $g7sp2;
$spg[$lp['A7P2']]['B'] = $g7sp2;
$spg[$lp['A7P2']]['C'] = $g7sp2;
$spg[$lp['A7P2']]['D'] = $g7sp2;
$spg[$lp['A7P2']]['E'] = $g7sp2;
$spg[$lp['A7P2']]['F'] = $g7sp2;

$g8sp1 = array('B', 'D', 'C', 'C', 'A', 'C', 'B', 'A', 'B', 'C', 'A', 'B', 'B', 'B', 'D', 'C', 'D', 'C', 'C', 'D');
$spg[$lp['A8P1']]['A'] = array('B', 'D', 'C', 'C', 'A', 'C', 'B', 'A', 'B', 'Z', 'A', 'B', 'B', 'B', 'D', 'C', 'D', 'C', 'C', 'D');
$spg[$lp['A8P1']]['B'] = array('B', 'D', 'C', 'C', 'A', 'C', 'B', 'Z', 'Z', 'Z', 'A', 'B', 'B', 'B', 'D', 'C', 'D', 'C', 'C', 'D');
$spg[$lp['A8P1']]['C'] = array('B', 'D', 'C', 'C', 'A', 'C', 'B', 'A', 'B', 'Z', 'A', 'B', 'B', 'B', 'D', 'C', 'D', 'C', 'C', 'D');
$spg[$lp['A8P1']]['D'] = array('B', 'D', 'C', 'C', 'A', 'C', 'B', 'A', 'B', 'Z', 'A', 'B', 'B', 'B', 'D', 'C', 'D', 'C', 'C', 'D');
$spg[$lp['A8P1']]['E'] = $g8sp1;
$spg[$lp['A8P1']]['F'] = array('B', 'D', 'C', 'C', 'A', 'C', 'B', 'A', 'B', 'Z', 'A', 'B', 'B', 'B', 'D', 'C', 'D', 'C', 'C', 'D');
$spg[$lp['A8P1']]['G'] = array('B', 'D', 'C', 'C', 'A', 'C', 'B', 'A', 'Z', 'Z', 'A', 'B', 'B', 'B', 'D', 'C', 'D', 'C', 'C', 'D');

$g8sp2 = array('C', 'D', 'C', 'C', 'C', 'A', 'C', 'A', 'A', 'D', 'A', 'A', 'A', 'C', 'Z', 'D', 'A', 'D', 'C', 'A');
$spg[$lp['A8P2']]['A'] = $g8sp2;
$spg[$lp['A8P2']]['B'] = $g8sp2;
$spg[$lp['A8P2']]['C'] = $g8sp2;
$spg[$lp['A8P2']]['D'] = $g8sp2;
$spg[$lp['A8P2']]['E'] = $g8sp2;
$spg[$lp['A8P2']]['F'] = $g8sp2;
$spg[$lp['A8P2']]['G'] = $g8sp2;

$g9sp1 = array('B', 'C', 'C', 'D', 'B', 'C', 'E', 'B', 'C', 'C', 'D', 'B', 'B', 'D', 'A', 'A', 'B', 'D', 'C', 'D', 'A', 'E', 'B', 'A', 'D', 'D', 'B', 'C', 'C', 'A');
$spg[$lp['A9P1']]['A'] = $g9sp1;
$spg[$lp['A9P1']]['B'] = $g9sp1;
$spg[$lp['A9P1']]['C'] = $g9sp1;
$spg[$lp['A9P1']]['D'] = $g9sp1;
$spg[$lp['A9P1']]['E'] = $g9sp1;
$spg[$lp['A9P1']]['F'] = $g9sp1;

$g9sp2 = array('A', 'B', 'C', 'D', 'D', 'A', 'D', 'A', 'D', 'E', 'A', 'C', 'B', 'B', 'C', 'B', 'C', 'E', 'A', 'D', 'B', 'A', 'A', 'B', 'A', 'D', 'D', 'D', 'A', 'B');
$spg[$lp['A9P2']]['A'] = $g9sp2;
$spg[$lp['A9P2']]['B'] = array('A', 'B', 'C', 'D', 'D', 'A', 'D', 'A', 'D', 'E', 'A', 'C', 'B', 'B', 'C', 'B', 'C', 'E', 'A', 'D', 'B', 'Z', 'A', 'B', 'A', 'D', 'D', 'D', 'A', 'B');
$spg[$lp['A9P2']]['C'] = $g9sp2;
$spg[$lp['A9P2']]['D'] = array('A', 'B', 'C', 'D', 'D', 'A', 'D', 'A', 'D', 'E', 'A', 'C', 'B', 'B', 'C', 'B', 'C', 'E', 'A', 'D', 'B', 'Z', 'A', 'B', 'A', 'D', 'D', 'D', 'A', 'B');
$spg[$lp['A9P2']]['E'] = $g9sp2;
$spg[$lp['A9P2']]['F'] = $g9sp2;
*/


// Gabaritos P7 e P8

$g6sp1 = array('A', 'C', 'B', 'B', 'C', 'D', 'A', 'C', 'A', 'B', 'A', 'C', 'B', 'D', 'A'); 
$spg[$lp['A6P1']]['A'] = $g6sp1;
$spg[$lp['A6P1']]['B'] = $g6sp1;
$spg[$lp['A6P1']]['C'] = $g6sp1;
$spg[$lp['A6P1']]['D'] = $g6sp1;
$spg[$lp['A6P1']]['E'] = $g6sp1;
$spg[$lp['A6P1']]['F'] = $g6sp1;
$spg[$lp['A6P1']]['G'] = $g6sp1;
$spg[$lp['A6P1']]['H'] = $g6sp1;

$g6sp2 = array('C', 'C', 'B', 'B', 'D', 'A', 'C', 'B', 'C', 'A', 'C', 'C', 'A', 'D', 'B');
$spg[$lp['A6P2']]['A'] = $g6sp2;
$spg[$lp['A6P2']]['B'] = $g6sp2;
$spg[$lp['A6P2']]['C'] = $g6sp2;
$spg[$lp['A6P2']]['D'] = $g6sp2;
$spg[$lp['A6P2']]['E'] = $g6sp2;
$spg[$lp['A6P2']]['F'] = $g6sp2;
$spg[$lp['A6P2']]['G'] = $g6sp2;
$spg[$lp['A6P2']]['H'] = $g6sp2;

$g7sp1 = array('A', 'C', 'B', 'D', 'Z', 'D', 'D', 'B', 'B', 'A', 'D', 'D', 'D', 'B', 'C');
$spg[$lp['A7P1']]['A'] = $g7sp1;
$spg[$lp['A7P1']]['B'] = $g7sp1;
$spg[$lp['A7P1']]['C'] = $g7sp1;
$spg[$lp['A7P1']]['D'] = $g7sp1;
$spg[$lp['A7P1']]['E'] = $g7sp1;
$spg[$lp['A7P1']]['F'] = $g7sp1;

$g7sp2 = array('D', 'C', 'A', 'B', 'A', 'B', 'C', 'C', 'B', 'A', 'B', 'Z', 'B', 'C', 'A');
$spg[$lp['A7P2']]['A'] = $g7sp2;
$spg[$lp['A7P2']]['B'] = $g7sp2;
$spg[$lp['A7P2']]['C'] = $g7sp2;
$spg[$lp['A7P2']]['D'] = $g7sp2;
$spg[$lp['A7P2']]['E'] = $g7sp2;
$spg[$lp['A7P2']]['F'] = $g7sp2;

$g8sp1 = array('D', 'C', 'D', 'B', 'A', 'C', 'C', 'B', 'Z', 'A', 'B', 'B', 'D', 'A', 'D', 'A', 'B', 'A', 'D', 'C');
$spg[$lp['A8P1']]['A'] = $g8sp1;
$spg[$lp['A8P1']]['B'] = $g8sp1;
$spg[$lp['A8P1']]['C'] = $g8sp1;
$spg[$lp['A8P1']]['D'] = $g8sp1;
$spg[$lp['A8P1']]['E'] = $g8sp1;
$spg[$lp['A8P1']]['F'] = $g8sp1;
$spg[$lp['A8P1']]['G'] = $g8sp1;

$g8sp2 = array('C', 'A', 'B', 'B', 'D', 'D', 'D', 'B', 'B', 'A', 'C', 'C', 'D', 'B', 'B', 'D', 'A', 'A', 'A', 'C');
$spg[$lp['A8P2']]['A'] = $g8sp2;
$spg[$lp['A8P2']]['B'] = $g8sp2;
$spg[$lp['A8P2']]['C'] = $g8sp2;
$spg[$lp['A8P2']]['D'] = $g8sp2;
$spg[$lp['A8P2']]['E'] = array('C', 'A', 'B', 'B', 'D', 'D', 'D', 'Z', 'B', 'A', 'C', 'C', 'D', 'B', 'B', 'D', 'A', 'A', 'A', 'C');
$spg[$lp['A8P2']]['F'] = array('C', 'A', 'B', 'B', 'D', 'D', 'D', 'Z', 'B', 'A', 'C', 'C', 'D', 'B', 'B', 'D', 'A', 'A', 'A', 'C');
$spg[$lp['A8P2']]['G'] = $g8sp2;

$g9sp1 = array('D', 'E', 'D', 'B', 'D', 'C', 'A', 'B', 'C', 'C', 'C', 'E', 'A', 'C', 'C', 'A', 'A', 'E', 'A', 'B', 'D', 'C', 'D', 'B', 'A', 'E', 'C', 'C', 'D', 'A');
$spg[$lp['A9P1']]['A'] = $g9sp1;
$spg[$lp['A9P1']]['B'] = $g9sp1;
$spg[$lp['A9P1']]['C'] = $g9sp1;
$spg[$lp['A9P1']]['D'] = $g9sp1;
$spg[$lp['A9P1']]['E'] = $g9sp1;
$spg[$lp['A9P1']]['F'] = $g9sp1;

$g9sp2 = array('D', 'A', 'C', 'E', 'A', 'D', 'B', 'C', 'B', 'B', 'E', 'E', 'C', 'E', 'E', 'D', 'A', 'C', 'B', 'D', 'C', 'B', 'A', 'C', 'B', 'A', 'C', 'C', 'B', 'C');
$spg[$lp['A9P2']]['A'] = $g9sp2;
$spg[$lp['A9P2']]['B'] = $g9sp2;
$spg[$lp['A9P2']]['C'] = $g9sp2;
$spg[$lp['A9P2']]['D'] = $g9sp2;
$spg[$lp['A9P2']]['E'] = $g9sp2;
$spg[$lp['A9P2']]['F'] = $g9sp2;


// Modelo de gabarito em branco

/*

$g6sp1 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', ''); 
$spg[$lp['A6P1']]['A'] = $g6sp1;
$spg[$lp['A6P1']]['B'] = $g6sp1;
$spg[$lp['A6P1']]['C'] = $g6sp1;
$spg[$lp['A6P1']]['D'] = $g6sp1;
$spg[$lp['A6P1']]['E'] = $g6sp1;
$spg[$lp['A6P1']]['F'] = $g6sp1;
$spg[$lp['A6P1']]['G'] = $g6sp1;
$spg[$lp['A6P1']]['H'] = $g6sp1;

$g6sp2 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A6P2']]['A'] = $g6sp2;
$spg[$lp['A6P2']]['B'] = $g6sp2;
$spg[$lp['A6P2']]['C'] = $g6sp2;
$spg[$lp['A6P2']]['D'] = $g6sp2;
$spg[$lp['A6P2']]['E'] = $g6sp2;
$spg[$lp['A6P2']]['F'] = $g6sp2;
$spg[$lp['A6P2']]['G'] = $g6sp2;
$spg[$lp['A6P2']]['H'] = $g6sp2;

$g7sp1 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A7P1']]['A'] = $g7sp1;
$spg[$lp['A7P1']]['B'] = $g7sp1;
$spg[$lp['A7P1']]['C'] = $g7sp1;
$spg[$lp['A7P1']]['D'] = $g7sp1;
$spg[$lp['A7P1']]['E'] = $g7sp1;
$spg[$lp['A7P1']]['F'] = $g7sp1;

$g7sp2 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A7P2']]['A'] = $g7sp2;
$spg[$lp['A7P2']]['B'] = $g7sp2;
$spg[$lp['A7P2']]['C'] = $g7sp2;
$spg[$lp['A7P2']]['D'] = $g7sp2;
$spg[$lp['A7P2']]['E'] = $g7sp2;
$spg[$lp['A7P2']]['F'] = $g7sp2;

$g8sp1 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A8P1']]['A'] = $g8sp1;
$spg[$lp['A8P1']]['B'] = $g8sp1;
$spg[$lp['A8P1']]['C'] = $g8sp1;
$spg[$lp['A8P1']]['D'] = $g8sp1;
$spg[$lp['A8P1']]['E'] = $g8sp1;
$spg[$lp['A8P1']]['F'] = $g8sp1;
$spg[$lp['A8P1']]['G'] = $g8sp1;

$g8sp2 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A8P2']]['A'] = $g8sp2;
$spg[$lp['A8P2']]['B'] = $g8sp2;
$spg[$lp['A8P2']]['C'] = $g8sp2;
$spg[$lp['A8P2']]['D'] = $g8sp2;
$spg[$lp['A8P2']]['E'] = $g8sp2;
$spg[$lp['A8P2']]['F'] = $g8sp2;
$spg[$lp['A8P2']]['G'] = $g8sp2;

$g9sp1 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A9P1']]['A'] = $g9sp1;
$spg[$lp['A9P1']]['B'] = $g9sp1;
$spg[$lp['A9P1']]['C'] = $g9sp1;
$spg[$lp['A9P1']]['D'] = $g9sp1;
$spg[$lp['A9P1']]['E'] = $g9sp1;
$spg[$lp['A9P1']]['F'] = $g9sp1;

$g9sp2 = array('', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '');
$spg[$lp['A9P2']]['A'] = $g9sp2;
$spg[$lp['A9P2']]['B'] = $g9sp2;
$spg[$lp['A9P2']]['C'] = $g9sp2;
$spg[$lp['A9P2']]['D'] = $g9sp2;
$spg[$lp['A9P2']]['E'] = $g9sp2;
$spg[$lp['A9P2']]['F'] = $g9sp2;

*/
?>
