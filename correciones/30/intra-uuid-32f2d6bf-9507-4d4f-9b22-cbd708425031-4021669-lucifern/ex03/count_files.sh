#!/bin/sh
find . | wc -l | awk '{print$1}'
