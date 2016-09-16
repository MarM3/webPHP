<?php

class mondo{
    
    var $titulo = "Mondo-Felice. Descubre un mundo lleno de sensaciones";
    var $palabrasClave = "contactos sexuales, espa&ntilde;a escorts, escort, contactos maduras, relaciones sexuales, relaciones esporadicas, contactos adultos, prostitutas";
      
    function setTitulo($nuevoTitulo){
    
        $this -> titulo = $nuevoTitulo;
    
    }
    
    function setPalabrasClave($NuevoPalabrasClave){
    
        $this -> palabrasClave = $NuevoPalabrasClave;
    
    }
    
    
    function MostrarTitulo(){
    
        ?>
        <title><?php echo $this -> titulo; ?></title>
        <?php
    
    }
    
    function MostrarPalabrasClave(){
    
        ?>
        <META name="keywords" content="<?php echo $this -> palabrasClave; ?>">
        <META name="description" content="Preciosas Escorts independientes har&aacute;n tus fantas&iacute;as realidad. Todo sobre el Relax, Acompa&ntilde;antes, contactos, mujeres maduras">
        <?php
    
    }
    
    function MostrarMeta(){
    
       ?>
        <META http-equiv="Content-Type" content="text/html;charset=iso-8859-1">
        <META name="robots" content="all">
        <META name="author" content="Mondo-Felice.com">
        <META name="geo.region" content="ES">
        <META name="geo.position" content="40.463667;-3.74922">
        <META name="ICBM" content="40.463667, -3.74922">
        <link rel="icon" type="image/x-icon" href="http://www.mondo-felice.com/lib/images/favicon2.ico">
       <?php 
    
    }
    
    function MostrarEstilos(){
    
    ?>
    <link href="http://www.mondo-felice.com/lib/css/mondo.css" media="screen" type="text/css" rel="stylesheet">
    <?php
    
    }
    
    function MostrarCabecera(){
    
        ?>
        <div id="cabeza">
            <table><tr><td>
                <a href="http://www.mondo-felice.com"><img alt="Logo Mondo Felice" src="http://www.mondo-felice.com/lib/images/LOGO2.jpg"></a><br />
                <h2>Mondo-Felice. Descubre un mundo lleno de sensaciones</h2>
            </td></tr></table>
        </div> 
        <?php
    
    }
    
    function MostrarMenu(){
        ?>
        <ul id="menu">
            <li><a href="http://www.mondo-felice.com/">Inicio</a></li>
            <li><a href="#">Provincias</a>
                <ul>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Albacete">- Albacete</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Asturias">- Asturias</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Badajoz">- Badajoz</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Baleares">- Baleares</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Bilbao">- Bilbao</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Burgos">- Burgos</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Cantabria">- Cantabria</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Caceres">- C&aacute;ceres</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Coruna">- La Coru&ntilde;a</a></li>
                    <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Rioja">- La Rioja</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Lerida">- Lerida</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Lugo">- Lugo</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Guadalajara">- Guadalajara</a></li>
                    <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Madrid">- Madrid</a></li>
                    <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Navarra">- Navarra</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=San_Sebastian">- San Sebastian</a></li>
                    <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Zaragoza">- Zaragoza</a></li>
	  <li><a href="http://www.mondo-felice.com/provincia.php?provincia=Vitoria">- Vitoria</a></li>
                </ul>
            </li>
            <li><a href="http://www.mondo-felice.com/anuncio.php">Anunciate</a></li>
            <li><a href="http://elblog.mondo-felice.com/">Blog</a></li>
            <li><a href="http://www.mondo-felice.com/sexshop/">Sexshop</a></li>
            <li><a href="http://www.mondo-felice.com/webcam.php">Webcam</a></li>
            <li><a href="http://www.mondo-felice.com/enlace.php">Webs Amigas</a></li>
        </ul>
        <?php
    }
    
    function IsUrlCurrentPage($url){
    
        if (strpos( $GLOBALS['SCRIPT_NAME'], $url) == false){
            return true;
        }else{
            return false;
        }
    
    }
    
    function MostrarBoton($nombre, $url){
    
    ?>
    <div id="menu">
        <ul class="menu">
            <li><a href="<?php echo $url; ?>"><span><?php echo $nombre; ?></span></a></li>
        </ul>
    </div>
    <?php
    
    }
    
    function MostrarFooter(){
	
        
        ?>
        <div id="pie">
        <div id="p1">
            <h4>Copyright &reg; Mondo-Felice 2011-2012 | <a href="http://www.mondo-felice.com/mapa.php">Mapa Sitio</a> | <a href="http://www.mondo-felice.com/contacto.php">Contacta con nosotros</a>
			<h4><a href="http://www.mondo-felice.com/aviso.html">Aviso Legal</a> | <a href="http://www.mondo-felice.com/condiciones.html">Condiciones de Venta</a> | <a href="http://www.mondo-felice.com/privacidad.html">Pol&iacute;tica de Privacidad</a></h4>
		</div>
        <div id="p2">
            <a href="https://www.facebook.com/pages/mondo-felice/191523844224149"><img src="lib/images/RecSoc/face32.png" alt="Facebook" title="Me gusta en Facebook"></a>
            <a href="http://www.twitter.com"><img src="lib/images/RecSoc/twit32.png" alt="Sigue a @mondofelice en Twitter" title="Sigue a @mondofelice en Twitter"></a>
            <a href="http://feeds.feedburner.com/Http/wwwmondo-felicecom"><img src="lib/images/RecSoc/rss32.png" alt="RSS" title="A&ntilde;adenos a RSS"></a>
            <a href="http://delicious.com/"><img src="lib/images/RecSoc/del32.png" alt="A&ntilde;ade a t&uacute; Del.icio.us" title="A&ntilde;ade a t&uacute; Del.icio.us"></a></h4>
        </div>
        <div id="p3">
            <a href="http://validator.w3.org/check?uri=referer">
                <img src="http://www.w3.org/Icons/valid-html401" alt="Valid HTML 4.01 Transitional" title="Valido HTML 4.01" height="31" width="88"/></a>
        
            <a href="http://jigsaw.w3.org/css-validator/check/referer">
                <img style="border:0;width:88px;height:31px" src="http://jigsaw.w3.org/css-validator/images/vcss" alt="¡CSS V&aacute;lido!" title="CSS Valido"/></a>
        </div>
        </div>
        <?php
        
    }
    
