# algoritmos-caso3


- Computadora seleccionada:

Procesador: 			Intel(R) Core(TM) i5-8400 CPU @ 2.80GHz
Installed memory (RAM): 	16.0 GB (15.8 usable)
System type: 			64-bit Operating System, x64-based processor


- Pasos seguidos en la prueba:

Para comparar a C y C++ respecto al tiempo y memoria utilizados, se ejecutó el mismo código 10 veces
en cada uno de estos lenguajes y se consiguió el promedio de ambos por medio de funciones time() y con el uso
de punteros para la memoria. Para comparar el tiempo de ejecución de C++ con Go y Rust, el mismo código fue ejecutados
2 veces en cada uno de los lenguajes. Se consiguieron los datos por medio de instrucciones, en el caso de C++
se utilizaron instrucciones de time(), en Go .


- Resultados obtenidos:

a)
 
* Tiempo en segundos de C:
1.	6
2.	6
3.	7
4.	6
5.	7
6.	6
7.	7
8.	6
9.	7
10.	7
Promedio = 6.5 s

* Memoria en C:
1.	569192
2.	569192
3.	569192
4.	569192
5.	569192
6.	569192
7.	569192
8.	569192
9.	569192
10.	569192
Promedio = 569192


* Tiempo en segundos de C++:
1.	6
2.	7
3.	6
4.	6
5.	7
6.	6
7.	6
8.	6
9.	7
10.	7
Promedio = 6.4 s

* Memoria en C++:
1.	647004
2.	647004
3.	647004
4.	647004
5.	647004
6.	647004
7.	647004
8.	647004
9.	647004
10.	647004
Promedio = 647004	

Resultados: Según los resultados de las pruebas, C y C++ tiene un tiempo parecido, pero C++ fue más rápido en promedio.
Con respecto a la memoria, C consumió menos memoria que C++ con una diferencia notable.


b)

* Tiempo en segundos de C++:
1.	6.00
2.	7.00
Promedio = 6.50 s


* Tiempo en segundos de Go:
1.	30.85
2.	30.39
Promedio = 30.62 s


* Tiempo en segundos de Rust:
1.	18.82
2.	21.72
Promedio = 20.27 s

Resultados: Según los resultados de las pruebas, C++ es más rápido que Go y Rust por una gran diferencia, y Go fue el más lento de los tres.