<?php

    require ("novocity.inc");
    require ("func.php");
    
    class provincia extends mondo{
        
        function MostrarPalabrasClave(){
            
            $provincia = $_GET["provincia"];
            if (texto($provincia)==false)
            switch ($provincia){
	case Albacete:
                    ?>
                    <META name="keywords" content= "putas en Albacete, sexo en Albacete, escort en Albacete" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en Albacete" />
                    <?php
                    break;
	case Asturias:
                    ?>
                    <META name="keywords" content= "putas en Asturias, sexo en Asturias, escort en Asturias" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en Asturias" />
                    <?php
                    break;
	case Badajoz:
                    ?>
                    <META name="keywords" content= "putas en Badajoz, sexo en Badajoz, escort en Badajoz" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en Badajoz" />
                    <?php
                    break;
	case Baleares:
                    ?>
                    <META name="keywords" content= "putas en Islas Baleares, sexo en Islas Baleares, escort en Baleares" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en Islas Baleares" />
                    <?php
                    break;
				case Bilbao:
					?>
                    <META name="keywords" content= "chicas Bilbao, chicos, travestis en bilbao, provincia de Vizcaya" />
                    <META name="description" content="Obt&eacute;n las mejores chicas de Bilbao" />
                    <?php
	break;
				case Burgos:
					?>
                    <META name="keywords" content= "chicas Burgos, chicos, travestis en burgos, provincia de burgos" />
                    <META name="description" content="Obt&eacute;n las mejores chicas de Burgos" />
                    <?php
	break;
	case Cantabria:
					?>
                    <META name="keywords" content= "chicas Cantabria, chicos, travestis en Cantabria, provincia de Cantabria" />
                    <META name="description" content="Obt&eacute;n las mejores chicas de Cantabria" />
                    <?php
	break;
	case Caceres:
					?>
                    <META name="keywords" content= "chicas Caceres, chicos, travestis en C&aacute;ceres, provincia de C&aacute;ceres" />
                    <META name="description" content="Obt&eacute;n las mejores chicas de C&aacute;ceres" />
                    <?php
	break;
	case Coruna:
                    ?>
                    <META name="keywords" content= "putas en La Coru&ntilde;a, sexo en La Coru&ntilde;a, escort en La Coru&ntilde;a" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en La Coru&ntilde;a" />
                    <?php
                    break;
	case Guadalajara:
					?>
                    <META name="keywords" content= "chicas Guadalajara, chicos, travestis en Guadalajara, provincia de Guadalajara" />
                    <META name="description" content="Obt&eacute;n las mejores chicas de Guadalajara" /><?php
	break;
                case Rioja:
                    ?>
                    <META name="keywords" content= "putas en La Rioja, sexo en La Rioja, escort en La Rioja" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en la rioja" />
                    <?php
                    break;
	case Lerida:
                    ?>
                    <META name="keywords" content= "putas en Lerida, sexo en Lerida, escort en Lerida" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en Lerida" />
                    <?php
                    break;
	case Lugo:
                    ?>
                    <META name="keywords" content= "putas en Lugo, sexo en Lerida, escort en Lugo" />
                    <META name="description" content="Las mejores chicas para contactos eroticos en Lugo" />
                    <?php
                    break;
                case Madrid:
                    ?>
                    <META name="keywords" content= "Madrid, putas, sexo, contactos, escort en Madrid, putas en Madrid, sexo en Madrid" />
                    <META name="description" content="Para realizar sexo en Madrid, encuentra aqui las mejores chicas" />
                    <?php
                    break;
                case Navarra:
                    ?>
                    <META name="keywords" content= "Escort en Navarra, chicas en navarra, putas en navarra, travestis, acompa&ntilde;antes" />
                    <META name="description" content="Si vas de putas a Navarra pasa por aqui" />
                    <?php
                    break;
                case Zaragoza:
                    ?>
                    <META name="keywords" content= "chicas Zaragoza, chicos, travestis en zaragoza" />
                    <META name="description" content="Obt&eacute;n las mejores chicas de Zaragoza" />
                    <?php
		case Vitoria:
					?>
                    <META name="keywords" content= "chicas Vitoria, chicos, travestis en vitoria, provincia de vitoria" />
                    <META name="description" content="Obt&eacute;n las mejores chicas de Vitoria" />
                    <?php
                    break;
            }
            
        }
            
        function Mostrar(){

            echo "<!DOCTYPE html>";
            echo "<html>\n<head>\n";
            $this -> MostrarTitulo();
            $this -> MostrarMeta();
            $this -> MostrarStatics();
            $this -> MostrarPalabrasClave();
            $this -> MostrarEstilos();
            echo "</head>\n<body>\n";
            $this -> MostrarConexionEscort();
            $this -> MostrarCabecera();
            $this -> MostrarMenu();
            $this -> MostrarBoletin();
            
            $this -> MostrarProvincia();
            
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
                
        }
            
        function MostrarProvincia(){
                
            $provincia = $_GET["provincia"];
            if (texto($provincia)==false) exit;
            switch ($provincia){
	case Albacete:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
                    break;
	 case Asturias:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
                    break;
	 case Badajoz:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
                    break;
	 case Baleares:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    break;
	case Bilbao:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    break;
	case Burgos:
	  $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
	break;
	case Cantabria:
	  $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
            	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
	break;
                case Caceres:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
                    break;
	case Coruna:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    break;
	case Guadalajara:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
                    break;
	case Rioja:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    break;
	case Lerida:
	  $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
	 break;
	case Lugo:
	  $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
	
	 break;
                case Madrid:
	 $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    break;
                case Navarra:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    break;
	case San_Sebastian:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
                    break;
                case Zaragoza:
                    $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
             	echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
	break;
	case Vitoria:
	  $sql = "select * from escort where alta='s' and provincia='".$provincia."' order by rand();";
                    echo "<p style='font-family: Gill Sans Ultra Bold; margin-left: 170px; margin-top: 30px; margin-bottom: 200px;'>PROXIMAMENTE</p>";
                    break;
            }
                
            $chr= mysql_query($sql);
    
            if (!$chr){
                echo "No se ejecuta la consulta";
            }
        
            $numtot = mysql_num_rows($chr);
            $mitad = ceil($numtot/2);
            $cont = 0;
           
        ?>
            <div id="cuerpo">
            <table>
        <?php
            while ($ver = mysql_fetch_array($chr)){
                
		
        ?>
            <tr>
		<td width="50" height="50"><a href="http://www.mondo-felice.com/acompanante.php?id=<?php echo ($ver['id']); ?>">
                    <img width="100" height="100" float="center" alt="<?php echo ($ver['nombre']); ?>1" title="<?php echo ($ver['nombre']); ?>1" src="<?php echo ($ver['foto1']); ?>" /></a></td>
		<td><a href="http://www.mondo-felice.com/acompanante.php?id=<?php echo ($ver['id']); ?>"><?php echo ($ver['nombre']); ?></a>
			<p>Poblaci&oacute;n: <?php echo ($ver['ciudad']);?>      Provincia: <?php echo ($ver['provincia']); ?></p>
			<p><?php echo ($ver['portada']); 
                            $cont = $cont+1;?></p><br /><hr></td>
                        
            </tr>
        <?php 
            }

    
            mysql_free_result($chr);
       
        ?>
        </table> 
        </div>
        <?php
        }
    
    }
?>