    function MostrarAbreSesion(){
    
        session_start();
    
    }
    
    function MostrarConexionEscort(){
    
        $conecEscort = mysql_connect ("localhost", "mondofel_tips", "MYfr33dom-sp4CE") 
                    or die ("No se puede conectar con el servidor"); 
            
            
                mysql_select_db ("mondofel_publicidad") 
                    or die ("No se puede seleccionar la base de datos");
    
    }
    
    function MostrarConexionTienda (){
    
        $conecTienda = mysql_connect ("localhost", "mondofel_tips", "MYfr33dom-sp4CE") 
                    or die ("No se puede conectar con el servidor"); 
            
            
                mysql_select_db ("mondofel_shop") 
                    or die ("No se puede seleccionar la base de datos");
    
    }
    
    function MostrarConexionUsuarios(){
    
        $conecUsu = mysql_connect ("localhost", "mondofel_root", "A1234") 
                    or die ("No se puede conectar con el servidor"); 
            
            
                mysql_select_db ("mondofel_usuarios") 
                    or die ("No se puede seleccionar la base de datos");
    
    }
    
    function MostrarMensaje(){
    
    ?>
        <div id="mensaje">
            <p>Dile que la viste en Mondo-Felice</p>
        </div>
        <br>
    <?php
    
    }
    
    function MostrarBoletin(){
    
        ?>
        <div class="news">
        <form style="border: 1px solid #ccc; padding: 3px; text-align: center;" method="post" action="http://www.gogvo.com/subscribe.php">
            <h4><center>Bolet&iacute;n de Mondo-Felice</center></h4>
            <h5><center>Suscr&iacute;bete!</center></h5>
            <input type="hidden" name="CampaignCode" value="1103da683f38">
            <input type="hidden" name="FormId" value="41051">
            <input type="hidden" name="AffiliateName" value="MarM3">
            <table align="center">
                <tr>
                    <td style="color: rgb(91,0,91); font-family: Gill Sans MT">Nombre Completo:</td>
                    <td style="color: rgb(91,0,91); font-family: Gill Sans MT"><input style="width:90px"  type="text" name="FullName"></td>
                </tr>
                <tr>
                    <td style="color: rgb(91,0,91); font-family: Gill Sans MT">Email:</td>
                    <td style="color: rgb(91,0,91); font-family: Gill Sans MT"><input style="width:90px" type="text" name="Email"></td>
                </tr>
                <tr>
                    <td align="center" colspan="2" >
                        <input type="submit" value="Enviar Datos"></td>
                </tr>
            </table>
            <img src="http://www.gogvo.com/show_form.php?id=41051">
        </form>
        </div>
        <?php
    
    }
    
    function MostrarStatics(){
    
        ?>
        <script type="text/javascript">

            var _gaq = _gaq || [];
            _gaq.push(['_setAccount', 'UA-24819696-1']);
            _gaq.push(['_setDomainName', '.mondo-felice.com']);
            _gaq.push(['_trackPageview']);

            (function() {

                var ga = document.createElement('script'); ga.type = 'text/javascript';
                    ga.async = true;

                ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';

                var s = document.getElementsByTagName('script')[0];
                    s.parentNode.insertBefore(ga, s);

            })();
        </script>
        <?php
    
    }
    
    function MostrarPubliHetero(){
    
        ?>
        <div class="publihetero">
            <iframe frameborder="0" src="http://recursos.paraisowebcam.com/banners_mariayamigas/banners.htm?size=160x600&formato=GIF&alias=###mondofelice###" marginheight="0" marginwidth="0" scrolling="No" width="160" height="600"></iframe></div>
        <?php
    }
    
    function MostrarEroAdd(){
    
        ?>
        <div class="add">
            <!-- BEGIN EroAdvertising ADSPACE CODE -->
            <script type="text/javascript" language="javascript" charset="utf-8" src="http://adspaces.ero-advertising.com/adspace/135511.js"></script>
            <!-- END EroAdvertising ADSPACE CODE -->
        </div>
        <?php
    }
    
    function MostrarConAdvert(){
        $conecEscort = mysql_connect ("localhost", "mondofel_order", "C0!-farmacia") 
                or die ("No se puede conectar con el servidor"); 
            
            
            mysql_select_db ("mondofel_publicidad") 
                    or die ("No se puede seleccionar la base de datos");
    }
    
    function MostrarConSopa(){
        
        $conecTienda = mysql_connect ("localhost", "mondofel_mor", "MYentre-citY") 
                    or die ("No se puede conectar con el servidor"); 
            
            
                mysql_select_db ("mondofel_shop") 
                    or die ("No se puede seleccionar la base de datos");
        
    }
    
}

?>