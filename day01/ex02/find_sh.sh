#!/bin/sh

find . -name '*.sh' | sed "s/...$//" | sed -e 's,.*/,,'
