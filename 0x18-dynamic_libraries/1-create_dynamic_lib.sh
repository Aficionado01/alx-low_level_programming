#!/bin/bash
LIB_DIR=$PWD # folder containing the library's source files
LIB_NAME='all' # the library's name
_CUR_DIR=$PWD
cd $LIB_DIR
echo -e '\033[32mCompiling the source files...\033[0m'
gcc -fPIC -c *.c
[ $? -eq 0 ] && echo -e '\033[32mBundling the object files...\033[0m' && gcc -shared -o lib$LIB_NAME.so *.o
[ $? -eq 0 ] && mv lib$LIB_NAME.so $_CUR_DIR/lib$LIB_NAME.so
echo -e '\033[36mCleaning up...\033[0m'
rm *.o
