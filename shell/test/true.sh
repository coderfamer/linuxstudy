#!/bin/bash

function test() {
    flag=true



    if [ flag ];then
        echo "true"
    fi

    flag=false
    if [ !flag  ];then
        echo "false"
    fi
}

test
