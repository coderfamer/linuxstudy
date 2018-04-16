#!/bin/sh

SYS_SHELL_DIR=`pwd`

SYS_GCC=gcc
SYS_CXX=g++
SYS_STRIP=strip
SYS_PREFIX=$SYS_SHELL_DIR/build/LINUX/usr
SYS_TARGET=$SYS_SHELL_DIR

#########make libs for system
export CC=gcc
export CXX=g++
mkdir -p $SYS_PREFIX


#########build sqlite library
:<<eof
if [ -d $SYS_SHELL_DIR/build/LINUX/sqlite3  ] ; then
    echo "sqlite3 is already build..."
else
    mkdir -p $SYS_SHELL_DIR/build/LINUX/sqlite3
    cd $SYS_SHELL_DIR/build/LINUX/sqlite3
    cp -rf $SYS_SHELL_DIR/libs/sqlite/* ./
    chmod +x ./configure
    CC=$SYS_GCC CXX=$SYS_CXX ./configure --prefix=$SYS_PREFIX --host=LINUX
    make && make install
    result=$? 
    if [ $result != 0 ] ; then
        rm $SYS_SHELL_DIR/build/LINUX/sqlite3 -rf
        cd $SYS_SHELL_DIR
        exit 1
    fi
    cd $SYS_SHELL_DIR
fi
eof

###########build attendance 
if [ -d $SYS_SHELL_DIR/build/LINUX/attendance ] ; then
    echo "dir attendance is created already....."
    cd $SYS_SHELL_DIR/build/LINUX/attendance
else
    mkdir -p $SYS_SHELL_DIR/build/LINUX/attendance
    cd $SYS_SHELL_DIR/build/LINUX/attendance
    cmake $SYS_SHELL_DIR -DCMAKE_INSTALL_PREFIX=$SYS_PREFIX -DCMAKE_C_COMPILER=$SYS_GCC -DCMAKE_CXX_COMPILER=$SYS_CXX -DSYSTEM_TYPE=LINUX
fi

###########make
make && $SYS_STRIP bin/attendance_sys
cp bin/attendance_sys $SYS_TARGET
