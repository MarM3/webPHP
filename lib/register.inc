<?php

    require ("novocity.inc");
    require ("func.php");
    
    class registro extends mondo{
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
            $this -> MostrarConAdvert();
            $this -> MostrarRecogeDatos();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
        }
    
        function MostrarRecogeDatos(){
            $email = $_POST['email'];
            if (opsmail($email)==false){
                echo "La direcci&oacute;n de correo introducida no es correcta, vuelva atras e intentelo de nuevo.";
                exit;
            }
            $name = $_POST['name'];
            if (nosql($name)==false){
                echo "El nombre introducido no es correcto, reviselo.";
                exit;
            }
            $telefono = $_POST['telefono'];
            if (numero($telefono)==false) {
                echo "El telefono introducido no es correcto. Intentelo de nuevo";
                exit;
            }
            $agencia = $_POST['agencia'];
            if (nosql($agencia)==false){
                $agencia = "--";
            }
            $sexo = $_POST['sexo'];
            $orientacion = $_POST['orientacion'];
            $edad = $_POST['edad'];
            $origen = $_POST['origen'];
            $estudios = $_POST['estudios'];
            $idiomas = $_POST['idiomas'];
            if (nosql($idiomas)==false){
                $idiomas = "--";
            }
            $profesion = $_POST['profesion'];
            if (nosql($profesion)==false){
                $profesion = "--";
            }
            $pelo = $_POST['pelo'];
            $largo = $_POST['largo'];
            $ojos = $_POST['ojos'];
            $peso = $_POST['peso'];
            if (nosql($peso)==false){
                $peso = "--";
            }
            $medidas = $_POST['medidas'];
            if (nosql($medidas)==false){
                $medidas = "--";
            }
            $servicio1 = $_POST['servicio1'];
            if (nosql($servicio1)==false){
                $servicio1 = "--";
            }
            $pago1 = $_POST['pago1'];
            if (nosql($pago1)==false){
                $pago1 = "--";
            }
            $servicio2 = $_POST['servicio2'];
            if (nosql($servicio2)==false){
                $servicio2 = "--";
            }
            $pago2 = $_POST['pago2'];
            if (nosql($pago2)==false){
                $pago2 = "--";
            }
            $servicio3 = $_POST['servicio3'];
            if (nosql($servicio3)==false){
                $servicio3 = "--";
            }
            $pago3 = $_POST['pago3'];
            if (nosql($pago3)==false){
                $pago3 = "--";
            }
            $servicio4 = $_POST['servicio4'];
            if (nosql($servicio4)==false){
                $servicio4 = "--";
            }
            $pago4 = $_POST['pago4'];
            if (nosql($pago4)==false){
                $pago4 = "--";
            }
            $servicio5 = $_POST['servicio5'];
            if (nosql($servicio5)==false){
                $servicio5 = "--";
            }
            $pago5 = $_POST['pago5'];
            if (nosql($pago5)==false){
                $pago5 = "--";
            }
            $servicio6 = $_POST['servicio6'];
            if (nosql($servicio6)==false){
                $servicio6 = "--";
            }
            $pago6 = $_POST['pago6'];
            if (nosql($pago6)==false){
                $pago6 = "--";
            }
            $fpago = $_POST['fpago'];
            if (nosql($fpago)==false){
                $fpago = "--";
            }
            $ciudad = $_POST['ciudad'];
            if (nosql($ciudad)==false){
                $ciudad = "--";
            }
            $provincia = $_POST['provincia'];
            if (nosql($provincia)==false){
                $provincia = "--";
            }
            $horario = $_POST['horario'];
            if (nosql($horario)==false){
                $horario = "--";
            }
            $encuentro = $_POST['encuentro'];
            if (nosql($encuentro)==false){
                $encuentro = "--";
            }
            $viajes = $_POST['viajes'];
            $presentacion = $_POST['presentacion'];
            if (nosql($presentacion)==false){
                $presentacion = "--";
            }
            $destacado = $_REQUEST['destacado'];
            $precio = $_REQUEST['precio'];
            $fecha = date(d-m-Y);
            $renovar = date(d-m-Y);
	
            if ($_POST['destacado']=='No'){
		$coste = $precio;
            }else {
		$coste = $precio + $destacado;
            }

            $sql = "insert into escort (nombre, fecha, nom_agencia, telefono, email, sexo, orientacion, edad, origen, idiomas, 
                estudios, profesion, pelo, largo, ojos, estatura, peso, medidas, servicio1, pago1, servicio2, pago2, servicio3, 
                pago3, servicio4, pago4, servicio5, pago5, servicio6, pago6, pago, ciudad, provincia, horario, encuentro, viajes,
                servicios, presentacion, portada, renovar, destacado, alta, pago_total) values 
                ('$nombre', '$fecha', '$agencia', '$telefono', '$email', '$sexo', '$orientacion', '$edad', '$origen', '$idiomas',
                '$estudios', '$profesion', '$pelo', '$largo', '$ojos', '$estatura', '$peso', '$medidas', '$servicio1', '$pago1',
                '$servicio2', '$pago2', '$servicio3', '$pago3', '$servicio4', '$pago4', '$servicio5', '$pago5', '$servicio6', '$pago6',
                '$pago', '$ciudad', '$provincia', '$horario', '$encuentro', '$viajes', '$servicios', '$presentacion', '$presentacion',
                '$renovar', 'Anuncio: $precio Destacado: $destacado', 'n', $coste);";
            $consulta = mysql_query($sql);
    
            $mensaje = "Nombre: ".$nombre."<br>"; $mensaje.= "Estatura: ".$estatura."<br>"; $mensaje.= "Ciudad: ".$ciudad."<br>";
            $mensaje.= "Agencia: ".$agencia."<br>"; $mensaje.= "Peso: ".$peso."<br>"; $mensaje.= "Provincia: ".$provincia."<br>";
            $mensaje.= "Telefono: ".$telefono."<br>"; $mensaje.= "Medidas: ".$medidas."<br>"; $mensaje.= "Horario: ".$horario."<br>";
            $mensaje.= "E-mail: ".$email."<br>"; $mensaje.= "Servicio1: ".$servicio1."<br>"; $mensaje.= "Lugar encuentro: ".$encuentro."<br>";
            $mensaje.= "Sexo: ".$sexo."<br>"; $mensaje.= "Pago1: ".$pago1."<br>"; $mensaje.= "Viajes: ".$viajes."<br>";
            $mensaje.= "Orientacion: ".$orientacion."<br>"; $mensaje.= "Servicio2: ".$servicio2."<br>"; $mensaje.= "Servicios: ".$servicios."<br>";
            $mensaje.= "Edad: ".$edad."<br>"; $mensaje.= "Pago3: ".$pago3."<br>"; $mensaje.= "Presentacion: ".$presentacion."<br>";
            $mensaje.= "Origen: ".$origen."<br>"; $mensaje.= "Servicio4: ".$servicio4."<br>"; 
            $mensaje.= "Idiomas: ".$idiomas."<br>"; $mensaje.= "Pago4: ".$pago4."<br>";
            $mensaje.= "Estudios: ".$estudios."<br>"; $mensaje.= "Servicio5: ".$servicio5."<br>";
            $mensaje.= "Profesion: ".$profesion."<br>"; $mensaje.= "Pago5: ".$pago5."<br>";
            $mensaje.= "Pelo: ".$pelo."<br>"; $mensaje.= "Servicio6: ".$servicio6."<br>";
            $mensaje.= "Largo: ".$largo."<br>"; $mensaje.= "Pago6: ".$pago6."<br>";
            $mensaje.= "Ojos: ".$ojos."<br>"; $mensaje.= "Pago: ".$pago."<br>";
    
            echo "<div id='articulo'>El registro se ha realizado sarisfactoriamente. Si a&ntilde;adiste el E-mail recibir&aacute;s un correo con los datos.<br></div>";
            mail("info@mondo-felice.com", "Atenci—n al Cliente de Mondo-Felice: Formulario de registro", $mensaje);
            mail($email, "Atenci—n al Cliente de Mondo-Felice: Formulario de registro", $mensaje);
        }
        
    }

?>