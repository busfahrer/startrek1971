st: st.c
	gcc -o st st.c -lm

clean:
	rm -f st

c89:
	gcc -o st st.c -lm -Wall -pedantic -std=c89

c99:
	gcc -o st st.c -lm -Wall -pedantic -std=c99

verify: c89 c99
