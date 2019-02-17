name=$1
g++ -std=c++11 $name.cpp -o $name.out 
mv $name.out ./executables/
./executables/$name.out
