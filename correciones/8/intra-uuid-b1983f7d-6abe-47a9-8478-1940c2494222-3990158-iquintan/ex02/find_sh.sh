#!/bin/bash
find . -name '*.sh' -type f -execdir basename {} .sh ';'
