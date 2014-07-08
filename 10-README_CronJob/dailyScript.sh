#!/bin/bash
NOW=`date +'%Y_%m_%dT%H%M'`

DIR_ROOT=/tmp
NAME_CLONE="CMake-CTest-CDash_$NOW"

DIR_CLONE=$DIR_ROOT/$NAME_CLONE
rm -rf $DIR_CLONE
cd /tmp
pwd
git clone git@github.com:Patechoc/CMake-CTest-CDash.git $NAME_CLONE
cd $DIR_CLONE/09-Adding_Support_for_Dashboard
pwd
mkdir myBuild
cd myBuild
cmake -DCMAKE_INSTALL_PREFIX="../myInstallation" ..
make
make install
#ctest -D Nightly
ctest -D Experimental
#ctest -D Nightly -R Comp
rm -rf $DIR_CLONE