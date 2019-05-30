#!/bin/bash


while getopts ":a:bc" opt;do
    case $opt in
        a)
            echo "aaa"
            ;;
        b)
            echo "ddddd"
            ;;
        c)
            echo "ccc"
            ;;
        \?)
            ;;
    esac
done


echo $OPTIND
shift $(( $OPTIND-1  ))

echo $@
