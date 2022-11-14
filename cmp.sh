#!/bin/bash

#function to compile and execute .cpp:
compile_and_execute () {

    #get the basename of path without extention to autoname exe:
    exeName=$(basename $1 .cpp)

    c++ $1 -o $exeName
    echo -e "\n\e[0;32mCompilierung erfolgreich, \"$exeName\" wird nun ausgefuehrt:\e[0m\n"

    #execute freshly compiled program:
    ./$exeName
}

#check if file exists:
if [[ "$1" == *.cpp ]]
then
    #check if file has .cpp-extention:
    if [ -e $1 ]
    then
        compile_and_execute "$1"
    else
        echo -e "\n\e[7;31mFehler:\e[0;31m Die angegebene Datei \"$1\" wurde nicht gefunden!\n\tMoeglicherweise wurde der Name falsch geschrieben.\e[0m\n"
    fi
else
    echo -e "\n\e[7;31mFehler:\e[0;31m Die angegebene Datei \"$1\" ist keine *.cpp!\e[0m\n"
fi