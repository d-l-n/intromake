CC=gcc
FLAGS= -Wall -Wextra -Wpedantic -std=c99
OBJ= peim.o

.PHONY: clean

hello: $(OBJ)
	@$(CC) $(FLAGS) peim.c -o $@ $(OBJ)
	@echo "Compilacion terminada!"

$(OBJ): %.o:%.c
	@echo "Compilando $@ desde $<"
	@$(CC) $(FLAGS) -c $<
	@echo "..."

clean:
	@rm -fv $(OBJ) hello