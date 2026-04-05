### Respuestas ejercicio 2
.gitignore es un archivo de texto que nos permite indicarle a Github que archivos ignorar en nuestro repositorio.Los archivos .gitignore contienen patrones que establecen coincidencias con los nombres de archivo de nuestro repositorio para determinar si deberían ignorarse o no.

Es conveniente incluirlo porque hay muchas cosas que vamos a preferir no subir a nuestro repositorio, por ejemplo archivos con datos personales, claves de acceso o ejecutables.
Se lo debe crear antes de que el archivo que quiero que sea ignorado se le haga commit.

Se incluye el archivo .gitignore en la carpeta root del repositorio y escribo en él lo que quiero que ignore. (Por ejemplo *.txt evita todos los archivos de extension txt)

#### Respuestas ejercicio 3
a) Codigo misterioso. Empieza asignando una variable entera con el valor 452. Llama a la funcion procesar_enigma con el parametro siendo la direccion de la variable por lo que puede cambiar el valor dentro de esta funcion. Dentro esta la funcion alpha, beta y gamma.
Entra a la funcion alpha, esta funcion invierte el numero, pasa a ser 254. La llamare 'invertir'
Entra a la funcion beta, esta divide el numero en 2, pasa a ser 127. La llamare 'mitad'
Entra a la funcion gamma, esta calcula la suma de cada digito individual del numero que seria 10 y se lo suma a 127 quedando 137. La llamre 'suma_digitos'.
Entonces procesar_enigma devuelve 137. La llamare 'varias_operaciones'.

b) Codigo sin funcionar. Errores: Falta la libreria de stdio.h.
El primer scanf esta mal escrito, pues no esta tomando la direccion de memoria de la variable por lo que no podra guardar correctamente el valor, tengo que poner '&valor1'.
La linea donde define la suma como la suma de los valores valor1 y valor2 le falta ';' al final de linea.
La funcion duplicar_numero no duplica el valor que se le ingresa porque se le pasa el numero 'por valor', para solucionarlo tengo que hacer que pase por referencia '&valor1' y añadir la notacion de punteros cuando se define la funcion con (*numero).
La ultima linea de return 0 le falta ';' al final.

Lo subi con nombre de commit 'ejercicio completado' porque no era el ejercicio 4.
