# Try the following line in your shell in case your environment doesn't have emcc loaded:
# source /etc/profile.d/emscripten.sh

.PHONY: dist serve clean

dist: st.mjs
	mkdir -p dist
	cp -vr img pwa-manifest.json ../help.txt index.html st.mjs st.wasm dist

st.mjs: emscripten-pty.js ../st.c
	emcc -s ASYNCIFY --js-library=emscripten-pty.js -o st.mjs ../st.c -DWASM

emscripten-pty.js:
	curl -LO https://github.com/mame/xterm-pty/raw/main/emscripten-pty.js

serve: dist
	python3 -m http.server 1971 -d ./dist

clean:
	rm -rf dist emscripten-pty.js st.mjs st.wasm
