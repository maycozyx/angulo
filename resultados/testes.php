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
$nomeArray = "FOO";
$array = [
    $nomeArray => "bar",
    "bar" => "foo",
];

include "conecta_mysql.inc";
include "gabarito_provas.inc";

print_r($array);



print_r($spg);

mysql_close($conexao);
?>
</pre>
</body>
</html>