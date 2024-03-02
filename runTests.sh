#Once command to start all tests
cmake . -B build/ 


cmake --build build/.

Exe=$(ls build/ | grep  ".*_exe")

for exe in $Exe; do
    printf "\n"
    length=$((${#exe} + 11))
    echo "[Starting] $exe"
    printf "%0.s-" $(seq 1 $length)
    printf "\n"

    ./build/$exe

    printf "%0.s-" $(seq 1 $length)
    printf "\n"
done

