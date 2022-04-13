#!/bin/bash

set -e
set -x

build_sku () {
  SKU=$1
  make clean all DMO_SKU=${SKU}
  cp build/freedmo.bin freedmo-default-sku-${SKU}.bin
}

build_sku S0722430
build_sku S0722550
build_sku S0722400
build_sku 1744907
build_sku 30857
build_sku 30336

DATE=$(date +'%Y%m%d')
GIT=$(git describe --tags --abbrev=0)
zip -9 "freedmo-firmware-all-${DATE}-${GIT}.zip" freedmo-default-sku-*.bin

exit 0
