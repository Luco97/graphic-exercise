# GraphicTest

## Librerias
Para este programa se utilizó SDL 2 (usado basicamente para renderizar figura es una ventana)

## Description

Programa basico para graficos en C++, donde con puntos creados aleatoriamente se crea una figura que encierra al resto de los puntos (y la figura es creada con los puntos bordes ideales) basandose en la formula del producto cruz entre dos vectores.

### Ejemplo:

<img src="https://cdn.discordapp.com/attachments/907296858970415144/999848792478191616/unknown.png" title="Imagen de ejemplo" alt="Ejemplo de referencia del resultado esperado en el ejercicio">

### Pasos para la solucion
1. Decidir y ordenar los puntos (por eje X o eje Y) ASC o DESC.
- Se entiende que el punto inicial y el punto final siempre van a ser los mejores, entonces:
  - En caso de elegir el eje X para ordenar, la figura se "divide" en dos partes en horizontal
    - En caso de orden ascendente, los mejores puntos que se obtienen son los de la mitad superior
    - En caso de orden descendente, los mejores puntos que se obtienen son los de la mitad inferior
  - En caso de elegir el eje Y para ordenar, la figura se "divide" en dos partes en vertical
    - En caso de orden ascendente, los mejores puntos que se obtienen son los de la mitad derecha
    - En caso de orden descendente, los mejores puntos que se obtienen son los de la mitad izquierda
2. Iterar para cada punto y comparar inicialmente utilizando un vector que va desde nuestro punto "ideal" hacia el ultimo punto en nuestro conjunto de puntos ordenados

Sabemos que si el producto Cruz entre dos vectores 2D resulta positivo o negativo podemos evaluar la orientacion del vector y saber si es ideal.
  
