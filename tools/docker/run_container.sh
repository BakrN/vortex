#!/bin/sh

# Tested on podman version 4.9.4-rhel

SCRIPT_DIR=$(dirname "$0")
VORTEX_ROOT=$SCRIPT_DIR/../../

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

$DOCKER run -v=$VORTEX_ROOT:/vortex -it vortex:HPCA