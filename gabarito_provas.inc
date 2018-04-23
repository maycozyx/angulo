<?php

//$spg = array("D6EF01", "D6EF02", "D7EF01", "D7EF02", "D8EF01", "D8EF02", "D9EF01", "D9EF02"); // spg = Série Prova do Gabarito
// spg = Série Prova do Gabarito; Z significa validada para todos
/*
$spg["D6EF01"] = array('B', 'A', 'C', 'C', 'Z', 'B', 'Z', 'B', 'D', 'A', 'C', 'C', 'B', 'B', 'Z'); 
$spg["D6EF02"] = array('B', 'C', 'B', 'A', 'C', 'D', 'C', 'B', 'Z', 'D', 'B', 'D', 'A', 'A', 'D');
$spg["D7EF01"] = array('A', 'B', 'A', 'D', 'C', 'D', 'Z', 'A', 'C', 'B', 'Z', 'C', 'D', 'B', 'Z');
$spg["D7EF02"] = array('C', 'B', 'D', 'A', 'A', 'B', 'D', 'Z', 'D', 'D', 'B', 'D', 'A', 'B', 'A');
$spg["D8EF01"] = array('D', 'C', 'A', 'B', 'A', 'C', 'Z', 'Z', 'B', 'C', 'C', 'A', 'D', 'A', 'B', 'D', 'C', 'C', 'Z', 'D');
$spg["D8EF02"] = array('B', 'D', 'B', 'B', 'A', 'B', 'Z', 'C', 'Z', 'C', 'D', 'C', 'B', 'A', 'Z', 'B', 'A', 'D', 'D', 'B');
$spg["D9EF01"] = array('C', 'A', 'E', 'B', 'C', 'B', 'D', 'D', 'C', 'A', 'B', 'D', 'E', 'Z', 'E', 'A', 'C', 'B', 'C', 'Z', 'Z', 'Z', 'E', 'D', 'C', 'C', 'D', 'C', 'A', 'E');
$spg["D9EF02"] = array('B', 'B', 'D', 'B', 'A', 'C', 'A', 'B', 'D', 'E', 'E', 'B', 'E', 'B', 'C', 'E', 'A', 'B', 'B', 'D', 'C', 'B', 'A', 'C', 'B', 'B', 'E', 'D', 'E', 'E');
*/

//$spg = array( "D6EF01", "D6EF02" );
$spg = array( ); // inicializa o array
//$spg["D6EF02"] = array( 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' ); 
$g6sp1 = array('B', 'A', 'C', 'C', 'Z', 'B', 'Z', 'B', 'D', 'A', 'C', 'C', 'B', 'B', 'Z');
$spg['D6EF01']['A'] = $g6sp1;
$spg['D6EF01']['B'] = $g6sp1;
$spg['D6EF01']['C'] = $g6sp1;
$spg['D6EF01']['D'] = $g6sp1;
$spg['D6EF01']['E'] = $g6sp1;
$spg['D6EF01']['F'] = $g6sp1;
$spg['D6EF01']['G'] = $g6sp1;
$spg['D6EF01']['H'] = $g6sp1;

$g6sp2 = array('B', 'C', 'B', 'A', 'C', 'D', 'C', 'B', 'Z', 'D', 'B', 'D', 'A', 'A', 'D'); 
$spg['D6EF02']['A'] = $g6sp2;
$spg['D6EF02']['B'] = $g6sp2;
$spg['D6EF02']['C'] = $g6sp2;
$spg['D6EF02']['D'] = $g6sp2;
$spg['D6EF02']['E'] = $g6sp2;
$spg['D6EF02']['F'] = $g6sp2;
$spg['D6EF02']['G'] = $g6sp2;
$spg['D6EF02']['H'] = $g6sp2;

?>