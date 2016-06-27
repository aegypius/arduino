#
# docker run --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio run
#
FROM python:2.7
MAINTAINER Nicolas LAURENT <innercircle@aegypius.com>

ENV HOME /src
WORKDIR /src

# Installs platformio and dependencies
RUN RUNTIME_DEPENDENCIES="libusb-1.0.0" \
 && apt-get update -qy \
 && apt-get install -q --no-install-recommends $RUNTIME_DEPENDENCIES -y \
 && apt-get clean \
 && python -c "$(curl -fsSL https://raw.githubusercontent.com/platformio/platformio/master/scripts/get-platformio.py)" \
 && rm -fr /var/apt/cache/*

CMD ["platformio", "run"]
