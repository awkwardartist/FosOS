### run this locally on a linux (or WSL) system to launch the OS in qemu-system-i386
rm -f -r ./FosOS
git clone https://github.com/awkwardartist/FosOS >> output
cd ./FosOS

chmod u+x ./build.sh
./build.sh

cd ..
echo "done."