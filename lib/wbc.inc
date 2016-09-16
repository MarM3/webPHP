<?php

    require ("novocity.inc");
    
    class webc extends mondo{
        
        var $palabrasClave = "webcam, sexo webcam, camaras de sexo en internet, webcam sex, chicas webcam, travesti webcam, chicos webcam";
    
        function setPalabrasClave($NuevoPalabrasClave){
    
            $this -> palabrasClave = $NuevoPalabrasClave;
    
        }
    
        function MostrarPalabrasClave(){
    
            ?>
            <META name="keywords" content="<?php echo $this -> palabrasClave; ?>" />
            <META name="description" content="Visita nuestras webcam de sexo con chicas, chicos o travestis" />
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
            $this -> MostrarWebcam();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
        
        }
        
        function MostrarWebcam(){
            
            ?>
            
            <div id="mapa">
                <ol>
                    <h3><p>Disfruta de las Webcams de las que disponemos</p></h3>
                    <li><a href="http://mondofelice.paraisocam.com/?actualizar=1">Chicas</a></li>
                    <li><a href="http://mondofelice.paraisocamgay.com/?actualizar=1">Chicos</a></li>
                    <li><a href="http://mondofelice.paraisotrans.com/?actualizar=1">Travestis</a></li>
                    <h3><p>Tambi&eacute;n a trav&eacute;s de tu movil</p></h3>
                    <li><a href="http://www.sexopremium.mobi/?alias=mondofelice">Premium</a></li>
                    <li><a href="http://www.paraisowebcam.mobi/?alias=mondofelice">Paraiso Movil</a></li>
                    <li><a href="http://www.afroditax.mobi/?alias=mondofelice">Afroditax</a></li>
                </ol>
                <br />
                <br />
                <br />
            </div>
            
            <?php
        
        }
    
    }
    

?>