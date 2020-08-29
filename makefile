CC=gcc
FLAGS=-Wall -Wextra -Wpedantic -std=c99
OBJ=funciones.o
TARGET=funcionesmain

.PHONY: clean

$(TARGET): $(OBJ)
	@$(CC) $(FLAGS) funciones.c -o $@ $(OBJ)
	@echo "Compilacion terminada!"

$(OBJ): %.o:%.c
	@echo "Compilando $@ desde $<"
	@$(CC) $(FLAGS) -c $<
	@echo "..."

clean:
	@rm -fv $(OBJ) hello
	@echo "Listo."
