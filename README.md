# Proyecto Mationeta
### Luis Osvaldo Cerna Copado | 14 Oct 2022
#### luis.cerna@cimat.mx

## Código Plantilla
Para lograr obtener objetos en 3D y llegar a los resultados solicitados en el proyecto, inspiramos fuertemente nuestro código en aquel presentado en la referencia 1. En este, se encuentra una plantilla con la que obtendremos una piramide 3D con colores texturas y sombras.

Esta plantilla contiene archivos cabecera que nos hacen mucho más fácil la creación de los Vertex Array, Vertex Buffer y Element Buffer Objects, necesarios para el funcionamiento del código con OpenGL como lo vimos en los tutoriales de TheCherno.

Además de lo anterior, se tiene un cabeceras para el uso de la cámara, las texturas y los shaders. Esta ultima hace uso de archivos especiales que contienen los códigos particulares para el Fragment y Vertex Shader. También contamos con archivos dedicados para los Shaders de la iluminación, que se compilan y activan en la misma cabecera.

Aquí se hizo caso omiso de las texturas, pues con los colores fue suficiente para decorar nuestra marioneta como se deseaba.

Más adelante hablaremos de las cabeceras que no forman parte de la plantilla. Estas se agregaron e implementaron durante el desarrollo del proycto.

## Código Proyecto

El video adjuto en la tarea comenta el codigo a fondo y detalladamente.

## Compilación y uso
En el video se explica las configuración iniciales para poder correr el códgio. Aquí veremos el uso del este.

### Cámara
Desde que nuestra ventana "Proyecto" se abre y aparece nuestra marioneta, el usuario tiene libertad sobre el movimiento de la camara o la visualización de la marioneta. Los controles son los siguientes:

- W- Traslada hacia arriba en y
- S- Traslada hacia abajo en y
- A- Traslada hacia la izquierda en x
- D- Traslada hacia la derecha en x

- R- Traslada hacia atras en z
- F- Traslada hacia en frente en z

- UP- Rota hacia arriba en x
- DOWN- Rota hacia abajo en x
- LEFT- Rota hacia la izquierda en y
- RIGHT- Rota hacia la derecha en y

- Q- Rota hacia la izquierda en z
- E- Rota hacia la derecha en z

- Z- Hace más grande (Escala) la marioneta 
- X- Hace más pequeña (Escala) la marioneta 

### Interfaz
Además de lo anterior el usuario siempre tiene la opción de oprimir la tecla T para mover libremente las partes del cuerpo que desee. Una vez se oprima la tecla T, la interfaz solicitará un dato. Las opciones a ingresar son las siguientes:

- 1 - Brazo Izquierdo
- 2 - Antebrazo Izquierdo
- 3 - Mano Izquierda
- 4 - Brazo Derecho
- 5 - Antebrazo Derecho
- 6 - Mano Derecho
- 7 - Pierna Izquierda
- 8 - Pantorrilla Izquierda
- 9 - Pie Izquierdo
- 10 - Pierna Derecha
- 11 - Pantorrilla Derecha
- 12 - Pie Derecho
- 13 - Cabeza

Cualquier otro número desactivará los controles. Estos controles son los siguientes

- I- Rota hacia arriba en x
- K- Rota hacia abajo en x
- J- Rota hacia la izquierda en y
- L- Rota hacia la derecha en y

- U- Rota hacia la izquierda en z
- O- Rota hacia la derecha en z

Por último existe la opción de regresar la maroneta a su estado original en cualquier momento presionando la tecla G. La ventana se cierra opimiendo la tecla ESC.

### Animación Undu/Redo
Se cuenta con as teclas M y N para ir aplicando una animación previamente preparada con una pila de matrices. La tecla M va tomando la primera matriz en la pila y aplica los cambios. Mientras que la tecla N regresa el cambio hecho la ultima vez, por lo que es posible ver la animación completa al revés. Una vez las pilas estén vacias, estas teclas no tendran ningún efecto.

### Referencias

[1](https://www.youtube.com/watch?v=ZbszezwNSZU&list=PLPaoO-vpZnumdcb4tZc4x5Q-v7CkrQ6M-&index=10)
[2](https://www.youtube.com/watch?v=XpBGwZNyUh0&list=PLPaoO-vpZnumdcb4tZc4x5Q-v7CkrQ6M-&index=1)
[3](https://www.youtube.com/watch?v=Gu9SapXMWkg&list=PL6xSOsbVA1eYSZTKBxnoXYboy7wc4yg-Z&index=12)
