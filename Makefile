# Criado por Guilherme Chaves e Deyves Oliveira em 17/06/2023
CC = g++
CFLAGS = -Wall -ansi -pedantic -fsanitize=address -O0 -g

# Variáveis
INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
BIN_DIR = bin
DOC_DIR = docs
TEST_DIR = tests
TARGET = $(BIN_DIR)/programa

# Lista de arquivos
SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SOURCES))

# Regras de compilação
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

# Regras de execução
run: $(TARGET)
	./$(TARGET)

# Regras de documentação
doc:
	doxygen Doxyfile

# Regras de teste
test: $(TARGET)
	./$(TARGET) < $(TEST_DIR)/test.txt

# Regras de limpeza
clean:
	rm -f $(OBJ_DIR)/*
	rm -f $(BIN_DIR)/*
	rm -f $(DOC_DIR)/*