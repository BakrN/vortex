#!/bin/sh

# Tested on podman version 4.9.4-rhel

set -e

show_usage()
{
    echo "Docker Image Builder v1.0"
    echo "Usage: "
}

SCRIPT_DIR=$(dirname "$0")
VORTEX_ROOT=$SCRIPT_DIR/../../

DOCKERFILE=$SCRIPT_DIR/Dockerfile.HPCA
IMAGE_NAME=vortex:HPCA

# Check if Docker or Podman is installed
DOCKER=0
if docker -h >& /dev/null; then
    echo "Docker will be used to build the container"
    DOCKER=docker
elif podman -h >& /dev/null; then
    echo "Podman will be used to build the container"
    DOCKER=podman
else
    echo "Error: Docker or Podman not found"
    exit 1
fi

# Create the container
$DOCKER build -t $IMAGE_NAME -f $DOCKERFILE --no-cache --build-arg VORTEX_ROOT=./vortex $VORTEX_ROOT/..

# Compile Vortex libs
$DOCKER run --rm -v=$VORTEX_ROOT:/vortex $IMAGE_NAME /bin/bash -l -c "make -C /vortex"