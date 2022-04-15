#!/bin/sh
groups $FT_USER | tr -s ' ' ',' | awk '{printf $0}'
echo
