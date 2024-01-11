#!/bin/sh
# Try the following line to activate the emscripten environment
# source /etc/profile.d/emscripten.sh
wget -c https://github.com/mame/xterm-pty/raw/main/emscripten-pty.js
emcc -s ASYNCIFY --js-library=emscripten-pty.js -o st.mjs ../st.c
