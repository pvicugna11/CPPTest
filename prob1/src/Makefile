# コンパイラ
CC = g++

# コンパイルオプション
CFLAGS = 

# 実行ファイル
TARGET = ../obj/main

# コンパイル対象のソースコード
SRCS = main.cpp

# ターゲットファイル生成
$(TARGET):
	$(CC) $(SRCS) -o $@

# "make all"で make clean と make を同時に実施
all : clean $(TARGET)

# 実行ファイル，.dファイルを削除
clean: 
	rm -f $(TARGET) *.d

# run
run: 
	./$(TARGET)
