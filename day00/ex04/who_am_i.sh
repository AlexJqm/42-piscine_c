#!/bin/sh

LDAPWHOAMI | sed 's/dn://g'
