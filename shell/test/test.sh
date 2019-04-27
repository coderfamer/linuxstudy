#!/bin/bash
i=1
while [ $i -le $# ];do
    case ${!i} in
        -d)
            i=$(expr $i + 1)
            file_to_trash=${!i}
            echo ${file_to_trash}
            ;;
        -l)
            #print_trashed_file  # print_trashed_file is a function
            ;;
        -b)
            #i=2
            #file_to_untrash=
            #untrash  # untrash is a function
            ;;
        -c)
            #clean_all           # clean all is a function
            ;;
        -h)
            #usage
            exit 0
            ;;
        \?)
            usage
            exit 1
            ;;
    esac
    i=$(expr $i + 1)
done
