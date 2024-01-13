## Star Trek game (1971)
- 🚨 **Click [here](https://busfahrer.github.io/st71/) to play the Web Assembly version** 🚨
- This is an ANSI C port of the *original*, non-super [Star Trek game](https://en.wikipedia.org/wiki/Star_Trek_(1971_video_game)) written by Mike Mayfield in 1971. You can find a lot of versions of the later "*Super* Star Trek" game, but I had a hard time finding a playable copy of the original, non-super game.
- This port is based on the 2008 C# port by Michael Birken: https://meatfighter.com/startrek1971/
- This repository also contains tooling that compiles the C game into a Web Assembly application. It's located in the `wasm` subdirectory
- This is compliant to ANSI C89, so it should compile on just about anything

## How to play
- Build it and run `./st` or just run the [Web Assembly version](https://busfahrer.github.io/st71/)
- Optional: For the best effect, run the game in [cool-retro-term](https://github.com/Swordfish90/cool-retro-term)
  - Even better: Play on an actual [teletype terminal](https://en.wikipedia.org/wiki/Teleprinter)
- Click [here](./help.txt) to read a copy of the in-game instructions
- At the start of the game you can enter `1` to get instructions. You can enter `3` or any larger number to skip the instructions.
- After the instruction prompt, the game will ask you for a seed number. This will be used as the basis for all randomness in the game, so you can enter any number you'd like, but be aware that entering the same number in subsequent games will lead to the exact same game layout

## Building
- Just run `make`
- If you don't have make, run `gcc -o st st.c -lm`

## Building the Web Assembly version
- Install [emscripten](https://emscripten.org/)
- Activate emscripten in your shell, for example with `source /etc/profile.d/emscripten.sh`
- Go to to the `wasm` subdirectory
- Run `make`
- The build will now be located in the `dist` directory
- Optionally, you can try it out locally by running `make serve`, which will run a Python 3 webserver to serve the files on http://localhost:1971/

## Changes from the original
- I believe that Michael made some very minor changes in his port, like adding pagination for the instructions
- My port has some further minor changes, however these only affect the WASM version since they are targeted at improving the mobile experience. If you compile the C version and run it in a terminal, it should play fairly identical to Michael's port
- These are the changes for the WASM version:
  - The leading page feed is 12 lines instead of 20
  - The game title is set further to the left
  - The terminal is set very narrow to facilitate mobile play
  - To that end, the formatting of the instructions was modified to fit a 49 column terminal
  - The instruction prompt in the WASM version doesn't offer the pagination option since it seems to be broken when using WASM

## Additional Links
- https://en.wikipedia.org/wiki/Star_Trek_(1971_video_game)
- https://meatfighter.com/startrek1971/
- http://web.archive.org/web/20081209035052/http://www.dunnington.u-net.com/public/startrek/
- https://almy.us/sst.html
- https://simplesi.net/original-star-trek-game-mike-mayfield-1972-version/
- http://www.catb.org/~esr/super-star-trek/
- http://www.catb.org/~esr/super-star-trek/sst-doc.html
- https://web.archive.org/web/20060822203937/www3.sympatico.ca/maury/games/space/star_trek.html

