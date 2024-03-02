cmake . -B build/ 

cmake --build build/.

cd build/

make install
cd ..

export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
