<?php
echo $_SERVER['HTTP_USER_AGENT'] . "\n\n";

$navegador = get_browser(null, true);
print_r($navegador);


	echo "navegador". $navegador["browser"]."\n\n";
	echo "nav: ".$navegador["parent"]."\n\n";

?>