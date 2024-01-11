st: st.c
	gcc -o st st.c -lm

clean:
	rm -f st

pedantic:
	gcc -o st st.c -lm -Wall -pedantic -std=c89

verify: clean pedantic
