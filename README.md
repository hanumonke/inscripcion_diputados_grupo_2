Para compilar el proyecto con cmake:

Dirigirse por consola a carpeta build/

Luego ejecutar:

cmake .. (para cargar la cache)

cmake --build . (para compilar el programa)

Dentro de la carpeta build/ aparecera el ejecutable con el nombre especificado en el archivo CMakeLists.txt, en la parte add_executable(). En este caso se llama prueba. Ejecutan el archivo y verifican.


Para compilar con g++ o un compilador de C++ equivalente:

g++ main.cpp Inscripcion.cpp Lista.cpp -o prueba
