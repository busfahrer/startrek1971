# (non-Super) Star Trek game (1971)
* **Click [here](https://busfahrer.github.io/st71/) to play the Web Assembly version**
* This is a ANSI C port of the *original* Star Trek game written by Mike Mayfield in 1971. You can find a lot of version of the later "*Super* Star Trek" game, but I had a hard time finding a playable copy of the original, non-super game.
* This port is based on the 2008 C# port by Michael Birken: https://meatfighter.com/startrek1971/
* This repository also contains tooling that compiles the C game into a Web Assembly application. It's located in the `wasm` subdirectory
* This is compliant to ANSI C89, so it should compile on just about anything

## How to play
- Build it and run `./st` or just run the [Web Assembly version](https://busfahrer.github.io/st71/)
- Click [here](./help.txt) to read a copy of the in-game instructions
- At the start of the game you can enter `1` to get instructions. You can enter `3` or any larger number to skip the instructions.
- Due to a bug in the web assembly version, entering `2` at the instruction prompt will cause the game to freeze
- After the instruction prompt, the game will ask you for a seed number. This will be used as the basis for all randomness in the game, so you can enter any number you'd like, but be aware that entering the same number in subsequent games will lead to the exact same game layout

## Building
* Just run `make`
* If you don't have make, run `gcc -o st st.c -lm`

## Building the Web Assembly version
- Install [emscripten](https://emscripten.org/)
- Activate emscripten in your shell, for example with `source /etc/profile.d/emscripten.sh`
- Go to to the `wasm` subdirectory
- Run `make`
- The build will now be located in the `dist` directory
- Optionally, you can try it out locally by running `make serve`, which will run a Python 3 webserver to serve the files on http://localhost:1971/

# Additional Links
* https://en.wikipedia.org/wiki/Star_Trek_(1971_video_game)
* https://meatfighter.com/startrek1971/
* http://web.archive.org/web/20081209035052/http://www.dunnington.u-net.com/public/startrek/
* https://almy.us/sst.html
* https://simplesi.net/original-star-trek-game-mike-mayfield-1972-version/
* http://www.catb.org/~esr/super-star-trek/
* http://www.catb.org/~esr/super-star-trek/sst-doc.html
* https://web.archive.org/web/20060822203937/www3.sympatico.ca/maury/games/space/star_trek.html

