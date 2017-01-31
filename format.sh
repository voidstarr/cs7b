#!/bin/bash
clang-format-3.8 $1 > /tmp/proj-fom-tmp
mv /tmp/proj-fom-tmp $1
