<?php

    require ("novocity.inc");
    require ("func.php");
    
    class acomp extends mondo{
    
    
        function MostrarTitulo(){
         
            $chica = $_GET["id"];
            if (numero($chica)==false) exit;
            
            $consulta = "select nombre, telefono, provincia from escort where id='".$chica."';";
            $sql = mysql_query($consulta);
            $ver = mysql_fetch_array($sql);
            ?>
            <title><?php echo $ver['nombre']."\n".$ver['telefono']."\n".$ver['provincia'];?></title>
            <?php
            mysql_free_result($sql);
                  
        }
    
        function MostrarPalabrasClave(){
            
            $chica = $_GET["id"];
            if (numero($chica)==false) exit;
            
            $consulta = "select portada from escort where id='".$chica."';";
            $sql = mysql_query($consulta);
            $ver = mysql_fetch_array($sql);
            ?>
            <META name="description" content="<?php $ver['portada'];?>">
            <?php
            mysql_free_result($sql);
            
        }
    
        function Mostrar(){
            
            echo "<!DOCTYPE html>";
            echo "<html>\n<head>\n";
            $this -> MostrarConexionEscort();
            $this -> MostrarTitulo();
            $this -> MostrarMeta();
            $this -> MostrarStatics();
            $this -> MostrarPalabrasClave();
            $this -> MostrarEstilos();
            echo "</head>\n<body>\n";
            $this -> MostrarCabecera();
            $this -> MostrarMenu();
            $this -> MostrarFotosDer();
            $this -> MostrarAcompanante();
            $this -> MostrarMensaje();
            $this -> MostrarFotosIzq();
            $this -> MostrarFotoUlt();
            $this -> MostrarContactoChica();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
        }
        
        function MostrarFotosDer(){
            
            $chica = $_GET["id"];
            
            if (numero($chica)==false) exit; 
                    
            $consulta = "select * from escort where id='".$chica."';";
            $sql = mysql_query($consulta);
            $ver = mysql_fetch_array($sql);
            
            ?>
            <div id="fotosder">
                <table>
                    <tr>
                        <td><img alt="<?php echo $ver['nombre'];?>" title="<?php echo $ver['nombre'];?>" src="<?php echo $ver['foto1'];?>"><br><br></td>
                    </tr>
                    <tr>
                        <td><img alt="<?php echo $ver['nombre'];?>" title="<?php echo $ver['nombre'];?>" src="<?php echo $ver['foto2'];?>"><br><br></td>
                    </tr>
                </table>
            </div>
            <?php
        
            mysql_free_result($sql);
        
        }
    
        function MostrarAcompanante(){
    
            $chica = $_GET["id"];
            if (numero($chica)==false) exit;
            
            cuenta($chica);
                    
            $consulta = "select * from escort where id='".$chica."';";
            $sql = mysql_query($consulta);
            $ver = mysql_fetch_array($sql);
            
            ?>
            <div id="chica">
            <table>
                <tr>
                    <td><h1 style="font-family: Gill Sans Ultra Bold;"><?php echo ($ver["nombre"]); ?></h1></td>
                    <td><h2 style="font-family: Gill Sans Ultra Bold;"><?php echo ($ver["telefono"]);?></h2></td>
                </tr>
                <tr>
                    <td><br></td>
                    <td><br></td>
                </tr>
                <tr>
                    <td><h3 style="font-family: Gill Sans Ultra Bold;">Datos</h3></td>
                    <td></td>
                </tr>
                <?php
                if ($ver["nom_agencia"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Agencia:</td>
                    <td id="seccion" />
                        <?php echo ($ver["nom_agencia"]);?></td>
                </tr>
                <?php
                }
                ?>
                <tr>
                    <td id="enunciado">Poblaci&oacute;n:</td>
                    <td id="seccion" />
                        <?php echo ($ver["ciudad"]); ?></td>
                </tr>
                <tr>
                    <td id="enunciado">Provincia:</td>
                    <td id="seccion" />
                        <?php echo ($ver["provincia"]); ?></td>
                </tr>
                <?php
                if ($ver["blog"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Blog:</td>
                    <td id="seccion" />
                        <a style="text-decoration: none; color: rgb(91, 0, 91);" href="<?php echo ($ver["blog"]);?>">
                            <?php echo ($ver["blog"]);?></a></td>
                </tr>
                <?php
                }
                ?>
                <tr>
                    <td id="enunciado" />Presentaci&oacute;n:</td>
                    <td id="seccion" />
                        <?php echo ($ver["presentacion"]);?></td>
                </tr>
                <tr>
                    <td><br></td>
                    <td><br></td>
                </tr>
                <tr>
                    <td><h3 style="font-family: Gill Sans Ultra Bold;">
                        Datos Generales</h3></td>
                    <td></td>
                </tr>
                <?php
                if ($ver["sexo"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Sexo:</td>
                    <td id="seccion" />
                        <?php echo ($ver["sexo"]); 
                            if ($ver["orientacion"]<>'--'){
                                echo (", ".$ver["orientacion"]);
                                }
                                ?></td>
                </tr>
                <?php
                }
                if ($ver["edad"]<>0){
                ?>
                <tr>
                    <td id="enunciado">Edad:</td>
                    <td id="seccion" />
                        <?php echo ($ver["edad"]);?></td>
                </tr>
                <?php
                }
                if ($ver["origen"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Pa&iacute;s de Origen:</td>
                    <td id="seccion">
                        <?php echo ($ver["origen"]);?></td>
                </tr>
                <?php
                }
                if ($ver["idiomas"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Idiomas:</td>
                    <td id="seccion">
                        <?php echo ($ver["idiomas"]);?></td>
                </tr>
                <?php
                }
                if ($ver["estudios"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Estudios:</td>
                    <td id="seccion">
                        <?php echo ($ver["estudios"]);?></td>
                </tr>
                <?php
                }
                if ($ver["profesion"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Profesi&oacute;n:</td>
                    <td id="seccion">
                        <?php echo ($ver["profesion"]);?></td>
                </tr>
                <?php
                }
                ?>
                <tr>
                    <td><br></td>
                    <td><br></td>
                </tr>
                <tr>
                    <td><h3 style="font-family: Gill Sans Ultra Bold;">
                        Apariencia</h3></td>
                    <td></td>
                </tr>
                <?php
                if ($ver["pelo"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Cabello:</td>
                    <td id="seccion">
                        <?php echo ($ver["pelo"]); 
                            if ($ver["largo"]<>'--'){
                                echo (", ".$ver["largo"]);
                                }
                                ?></td>
                </tr>
                <?php
                }
                if ($ver["ojos"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Color de ojos:</td>
                    <td id="seccion">
                        <?php echo ($ver["ojos"]);?></td>
                </tr>
                <?php
                }
                if ($ver["estatura"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Estatura:</td>
                    <td id="seccion">
                        <?php echo ($ver["estatura"]); 
                            if ($ver["peso"]<>'--'){
                                echo (", peso: ".$ver["peso"]);
                                }
                                ?></td>
                </tr>
                <?php
                }
                if ($ver["medidas"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Medidas:</td>
                    <td id="seccion">
                        <?php echo ($ver["medidas"]);?></td>
                </tr>
                <?php
                }
                ?>
                <tr>
                    <td><br></td>
                    <td><br></td>
                </tr>
                <?php
                if ($ver["sercicio1"]<>'--'){
                ?>
                <tr>
                    <td><h3 style="font-family: Gill Sans Ultra Bold;">
                        Tarifas</h3></td>
                    <td></td>
                </tr>
                <tr>
                    <td id="enunciado">Servicio:</td>
                    <td id="enunciado">Precio:</td>
                </tr>
                <tr>
                    <td id="seccion">
                        <?php echo ($ver["servicio1"]);?></td>
                    <td id="seccion">
                        <?php echo ($ver["pago1"]);?></td>
                </tr>
                <?php
                for ($i=2;$i<7;$i++){
                    if ($ver["servicio".$i]<>'--'){
                ?>
                <tr>
                    <td id="seccion">
                        <?php echo ($ver["servicio".$i]);?></td>
                    <td id="seccion">
                        <?php echo ($ver["pago".$i]);?></td>
                </tr>
                <?php
                }}}
                if ($ver["pago"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Formas de pago:</td>
                    <td id="seccion">
                        <?php echo ($ver["pago"]);?></td>
                </tr>
                <?php
                }
                ?>
                <tr>
                    <td><br></td>
                    <td><br></td>
                </tr>
                <tr>
                    <td><h3 style="font-family: Gill Sans Ultra Bold;">
                        Servicios</h3></td>
                    <td></td>
                </tr>
                <?php
                if ($ver["horario"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Horario:</td>
                    <td id="seccion">
                        <?php echo ($ver["horario"]);?></td>
                </tr>
                <?php
                }
                if ($ver["encuentro"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Lugar de encuentro:</td>
                    <td id="seccion">
                        <?php echo ($ver["encuentro"]);?></td>
                </tr>
                <?php
                }
                if ($ver["viajes"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Viajes:</td>
                    <td id="seccion">
                        <?php echo ($ver["viajes"]);?></td>
                </tr>
                <?php
                }
                if ($ver["servicios"]<>'--'){
                ?>
                <tr>
                    <td id="enunciado">Servicios:</td>
                    <td id="seccion">
                        <?php echo ($ver["servicios"]);?></td>
                </tr>
                <?php
                }
                ?>
            </table>
            </div>
            <?php
        
            mysql_free_result($sql);
    
        }

        function MostrarFotosIzq(){
            
            $chica = $_GET["id"];
            if (numero($chica)==false) exit;
                    
            $consulta = "select * from escort where id='".$chica."';";
            $sql = mysql_query($consulta);
            $ver = mysql_fetch_array($sql);
            
            ?>
            <br>
            <div id="fotosabajo">
            <?php 
            if ($ver["foto3"]<>''){
            ?>
            <div id="foto3">
                <img alt="<?php echo $ver['nombre'];?>" title="<?php echo $ver['nombre'];?>" src="<?php echo $ver['foto3'];?>"><br>
            </div>
            <?php 
            }
            if ($ver["foto4"]<>''){
            ?>
            <div id="foto4">
                <img alt="<?php echo $ver['nombre'];?>" title="<?php echo $ver['nombre'];?>" src="<?php echo $ver['foto4'];?>"><br>
            </div>
            <?php
            }
            ?>
            </div>
            <?php
            
            mysql_free_result($sql);
        
        }
        
        function MostrarFotoUlt(){
            
            $chica = $_GET["id"];
            if (numero($chica)==false) exit;
                    
            $consulta = "select * from escort where id='".$chica."';";
            $sql = mysql_query($consulta);
            $ver = mysql_fetch_array($sql);
            
            if ($ver["foto5"]<>''){ 
            ?>
            <br>
            <div id="fult">
                <img alt="<?php echo $ver['nombre'];?>" title="<?php echo $ver['nombre'];?>" src="<?php echo $ver['foto5'];?>"><br>
            </div>
            <?php
            }
            mysql_free_result($sql);
        }
        
        function MostrarContactoChica(){
            
            $chica = $_GET["id"];
            if (numero($chica)==false) exit;
                    
            $consulta = "select * from escort where id='".$chica."';";
            $sql = mysql_query($consulta);
            $ver = mysql_fetch_array($sql);
            
            if ($ver["email"]<>'no tiene'){
                
                $titulo = "Han contactado contigo desde la web Mondo-Felice";
                $remite = $_POST["remite"];
                $mail = $_POST["mail"];
                $mensaje = $_POST["mensaje"];
                $envia = $_POST["envia"];
                $cabecera = "FROM: ".$mail;
                $comentario = "Envia: ".$remite."\nSu mensaje: \n".$mensaje;
            
                if (isset($envia)){
                    mail($ver["email"], $titulo, $comentario, $cabecera);
                    echo "Su mensaje se ha enviado con &eacute;xito.\n";
                    echo "Gracias por contactar con nosotros, si es necesario recibir&aacute;s contestaci&oacute;n";

                }else{
                
                ?>
                    <div id="contacchica">
                    
                    <form action='?' method="POST">
                    <table style="color: rgb(153, 153, 0);">
                        <tr>
                            <td></td>
                            <td><h2 style="color: rgb( 153, 153, 0);">Contacta con <?php echo ($ver["nombre"]);?></h2></td>
                        </tr>
                        <tr>
                            <td>Nombre:</td>
                            <td><input type="text" name="remite"></input></td>
                        </tr>
                        <tr>
                            <td>E-mail:</td>
                            <td><input type="text" name="mail"></input></td>
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
                <?php
                }
            }
        
            mysql_free_result($sql);
                
        }
        
        
    }


?>