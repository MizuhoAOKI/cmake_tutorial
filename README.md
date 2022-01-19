# Tutorial of GCC , Make and CMake.
GCC, Make and CMake are famous and useful tools to build C/C++ programs.

This note helps you to understand functions and how to use them properly.

## Sample program

C++ プログラム群ここに貼り付け. 
フォルダ構造も忘れるな. 
Githubに上げるとき, publicで良いが実証実験のデータを抜くこと.


Now, we build the above program in three different ways.
1. gcc
2. gcc + make
3. gcc + make + cmake

## Way 1. Build with gcc
### What is [GCC](https://gcc.gnu.org/)?
It is a famous compiler of C, C++ and some other programming languages.

### Environment setup
Install gcc.
- Windows : 
    - `scoop install gcc`
- Mac OS : 
    - `brew install gcc`
- Ubuntu : 
    - `sudo apt install build-essential`

### Procedures

1. Move to the directory to output intermediate files and executables.
    - `cd build`

2. Build shared libraries
    - `g++ -shared -o libV.dll  -I../include -c ../src/viete.cpp`
    - `g++ -shared -o libR.dll  -I../include -c ../src/ramanujan.cpp`
    - `g++ -shared -o libG.dll  -I../include -c ../src/gregory.cpp`
    - Use ".so" extention instead when your OS is linux or mac.


3. Build a static library.
    - `g++ -static -o factorial.o -c -I../include ../src/factorial.cpp`
    - `ar rcs libfactorial.a factorial.o`


4. Generate executable.
    - `g++ -o calcpi ../src/main.cpp -I../include -L. -lV -lR -lG -lfactorial`
    - Note : -I option indicates the location of header files.
    - Note : -L option indicates the location of shared libraries.


## Way 2. Build with gcc + make
### What is [Make](https://www.gnu.org/software/make/)?
It is an useful tool to help compiling C/C+ programs.

### Advantages of make
- Fewer build commands. Just type "make".
- Avoid unnecessary build processes => Faster builds!

### Environment setup
Install gcc and make.
- Windows : 
    - `scoop install gcc make`
- Mac OS : 
    - `brew install gcc make`
- Ubuntu : 
    - `sudo apt install build-essential`

### Procedures
1. 
1. 



## Way 3. Build with gcc + make + cmake
### What is [CMake](https://cmake.org/)?
It is an excellent tool extending make to help building C/C++ projects.

### Advantages of CMake
- Easier to set up build environment for complexed projects of C/C++.
    - CMake generates Makefile automatically.

For example, 
- Better support for complex directory structures.
- Easy to specify dependant libraries.
- Multiple executables can be generated at once.

### Environment setup
Install gcc, make, and cmake.
- Windows : 
    - `scoop install gcc make cmake`
- Mac OS : 
    - `brew install gcc make cmake`
- Ubuntu : 
    - `sudo apt install build-essential cmake`

### Procedures
1. 
1. 







