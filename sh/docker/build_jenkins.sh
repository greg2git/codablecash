#!/bin/bash -eux

pushd docker/debug/
./run.sh jenkins
popd

