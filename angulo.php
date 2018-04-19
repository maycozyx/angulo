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