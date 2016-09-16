<?php

    require ("novocity.inc");

    class mapa extends mondo{
        
        var $palabrasClave = "mapa sitio, mapa de Mondo Felice, Mondo-Felice map, mapa Mondo-Felice";
    
        function setPalabrasClave($NuevoPalabrasClave){
    
            $this -> palabrasClave = $NuevoPalabrasClave;
    
        }
    
        function MostrarPalabrasClave(){
    
            ?>
            <META name="keywords" content="<?php echo $this -> palabrasClave; ?>" />
            <META name="description" content="Mapa web de Mondo-Felice" />
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
            $this -> MostrarMapaSitio();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
            
        }
    
        function MostrarMapaSitio (){
    
            ?>
            <div id="mapa">
                <h2>Mapa del sitio web</h2>

                <ol type="I" id="1oil">
                    <h3>Muestra de tod@s l@s anunciantes</h3>
                    <li><a href="index.php">Inicio</a></li>
                    <h3>Enlaces Patrocinados</h3>
                    <li><a href="enlaces.html">Webs Amigas</a></li>
                    <h3>Anunciantes por comunidades</h3>
                    <li><a href="provincia.php?provincia=Rioja">La Rioja</a></li>
                    <li><a href="provincia.php?provincia=Madrid">Madrid</a></li>
                    <h3>Visita nuestro blog, aprender&aacute;s cosas interesantes</h3>
                    <li><a href="http://elblog.mondo-felice.com">Blog</a></li>
                    <h3>Visita nuestro Sex-Shop encontrar&aacute;s todo lo que necesitas</h3>
                    <li><a href="http://www.mondo-felice.com/sexshop/">Sex-Shop</a></li>
                        <ol type="a">
                            <li><a href="http://www.mondo-felice.com/sexshop/aceites_lubricantes.php">Aceites y Lubricantes</a></li>
                            <li><a href="http://www.mondo-felice.com/sexshop/afrodisiacos.php">Todo tipo de Afrodisiacos</a></li>
                            <li><a href="http://www.mondo-felice.com/sexshop/alargamiento_pene.php">Productos para el Alargamiento del Pene</a></li>
                            <li><a href="http://www.mondo-felice.com/sexshop/juegos.php">En pareja, en grupo, prueba los Juegos de los que disponemos</a></li>
                            <li><a href="http://www.mondo-felice.com/sexshop/juguetesxxx.php">Despierta tu imaginación, todo tipo de juguetes eróticos</a></li>
                            <li><a href="http://www.mondo-felice.com/sexshop/preservativos.php">Disfruta pero con seguridad. Preservativos</a></li>
                            <li><a href="http://www.mondo-felice.com/sexshop/lenceria.php">Todo tipo de lencería</a></li>
                            <li><a href="http://www.mondo-felice.com/sexshop/varios.php">Productos varios</a></li>
                        </ol>
                    <h3>Encuentra las Webcam m&aacute;s ardientes de la red</h3>
                    <li><a href="webcam.php">Webcams</a></li>
                </ol>
            </div>

            <?php
        
        }
    
    }


?>