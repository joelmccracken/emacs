#!/usr/bin/env bash


case "$1" in
    "go")
        ./autogen.sh
        emconfigure ./configure --without-all --with-x-toolkit=no --without-xim --with-x=no
        emmake make bootstrap
        ;;
    "reset")
        make distclean
        ;;
esac
