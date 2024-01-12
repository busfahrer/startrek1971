# (non-Super) Star Trek (1971)
* This is a ANSI C port of the original Star Trek game written by Mike Mayfield in 1971. You can find a lot of version of the later "*Super* Star Trek" game, but I had a hard time finding a playable copy of the original
* This port is based on the 2008 C# port by Michael Birken: https://meatfighter.com/startrek1971/
* This repository also contains tooling that compiles the C game into a Web Assembly application. It's located in the `wasm` subdirectory
* This is compliant to ANSI C89, so it should compile on just about anything

## Building
* Just run `make`
* If you don't have make, run `gcc -o st st.c -lm`

## Building the Web Assembly version
- Install emscripten
- Activate emscripten in your shell, for example with `source /etc/profile.d/emscripten.sh`
- Go to to the `wasm` subdirectory
- Run `make`
- The build will now be located in the `dist` directory
- Optionally, you can try it out locally by running `make serve`, which will run a Python 3 webserver to serve the files on http://localhost:1971/

