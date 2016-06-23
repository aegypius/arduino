# 
# docker run --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio run
#
FROM python:2.7
MAINTAINER Nicolas LAURENT <innercircle@aegypius.com>

RUN python -c "$(curl -fsSL https://raw.githubusercontent.com/platformio/platformio/master/scripts/get-platformio.py)"

RUN platformio platforms install atmelavr \
    --with-package framework-arduinoavr

WORKDIR /src

