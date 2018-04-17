<html>
<head>
	<title></title>
</head>
<body>
<?php
echo "The current date is ";
echo date("l F d, Y");


$arq = file("CADASTRO.csv");
foreach ($arq as $temp_valor) {
      list($col1, $col2, $col3) = explode(";", $temp_valor);
      echo $col1 . " - " . $col2 . " - " . $col3 . "<BR>";
}

?>
</body>
</html>