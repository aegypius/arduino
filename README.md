# Arduino

### Initialize project:

```sh
platformio init
```

### Compiling your code:

```sh
platformio run
```

### Upload to the board

```sh
platformio run -t upload
```

### Monitor device serial port

```sh
platformio serialports monitor
```

## Using Docker image

Building image:

```sh
docker build -t aegypius/platformio .
```

> Tip : You can now use a shell function :
>
>	```sh
function platformio() {
	docker run --rm --privileged -v /dev/bus/usb -v $(pwd):/src -it aegypius/platformio platformio $@
}
```
