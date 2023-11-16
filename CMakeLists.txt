cmake_minimum_required(VERSION 3.26)
project("Coleccion-de-Ejercicios-STL2")

set(CMAKE_CXX_STANDARD 14)


add_executable(Ejercicio2
        Ejercicio2/main.cpp
        Ejercicio2/circulo.cpp
        Ejercicio2/circulo.h
        Ejercicio2/triangulo.cpp
        Ejercicio2/triangulo.h
        Ejercicio2/rectangulo.cpp
        Ejercicio2/rectangulo.h
        Ejercicio2/cuadrado.cpp
        Ejercicio2/cuadrado.h
        Ejercicio2/rombo.cpp
        Ejercicio2/rombo.h
)

add_executable(Ejercicio5
        ejercicio5/main.cpp

)

add_executable(Ejercicio4
        ejercicio4/main.cpp
        ejercicio4/ciencias.h
)