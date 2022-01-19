Build with g++ only

- Move to the directory to output intermediate files and executables.
    - `cd build`

- Build shared libraries
    - `g++ -shared -o libV.dll  -I../include -c ../src/viete.cpp`
    - `g++ -shared -o libR.dll  -I../include -c ../src/ramanujan.cpp`
    - `g++ -shared -o libG.dll  -I../include -c ../src/gregory.cpp`
    - Use ".so" extention instead when your OS is linux or mac.


- Build a static library.
    - `g++ -static -o factorial.o -c -I../include ../src/factorial.cpp`
    - `ar rcs libfactorial.a factorial.o`


- Generate executable.
    - `g++ -o calcpi ../src/main.cpp -I../include -L. -lV -lR -lG -lfactorial`
    - Note : -I option indicates the location of header files.
    - Note : -L option indicates the location of shared libraries.
