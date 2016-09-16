<?php

    require ("novocity.inc");
    
    class mondo2 extends mondo{
        
        function Mostrar(){
    
            echo "<!DOCTYPE html>";            
            echo "<html>\n<head>\n";
            $this -> MostrarTitulo();
            $this -> MostrarMeta();
            $this -> MostrarStatics();
            $this -> MostrarPalabrasClave();
            $this -> MostrarEstilos();
            echo "</head>\n<body>\n";
            $this -> MostrarCabecera();
            $this -> MostrarMenu();
            $this -> MostrarBoletin();
            $this -> MostrarPubliHetero();
            $this -> MostrarConexionEscort();
            $this -> MostrarCuerpo();
            $this -> MostrarEroAdd();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
    
        }
    
        function MostrarCuerpo(){
        
            $sql = "select * from escort where alta='s' order by rand();";
            $row = mysql_query($sql);
    
            if (!$row){
                echo "No se ejecuta la consulta";
            }
        
            $tot = mysql_num_rows($row);
            $mitad = ceil($tot/2);
            $cont = 0;
           
        ?>
            <div id="cuerpo">
            <table>
        <?php
            while($ver = mysql_fetch_array($row)){
		
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

    
            mysql_free_result($row);
       
        ?>
        </table> 
        </div>
        <?php
        
    }
    
}
    


?>