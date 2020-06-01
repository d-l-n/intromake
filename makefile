CC= gcc
FLAGS= -Wall -Wextra -Wpedantic -std=c99
DEBUG= -g
OBJ= hellofun.o
TARGET= hello

.PHONY= clean

$(TARGET): $(OBJ)
	$(CC) $(FLAGS) hellomain.c -o $@ $(OBJ)
	#@echo "yasss queen!"

$(OBJ): %.o : %.c
	@echo "Compilando $@ desde $<"
	$(CC) $(FLAGS) -c $<

clean:
	rm -fv $(OBJ) hello
