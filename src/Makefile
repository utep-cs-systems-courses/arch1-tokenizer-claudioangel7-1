tokenizer_test: tokenizer.o tokenizerUI.o history.o
	cc -o ftoc_test tokenizer.o tokenizerUI.o history.o
	
clean: 
	rm -f *.o ftoc_test
	
tokenizerUI.o: tokenizer.c tokenizerUI.c tokenizer.h history.o

tokenizer.o: tokenizer.c tokenizer.h history.o
