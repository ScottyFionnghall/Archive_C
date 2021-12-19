message_hider.o: encrypt.c encrypt.h message_hider.c
	gcc -c message_hider.c
encrypt.o: encrypt.c encrypt.h
	gcc -c ecnrypt.c
boom: encrypt.o message_hider.o
	gcc encrypt.o message_hider.o  -o boom