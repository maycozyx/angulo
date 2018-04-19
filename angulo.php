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
<?php
include "conecta_mysql.inc";

$r = mysql_query("SELECT * FROM gabaritos");

mysql_close($conexao);
?>
</body>
</html>