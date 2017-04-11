#!/bin/bash

echo "Static:"
./make-static.sh
./build/static/app

echo "Shared:"
./make-shared.sh
./build/shared/app
