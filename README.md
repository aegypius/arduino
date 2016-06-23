# Arduino

## Using Docker image

### Building image:

```sh
docker build -t aegypius/platformio .
```

### Compiling your code:

```sh
docker run --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio run
```

### Upload to the board

```sh
docker run --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio run -t upload
```

### Monitor device serial port

```sh
docker run --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio serialports monitor
```

## Tips

You can also use a shell function :

```sh
function platformio() {
	docker run --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio $@
}
```
