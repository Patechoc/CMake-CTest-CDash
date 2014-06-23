General way to include a library:
http://code.google.com/p/m-a-d-n-e-s-s/wiki/ExternalLibraries

BOOST Documentation:
http://www.boost.org/doc/libs/1_55_0/more/getting_started/unix-variants.html

### 01 --- CREATE A SIMPLE TEST FOR BOOST
$ whereis boost
boost: /usr/include/boost
c++ -I path/to/boost_1_55_0 exampleBOOST_01.cpp -o exampleBOOST_01
so:
c++ -I /usr/include/boost exampleBOOST_01.cpp -o exampleBOOST_01

run it with:
$ echo 1 2 3 | ./exampleBOOST_01



### 02 --- TESTING A CALL TO A BOOST LIBRARY
