cd /Users/pepa/Desktop/twinStick/firmware/nexus-ui-rp2040
rm -rf build
mkdir build && cd build
cmake ..
make -j4