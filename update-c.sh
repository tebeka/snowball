#!/bin/bash
# Fetch snowball sources

case $1 in
    -h | --help ) echo "usage: $(basename $0) VERSION"; exit;;
esac

if [ $# -ne 1 ]; then
    echo "error: wrong number of arguments" 1>&2
fi

set -e

version=$1
echo "upgrading to version ${version}"
lib=libstemmer_c-${version}
tarball=${lib}.tar.gz

rm *.c *.h
curl -LO https://snowballstem.org/dist/${tarball}
tar xzf ${tarball}
find ${lib} -name '*.[ch]' -exec cp -v {} . \;
rm stemwords.c libstemmer_utf8.c # example and duplicate
rm -rf ${lib} ${tarball}
sed -i 's|include "../[a-z_]\+/|include "|' *.{c,h}
echo ${version} > lib-version.txt
