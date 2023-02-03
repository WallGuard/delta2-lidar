#!/bin/sh

#export CROSS_COMPILE_PREFIX=/opt/androidtoolchain/bin/arm-linux-androideabi
#export CROSS_COMPILE_CXX_INCLUDE=/opt/androidtoolchain/include/c++

export CC=$CROSS_COMPILE_PREFIX-gcc
export CXX=$CROSS_COMPILE_PREFIX-g++
export AR=$CROSS_COMPILE_PREFIX-ar
export LD=$CROSS_COMPILE_PREFIX-ld
export OBJCOPY=$CROSS_COMPILE_PREFIX-objcopy
export OBJDUMP=$CROSS_COMPILE_PREFIX-objdump
export SIZE=$CROSS_COMPILE_PREFIX-size
export NM=$CROSS_COMPILE_PREFIX-nm


make "$@"
