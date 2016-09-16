<?
    require ("novocity.inc");

    class formulario extends mondo{
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
            $this -> MostrarRegistraAnuncio();
            $this -> MostrarEroAdd();
            $this -> MostrarFooter();
            echo "</body>\n</html>\n";
        }
        
        function MostrarRegistraAnuncio(){
            $query1 = "select * from tarifas;";
            $sql1 = mysql_query($query1);
	
            $query2 = "select * from destacados;";
            $sql2 = mysql_query($query2);
            
            ?>
            <div id="cuerpo">
            <form action="registro.php" method="POST">
            <table>
            <tr>
                <td id="enunciado">Datos de Contacto</td>
                <td></td>
            </tr>
            <tr>
                <td>Nombre: </td>
                <td><input type="text" name="name"></td>
            </tr>
            <tr>
                <td>Telefono: </td>
                <td><input type="text" name="telefono"></td>
            </tr>
            <tr>
                <td>Correo Electr&oacute;nico: </td>
                <td><input type="text" name="email"></td>
            </tr>
            <tr>
                <td>Nombre Agencia: </td>
                <td><input type="text" name="agencia"></td>
            </tr>
            <tr>
                <td id="enunciado">Datos Generales</td>
                <td></td>
            </tr>
            <tr>
                <td>Sexo: </td>
                <td><select name="sexo"><option SELECTED>Mujer</option><option>Hombre</option><option>Transexual</option></select></td>
            </tr>
            <tr>
                <td>Orientaci&oacute;n: </td>
                <td><select name="orientacion"><option SELECTED>Heterosexual</option><option>Bisexual</option><option>Homosexual</option></select></td>
            </tr>
            <tr>
                <td>Edad: </td>
                <td><select name="edad"><option Selected>--</option><option>18</option><option>19</option><option>20</option><option>21</option><option>22</option><option>23</option><option>24</option>
                        <option>25</option><option>26</option><option>27</option><option>28</option><option>29</option><option>30</option><option>31</option><option>32</option><option>33</option>
                        <option>34</option><option>35</option><option>36</option><option>37</option><option>38</option><option>39</option><option>40</option><option>41</option><option>42</option>
                        <option>43</option><option>44</option><option>45</option><option>46</option><option>47</option><option>48</option><option>49</option><option>50</option><option>51</option>
                        <option>52</option> <option>53</option><option>54</option></select></td>
            </tr>
            <tr>
                <td>Pa&iacute;s de or&iacute;gen: </td>
                <td><select name="origen"><option Selected>--</option><option>Alemania</option><option>Andorra</option><option>Argentina</option><option>Australia</option><option>Austria</option>
                        <option>Belgica</option><option>Bielorrusia</option><option>Bolivia</option><option>Bosnia y Herzegovina</option><option>Brasil</option><option>Bulgaria</option>
                        <option>Canada</option><option>Chile</option><option>China</option><option>Colombia</option><option>Corea del Sur</option><option>Costa Rica</option><option>Croacia</option>
                        <option>Cuba</option><option>Dinamarca</option><option>Ecuador</option><option>Egipto</option><option>El Salvador</option><option>Eslovaquia</option><option>Eslovenia</option>
                        <option>Espa&ntilde;a</option><option>Estados Unidos</option><option>Estonia</option><option>Etiopia</option><option>Filipinas</option><option>Finlandia</option>
                        <option>Francia</option><option>Guatemala</option><option>Honduras</option><option>Hungria</option><option>India</option><option>Indonesia</option><option>Irlanda</option>
                        <option>Israel</option><option>Italia</option><option>Jamaica</option><option>Japon</option><option>Kenia</option><option>Letonia</option><option>Lituania</option>
                        <option>Luxemburgo</option><option>Macedonia</option><option>Mexico</option><option>Moldavia</option><option>Monaco</option><option>Montenegro</option><option>Nicaragua</option>
                        <option>Nigeria</option><option>Noruega</option><option>Nueva Zelanda</option><option>Paises Bajos</option><option>Panama</option><option>Paraguay</option><option>Peru</option>
                        <option>Polonia</option><option>Portugal</option><option>Puerto Rico</option><option>Reino Unido</option><option>Republica Checa</option><option>Republica Dominicana</option>
                        <option>Rumania</option><option>Rusia</option><option>Senegal</option><option>Serbia</option><option>Sudafrica</option><option>Suecia</option><option>Suiza</option>
                        <option>Tailandia</option><option>Taiwan</option><option>Tanzania</option><option>Turquia</option><option>Ucrania</option><option>Uruguay</option><option>Venezuela</option><option>Vietnam</option>
			</select></td>
            </tr>
            <tr>
                <td>Estudios: </td>
                <td><select name="estudios"></select><option Selected>--</option><option>Primarios</option><option>Secundarios</option><option>Universitarios</option></select></td>
            </tr>
            <tr>
                <td>Idiomas: </td>
                <td><textarea cols="20" rows="3" name="idiomas"></textarea></td>
            </tr>
            <tr>
                <td>Profesi&oacute;n: </td>
                <td><textarea cols="20" rows="3" name="profesion"></textarea></td>
            </tr>
            <tr>
                <td id="enunciado">Apariencia</td>
                <td></td>
            </tr>
            <tr>
                <td>Color de Cabello: </td>
                <td><select name="pelo"><option  Selected>--</option><option>Rubia</option><option>Pelirroja</option><option>Castana</option><option>Morena</option></select></td>
            </tr>
            <tr>
                <td>Largo del Cabello: </td>
                <td><select name="largo"><option  Selected>--</option><option>Corto</option><option>Media Melena</option><option>Largo</option></select></td>
            </tr>
            <tr>
                <td>Color de ojos: </td>
                <td><select name="ojos"><option  Selected>--</option><option>Azules</option><option>Verdes</option><option>Marrones</option><option>Grises</option><option>Negros</option></select></td>
            </tr>
            <tr>
                <td>Estatura: </td>
                <td><select name="estatura"><option Selected>--</option><option>150 </option><option >151 </option><option >152 </option><option >153 </option><option >154 </option>
                            <option >155 </option><option >156 </option><option >157 </option><option >158 </option><option >159 </option><option >160 </option><option >161 </option>
                            <option >162 </option><option >163 </option><option >164 </option><option >165 </option><option >166 </option><option >167 </option><option >168 </option>
                            <option >169 </option><option >170 </option><option >171 </option><option >172 </option><option >173 </option><option >174 </option><option >175 </option>
                            <option >176 </option><option >177 </option><option >178 </option><option >179 </option><option >180 </option><option >181 </option><option >182 </option>
                            <option >183 </option><option >184 </option><option >185 </option><option >186 </option><option >187 </option><option >188 </option><option >189 </option>
                            <option >190 </option><option >191 </option><option >192 </option><option >193 </option><option >194 </option><option >195 </option><option >196 </option>
                            <option >197 </option><option >198 </option><option >199 </option><option >200 </option></select></td>
            </tr>
            <tr>
                <td>Peso: </td>
                <td><input type="text" name="peso"></td>
            </tr>
            <tr>
                <td>Medidas: </td>
                <td><input type="text" name="medidas"></td>
            </tr>
            <tr>
                <td id="enunciado">Tarifas</td>
                <td></td>
            </tr>
            <tr>
                <td id="tab">Tipo de servicio</td>
                <td id="tab">Precio</td>
            </tr>
            <tr>
                <td><input type="text" name="servicio1"></td>
                <td><input type="text" name="pago1"></td>
            </tr>
            <tr>
                <td><input type="text" name="servicio2"></td>
                <td><input type="text" name="pago2"></td>
            </tr>
            <tr>
                <td><input type="text" name="servicio3"></td>
                <td><input type="text" name="pago3"></td>
            </tr>
            <tr>
                <td><input type="text" name="servicio4"></td>
                <td><input type="text" name="pago4"></td>
            </tr>
            <tr>
                <td><input type="text" name="servicio5"></td>
                <td><input type="text" name="pago5"></td>
            </tr>
            <tr>
                <td><input type="text" name="servicio6"></td>
                <td><input type="text" name="pago6"></td>
            </tr>
            <tr>
                <td>Forma de pago: </td>
                <td><input type="text" name="fpago"></td>
            </tr>
            <tr>
                <td id="enunciado">Servicios</td>
                <td></td>
            </tr>
            <tr>
                <td>Ciudad: </td>
                <td><input type="text" name="ciudad"></td>
            </tr>
            <tr>
                <td>Provincia: </td>
                <td><input type="text" name="provincia"></td>
            </tr>
            <tr>
                <td>Lugar de encuentro: </td>
                <td><textarea cols="20" rows="3" name="encuentro"></textarea></td>
            </tr>
            <tr>
                <td>Horario: </td>
                <td><textarea name="horario" rows="3" cols="20"></textarea></td>
            </tr>
            <tr>
                <td>Viajes: </td>
                <td><select name="viajes"><option SELECTED>No</option><option>Por Espa&ntilde;a</option><option>Por Europa</option><option>Por todo el Mundo</option></select></td>
            </tr>
            <tr>
                <td id="enunciado">Presentaci&oacute;n: </td>
                <td></td>
            </tr>
            <tr>
                <td>Presentaci&oacute;n: </td>
                <td><textarea name="presentacion" rows="20" cols="70"></textarea></td>
            </tr>
            <tr>
		<td>Tiempo del anuncio: </td>
                <td>
		<?php
			while ($precio = mysql_fetch_array($sql1)){
				echo "\n\n\n\n<input type='radio' name='precio' value='".$precio['precio']."'>".$precio['periodo'];
			}
		?></td>
	</tr>
	<tr>
		<td>Destacado:</td>
		<td><input type="radio" name="destacado" value="No">No
		<?php
			while ($destacado = mysql_fetch_array($sql2)){
				echo "\n\n\n\n<input type='radio' name='destacado' value='".$destacado['precio']."'>".$destacado['tipo'];
			}
		?></td>
	</tr>
            <tr>
                <td><input type="submit" value="Enviar" name="enviar"></td>
                <td><input type="reset" value="Borra" name="borra"></td>
            </tr>
        </table>
    </form>
    </div>
            <?php
        }
    }

?>