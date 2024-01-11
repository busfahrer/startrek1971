# Try the following line in your shell in order to activate the emscripten environment:
# source /etc/profile.d/emscripten.sh

build: init ../st.c
	emcc -s ASYNCIFY --js-library=emscripten-pty.js -o st.mjs ../st.c

init: emscripten-pty.js
	curl -O https://github.com/mame/xterm-pty/raw/main/emscripten-pty.js

serve: build
	python3 -m http.server 1971

clean:
	rm -f st.mjs st.wasm
