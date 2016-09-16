<?php

    require ("novocity.inc");
    require ("func.php");
    
    class contactar extends mondo{
    
        var $palabrasClave = "contacto con Mondo-Felice, contactar con Mondo, contacta";
    
    
        function setPalabrasClave($NuevoPalabrasClave){
    
            $this -> palabrasClave = $NuevoPalabrasClave;
    
        }
    
    
        function MostrarPalabrasClave(){
    
            ?>
            <META name="keywords" content="<?php echo $this -> palabrasClave; ?>" />
            <META name="description" content="Contacta con nosotros" />
            <?php
    
        }
    
        function Mostrar(){
            
            echo "<!DOCTYPE html>";
            echo "<html>\n<head>\n";
            $this -> MostrarTitulo();
            $this -> MostrarMeta();
            $this -> MostrarStatics();
            $this -> MostrarPalabrasClave();
            $this -> MostrarEstilos();
            $this -> MostrarScript();
            echo "</head>\n<body>\n";
            $this -> MostrarCabecera();
            $this -> MostrarMenu($this -> botones);
            $this -> MostrarBoletin();
            $this -> MostrarContacto();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
                  
        }
        
        function MostrarScript(){

            ?>
            <script language="JavaScript" type="text/javascript">
            <!--//BEGIN Script

                function new_window(url) {

                    link = window.open(url,"Link","toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=yes,resizable=0,width=430,height=170,left=180,top=180");

                }
            //END Script-->
            </script>
            <?php
        }
    
        function MostrarContacto(){
    
            $titulo = "Mensaje enviado desde Contacto de la web Mondo-Felice";
            $remite = $_POST["remite"];
            $email = $_POST["email"];
            $mensaje = $_POST["mensaje"];
            $envia = $_POST["envia"];
            $cabecera = "FROM: ".$mail;
            $comentario = "Envia: ".$remite."\nSu mensaje: \n".$mensaje;
            
            ?>
            
            <?php
            if (isset($envia)){
                
                if (opsmail($email)==false){
                    ?>
                    <script type="text/javascript">
                        alert("La direcci—n de E-mail introducida no es correcta.");
                    </script>
                    <?php
                    header('Location: http://www.mondo-felice.com/contacto.php');
                }
        
                if (nosql($mensaje)==false){
                    ?>
                    <script type="text/javascript">
                        alert("El mensaje enviado no es correcto.");
                    </script>
                    <?php
                    header('Location: http://www.mondo-felice.com/contacto.php');
                }
        
                mail("info@mondo-felice.com", $titulo, $comentario, $cabecera);
                echo "Su mensaje se ha enviado con &eacute;xito.\n";
                echo "Gracias por contactar con nosotros, si es necesario recibir&aacute;s contestaci&oacute;n";
            ?>
          
            <?php
            }else{
             
                ?>
                <div id="respuesta">
                <h2 style="color: rgb( 91, 0, 91);">Formulario de contacto</h2>
                <form action='?' method="POST">
                    <table style="color: rgb(91, 0, 91);">
                        <tr>
                            <td>Nombre:</td>
                            <td><input type="text" name="remite"></input></td>
                        </tr>
                        <tr>
                            <td>E-mail:</td>
                            <td><input type="text" name="email"></input></td>
                        </tr>
                        <tr>
                            <td>Mensaje:</td>
                            <td><textarea name="mensaje" cols="30" rows="10"></textarea></td>
                        </tr>
                        <tr>
                            <td></td>
                            <td><input type="submit" name="envia" value="Env&iacute;a!"></input></td>
                        </tr>
                    </table>
                </form>
                </div>
                <br>
                <?php
                
            }
    
        }
    
    }


?>