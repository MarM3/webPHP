<?php

    require ("novocity.inc");
    
    class enlace extends mondo{
    
        var $palabrasClave = "webs amigas, el mejor sexo, sexowebcam, anunciosvip, mundoenlaces, babosas, todo consejos, donde buscar, compartimos";
    
    
        function setPalabrasClave($NuevoPalabrasClave){
    
            $this -> palabrasClave = $NuevoPalabrasClave;
    
        }
    
    
        function MostrarPalabrasClave(){
    
            ?>
            <META name="keywords" content="<?php echo $this -> palabrasClave; ?>" />
            <META name="description" content="Visita nuestras webs amigas." />
            <?php
    
        }
    
        function Mostrar(){
            
            echo "<!DOCTYPE html>";
            echo "<html>\n<head>\n";
            $this -> MostrarTitulo();
            $this -> MostrarPalabrasClave();
            $this -> MostrarMeta();
            $this -> MostrarStatics();
            $this -> MostrarEstilos();
            echo "</head>\n<body>\n";
            $this -> MostrarCabecera();
            $this -> MostrarMenu($this -> botones);
            $this -> MostrarBoletin();
            $this -> MostrarEnlaces();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
            
        }
    
        function MostrarEnlaces(){
    
            ?>
        
                <div id="mapa">
                <h2>Enlaces patrocinados</h2>
                    <ul>
                        <li><a href="http://www.sexowebcam.org" title="Cam Sexo">Cam Sexo</a></li>
                        <li><a href="http://elmejorsexo.net/">El mejor sexo</a></li>
                        <li><a href='http://www.dondebuscar.net'>Directorio Web</a></li>
                        <li><a href="http://www.todoconsejos.com">Consejos</a></li>
                        <li><a href="http://directorio.compartimos.net/" title="Directorio de enlaces">Directorio de Enlaces</a></li>
                        <li><a href="http://www.anunciosvip.es/">Anuncios gratis</a></li>
                        <li><a href="http://www.mundoenlaces.com/">Directorio de enlaces. Promociona tu web</a></li>
                        <li><a href="http://www.babosas.com">Babosas</a></li>
                        <li><a href="http://www.combinacionganadora.com">Loteria</a></li>
                    </ul>
                    <br />
                    <br />
                    <br />
                </div>
                
            <?php
    
        }
    
    }
    

?>