#!/bin/bash


echo $#
until [ $# -eq 0 ]
do
    case "$1" in
        -h|--help) echo "-h or --help";
        exit 0;;
        -a|--along) echo "-a or --along";shift;echo "after shift $#";;
        -b|--blong) echo "-b or --blong";
            case "$2" in
                bval1) echo "  b value 1";shift 2;echo "after shift $#";;
                bval2) echo "  b value 2";shift 2;echo "after shift $#";;
                bval3) echo "  b value 3";shift 2;echo "after shift $#";;
                bval4) echo "  b value 4";shift 2;echo "after shift $#";;
#不能判断-b后面是否会有别的参数，因此不能直接shift 2
                *) shift; echo "  unknow b value";
                    if [ $# -eq 0 ];then
                        exit 0;
                    fi
                    shift;;
            esac;;
        -c|--clong) echo "-c or --clong";
            case "$2" in
                cval1) echo "  c value 1";shift 2;;
                cval2) echo "  c value 2";shift 2;;
                cval3) echo "  c value 3";shift 2;;
                cval4) echo "  c value 4";shift 2;;
                *) shift; echo "  unknow c value";
                    if [ $# -eq 0 ];then
                        exit 0;
                    fi
                    shift;;
            esac;;
        *) echo " unknow prop $1";shift;;
    esac
done
