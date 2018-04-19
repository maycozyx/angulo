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

//$sp = array("D6EF01", "D6EF02", "D7EF01", "D7EF02", "D8EF01", "D8EF02", "D9EF01", "D9EF02"); // sp = Série Prova
$sp["D6EF01"] = array('B', 'A', 'C', 'C', 'Z', 'B', 'Z', 'B', 'D', 'A', 'C', 'C', 'B', 'B', 'Z'); // Z significa validada para todos
$sp["D6EF02"] = array('B', 'C', 'B', 'A', 'C', 'D', 'C', 'B', 'Z', 'D', 'B', 'D', 'A', 'A', 'D');
$sp["D7EF01"] = array('A', 'B', 'A', 'D', 'C', 'D', 'Z', 'A', 'C', 'B', 'Z', 'C', 'D', 'B', 'Z');
$sp["D7EF02"] = array('C', 'B', 'D', 'A', 'A', 'B', 'D', 'Z', 'D', 'D', 'B', 'D', 'A', 'B', 'A');
$sp["D8EF01"] = array('D', 'C', 'A', 'B', 'A', 'C', 'Z', 'Z', 'B', 'C', 'C', 'A', 'D', 'A', 'B', 'D', 'C', 'C', 'Z', 'D');
$sp["D8EF02"] = array('B', 'D', 'B', 'B', 'A', 'B', 'Z', 'C', 'Z', 'C', 'D', 'C', 'B', 'A', 'Z', 'B', 'A', 'D', 'D', 'B');
$sp["D9EF01"] = array('C', 'A', 'E', 'B', 'C', 'B', 'D', 'D', 'C', 'A', 'B', 'D', 'E', 'Z', 'E', 'A', 'C', 'B', 'C', 'Z', 'Z', 'Z', 'E', 'D', 'C', 'C', 'D', 'C', 'A', 'E');
$sp["D9EF02"] = array('B', 'B', 'D', 'B', 'A', 'C', 'A', 'B', 'D', 'E', 'E', 'B', 'E', 'B', 'C', 'E', 'A', 'B', 'B', 'D', 'C', 'B', 'A', 'C', 'B', 'B', 'E', 'D', 'E', 'E');

print_r($sp);

//$r = mysql_query("SELECT * FROM gabaritos");
$rg = mysql_query("SELECT c2, c3, c10 FROM gabaritos ORDER BY c2 ASC, c10 ASC, c3 ASC"); // rg = resultado gabaritos

while ($rowg=mysql_fetch_array($rg))
        {
            //print_r($row);
			$rc = mysql_query("SELECT c2 FROM cadastro WHERE c4='$rowg[c3]'"); // rc = resultado cadastro
			$rowc=mysql_fetch_array($rc);
			echo "<b>Série:</b>$rowg[c2] <b>Nº</b>$rowg[c3] <b>Turma:</b>$rowg[c10] <b>Nome:</b>$rowc[0]<br>";
        }        


//print_r($r);
//var_dump($r);

mysql_close($conexao);
?>
</pre>
</body>
</html>