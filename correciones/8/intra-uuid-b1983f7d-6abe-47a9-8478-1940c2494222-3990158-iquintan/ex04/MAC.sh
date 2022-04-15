#!/bin/bash
ifconfig -a ether | awk '/ether/ {print $NF}'
