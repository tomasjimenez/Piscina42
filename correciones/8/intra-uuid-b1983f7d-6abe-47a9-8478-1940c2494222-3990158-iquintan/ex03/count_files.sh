#!/bin/bash
find . * | wc -l | awk '{$1=$1};1'
