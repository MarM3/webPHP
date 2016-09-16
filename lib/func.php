<?php

function nosql($var){
            
    $var=mysql_escape_string($var);
    $sen=array("SCRIPT"," AND ", "+" ,"SELECT", "UPDATE", "INSERT", "DELETE", "<>", "*","DROP","WHERE","\'"," OR ","ALERT");
    $cache=str_replace($sen,"",strtoupper($var),$num);
   
    if($num>0){
        return false;
    }
        return true;
}
 
function seg($var,$min,$max){
   
    $var=mysql_escape_string($var);
   
    if(is_null($var)){
        return false;
    }elseif(strlen($var)< $min){
        return false;
    }elseif(strlen($var)>$max){
        return false;
    }
   
    return nosql($var);
            
}

function opsmail($var){
    
    $cadena = "/^(([A-Za-z0-9]+_+)|([A-Za-z0-9]+\-+)|([A-Za-z0-9]+\.+)|([A-Za-z0-9]+\++))*[A-Za-z0-9]+@((\w+\-+)|(\w+\.))*\w{1,63}\.[a-zA-Z]{2,6}$/";
    if (preg_match($cadena, $var)!=1){
        return false;
    }
    
    return true;
    
}

function texto($var){

    $cadena = "/[A-Z„]/";
    if (preg_match($cadena, $var)!=1){
        return false;
    }
    
    return true;
}

function numero($var){
    
    $cadena = "/[0-9][0-9]/";
    if (preg_match($cadena, $var)!=1){
        return false;
    }
    
    return true;
}

function cuenta($id){
    
    mysql_connect("localhost","mondofel_tips","MYfr33dom-sp4CE"); 
    mysql_select_db("mondofel_publicidad");
    
    $IP = $REMOTE_ADDR;
    $fecha = date("j del n de Y");
    $hora = date("h:i:s");
    $segundos = time();
    $can = 3600;
    $resta = $segundos - $can;
    
    if ($id!=0){
        $sql = "select segundos, IP from contador where segundos >='".$resta."' and IP like '".$IP."' and chica='".$id."';"; 
    }else{
        $sql = "select segundos, IP from contador where segundos >='".$resta."' and IP like '".$IP."';";
    }
    $es = mysql_query($sql);
    
    if (mysql_num_rows($es)==0){
    
        $sql = "insert into contador (chica, id, IP, hora, fecha, segundos) values ('$id', '', '$IP', '$hora', '$fecha', '$segundos');";
        $es = mysql_query($sql);
        
    }
}

?>