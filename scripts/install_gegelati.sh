#!/bin/bash


cd lib


echo "Downloading Gegelati library"

git clone https://github.com/gegelati/gegelati.git
cd gegelati
git checkout 4f9414f


echo "Installing Gegelati library"

cd bin
cmake -DCODE_GEN=ON -DSKIP_DOXYGEN_BUILD=OFF -DBUILD_TESTING=OFF ..
cmake --build . -j 10 

cd ../../..