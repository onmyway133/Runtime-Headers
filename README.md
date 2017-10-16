# Runtime Headers

## Description

- Support macOS
	- 10.12
	- 10.13
- Support iOS
	- 10.0.2
	- 11

## How to export

### macOS

- Checkout https://github.com/onmyway133/RuntimeBrowser/tree/fix/write
- Run `OSX/RuntimeBrowser.xcodeproj`
- Write to `Users/khoa/Downloads/macOS-Runtime-Headers`

### iOS

- Run `OCRuntime` iOS app on device
- Click `Load All` in `Frameworks` tab
- Find the web server IP in `About tab`
- In terminal, run `wget -r -t20 http://192.168.0.28:10000/tree/`

## Credit

- https://github.com/nst/RuntimeBrowser