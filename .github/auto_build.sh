#!/bin/bash

set -e
set -x

build_sku () {
  SKU=$1
  make clean all DMO_SKU=${SKU}
  cp build/freedmo.bin freedmo-default-sku-${SKU}.bin
}

build_sku 11353
build_sku 11356
build_sku 30252
build_sku 30256
build_sku 30270
build_sku 30299
build_sku 30323
build_sku 30321
build_sku 30324
build_sku 30326
build_sku 30327
build_sku 30332
build_sku 30333
build_sku 30334
build_sku 30336
build_sku 30347
build_sku 30370
build_sku 30373
build_sku 30374
build_sku 30387
build_sku 30572
build_sku 30573
build_sku 30578
build_sku 30856
build_sku 30857
build_sku 1738541
build_sku 1738595
build_sku 1744907
build_sku 1760756
build_sku 1763982
build_sku 1933081
build_sku 1933083
build_sku 1933084
build_sku 1933085
build_sku 1933088
build_sku 1976411
build_sku 2133382
build_sku 2133383
build_sku S0722400
build_sku S0722430
build_sku S0722530
build_sku S0722560
build_sku S0722540
build_sku S0722550
build_sku S0904980


DATE=$(date +'%Y%m%d')
GIT=$(git describe --tags --abbrev=0)
zip -9 "freedmo-firmware-all-${DATE}-${GIT}.zip" freedmo-default-sku-*.bin

exit 0
