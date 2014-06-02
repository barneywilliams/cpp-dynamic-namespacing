OUT_DIR = obj
OBJS = $(OUT_DIR)/TheGeneral.o $(OUT_DIR)/ColonelA.o $(OUT_DIR)/ColonelB.o
INCS = -I"."
BIN = general
CC = g++
CXXFLAGS = $(INCS) -Wall -std=c++11
LFLAGS = -Wall
MKDIRS = mkdir -p
RM_ALL = rm -rf

.PHONY: directories run

build: directories $(BIN)

all: clean build run

run:
	@echo=off; echo "\nRunning Example:\n"
	./$(BIN)

$(BIN): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(BIN)

directories: $(OUT_DIR)

$(OUT_DIR):
	$(MKDIRS) $(OUT_DIR)

clean:
	$(RM_ALL) $(OBJS) $(OUT_DIR) ./**/*.gch ./*.out $(BIN)

$(OUT_DIR)/ColonelA.o: directories ColonelA.h ColonelA.cpp libFoo_v1/libFoo.h
	$(CC) -I"./libfoo_v1/" $(CXXFLAGS) -c ColonelA.cpp -o $@

$(OUT_DIR)/ColonelB.o: directories ColonelB.h ColonelB.cpp libFoo_v2/libFoo.h $(OUT_DIR)/
	$(CC) -I"./libfoo_v2/" $(CXXFLAGS) -c ColonelB.cpp -o $@

$(OUT_DIR)/TheGeneral.o: directories TheGeneral.cpp $(OUT_DIR)/ColonelA.o $(OUT_DIR)/ColonelB.o $(OUT_DIR)/
	$(CC) $(CXXFLAGS) -c TheGeneral.cpp -o $@
