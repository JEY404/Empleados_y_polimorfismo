# Empleados_y_polimorfismo
En este Repositorio de GitHub se encuentra el Desarrollo de trabajo para la docente Luisa Rincon sobre polimorfismo donde se nos indico hacer una aplicación de consola la cual administre y calcule una nomina con diferentes empleados.
## Evidencia de ejecución
-Una captura de pantalla o bloque de salida de consola donde se vea la nómina procesada.  
-El salario calculado para al menos ocho empleados.  
-Una tabla con los datos de prueba usados. 
-El total de la nómina.  
R/  <img width="1918" height="880" alt="image" src="https://github.com/user-attachments/assets/38422daa-3fbf-4ce2-9d31-b6278b2be406" />

## Explicación del diseño

### ¿Cuál es la clase base y por qué?

R/ La clase base es la clase `Empleado` la cual tiene en si mismo el “molde” con todos los atributos y metodos que poseen las demas clases que entran dentro de empleado. Esta clase contiene atributos como el nombre, el id y el salario base, ademas de metodos como `mostrarDatos()` y `calcularSalario()`.
Las demas clases como `JuniorDev`, `SeniorDev`, `Tester` y `LideresTecnicos` heredan de `Empleado` ya que todos estos tipos siguen siendo empleados pero cada uno calcula su salario de forma distinta.


### ¿Qué método se sobrescribe en las clases derivadas?

R/ El metodo que se sobrescribe es `calcularSalario()`, ya que aunque todos los empleados tienen salario base, cada tipo de empleado tiene una forma distinta de calcular el salario final dependiendo del bono que se le agrega.

### ¿Dónde se evidencia el polimorfismo en el programa?

R/ El polimorfismo se evidencia en el vector de la clase `Nomina`, el cual almacena punteros de tipo `Empleado*`. asi con esto se pueden guardar objetos de diferentes tipos derivados dentro del mismo vector.
Tambien se evidencia cuando se recorren los empleados y se usa:

`
emp->calcularSalario();
`

`
emp->mostrarDatos();
`

ya que aunque el puntero es de tipo `Empleado*`, el programa ejecuta automaticamente el metodo correspondiente al tipo real del objeto.


### ¿Por qué sería menos adecuado resolver este ejercicio con muchos if o switch para identificar el tipo de empleado?

R/ Seria menos adecuado porque el codigo se volveria mas dificil de mantener y menos escalable, ya que cada vez que se agregara un nuevo tipo de empleado tocaria modificar diferentes partes del programa agregando mas `if` o `switch`.
Con herencia y polimorfismo solo es necesario crear una nueva clase derivada y sobrescribir el metodo `calcularSalario()`, sin necesidad de modificar el resto del sistema. Esto hace el codigo mas limpio, reutilizable y facil de extender.

---

# Dificultad encontrada

R/ Una de las dificultades principales fue entender correctamente como y donde implementar el polimorfismo, especialmente al momento de usar los metodos virtuales.
El problema aparecio cuando intentaba sobrescribir `calcularSalario()` en los `.cpp`, ya que estaba colocando `override` y `virtual` fuera de la clase, lo cual generaba errores de compilacion. Tambien tuve problemas con los constructores de las clases derivadas porque inicialmente no estaba llamando correctamente al constructor de la clase base `Empleado`.
La parte del codigo relacionada con el problema fue la implementacion de las clases derivadas y el manejo de los punteros en la clase `Nomina`.
Despues de revisarlo entendi que:
* override solo se coloca en el .h
* los constructores hijos deben llamar al constructor del padre mediante lista de inicializacion
* el polimorfismo funciona gracias a los metodos virtuales y a los punteros al tipo base

Esto me ayudo a comprender mejor como funciona realmente la herencia y el polimorfismo en C++.

---

# Uso de IA

### Opción B: usé IA como apoyo

R/ Use IA generativa como apoyo en esta actividad. La utilice principalmente para:

* explicar errores de compilacion
* aclarar conceptos de polimorfismo y herencia
* entender mejor el uso de punteros
* revisar ideas del diseño UML
* mejorar la organizacion del proyecto

### Fragmento o idea sugerida por la IA:

La IA me sugirio usar una clase base `Empleado` con un metodo virtual `calcularSalario()` y utilizar un `vector<Empleado*>` para aplicar polimorfismo correctamente dentro de la clase `Nomina`.

### Qué revisé antes de usarlo:

Revise que la estructura tuviera sentido con el enunciado del ejercicio y comprobe mediante pruebas que los metodos sobrescritos funcionaran correctamente dependiendo del tipo de empleado almacenado en el vector.

### Qué cambié o adapté:
Adapte la organizacion de los metodos, el menu del programa y parte de la estructura de las clases derivadas. Tambien ajuste nombres de funciones y la forma en la que se mostraba la nomina para que se adaptara mejor al funcionamiento de mi programa.
