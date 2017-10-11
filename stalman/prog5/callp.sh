#!/bin/bash
set -e
make -f a.mak || exit 1
make -f b.mak || exit 1
make -f c.mak || exit 1


