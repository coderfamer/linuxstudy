#!/bin/bash

ls -lS --time-style=long-iso | awk ' BEGIN {
    getline; getline;
    name1=$8; size=$5
}
{
    name2=$8;
    if (size==$5) {
        "md5sum "name1 | getline; csum1=$1
        "md5sum "name2 | getline; csum2=$1
        if ( csum1==csum2 ) {
            print name1; print name2
        }
    };

    size=$5; name1=name2;
}' | sort -u > dumplicate_files

