#!/bin/bash
id -p $FT_USERS | tr ' ' ',' | cut -f 2- | sed '1d'
