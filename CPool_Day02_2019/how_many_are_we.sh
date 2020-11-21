#!/bin/bash

if [ -z $1 ]
then
    grep "" -c    
else
    awk -F ";" '{print $3}' | grep -F -o ${1^^} | wc -l
fi