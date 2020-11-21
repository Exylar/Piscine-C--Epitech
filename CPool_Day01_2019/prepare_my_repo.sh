#!/bin/bash

blih -u thomas1.bastien@epitech.eu repository create $1
blih -u thomas1.bastien@epitech.eu repository setacl $1 ramassage-tek r
blih -u thomas1.bastien@epitech.eu repository getacl $1