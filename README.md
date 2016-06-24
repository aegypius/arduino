# Arduino

[![Travis branch](https://img.shields.io/travis/aegypius/arduino/master.svg?style=flat-square)](https://travis-ci.org/aegypius/arduino)

## Initialize project:

	platformio init

## Compiling your code:

	platformio run

## Upload to the board

	platformio run -t upload

## Monitor device serial port

	platformio serialports monitor

## Using a docker image

Building image:

	docker build -t aegypius/platformio .

*Tip* : You can also use a bash function :

	function platformio() {
		docker run --rm --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio $@
	}
