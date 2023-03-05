#!/bin/bash
# Fetch snowball sources

version=2.2.0
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
