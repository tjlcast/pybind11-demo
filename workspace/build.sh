mkdir build
cd build
cmake ..
make
python3 -c "import example; print(example.add(1, 2))"
