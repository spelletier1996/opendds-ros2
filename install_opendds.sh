#!/bin/bash

if [ "$EUID" -ne 0 ]
  then echo "Please run as root"
  exit
fi

cd /tmp
if [[ ! -d OpenDDS ]]
then
git clone https://github.com/objectcomputing/OpenDDS.git
fi

cd OpenDDS
git checkout DDS-3.21
git pull

./configure --no-debug --optimize --ace-github-latest --prefix=/usr/local #--doc-group3
make clean
source setenv.sh
make -j`nproc` install
cd

ldconfig