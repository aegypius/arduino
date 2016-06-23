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
