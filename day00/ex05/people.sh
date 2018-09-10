#!/bin/sh

ldapsearch -xLLL "(uid=z*)" cn | grep '^cn:' | cut -c5- | sort -rf
