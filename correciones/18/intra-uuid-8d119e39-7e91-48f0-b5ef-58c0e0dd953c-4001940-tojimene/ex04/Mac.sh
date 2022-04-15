#!/bin/bash

ifconfig | grep 'ether ' | tr '\t' ' ' | sed 's/ ether //' | sed 's/ //'
