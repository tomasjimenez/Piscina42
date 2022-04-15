#!/bin/bash

find . -name "*.sh" | sed 's/\.sh//' | tr '/' ' ' | tr '.' ' ' | sed 's/  //g'
