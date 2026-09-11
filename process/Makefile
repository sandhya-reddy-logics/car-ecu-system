CC=gcc
CFLAGS= -Wall -Wextra
BUILD_DIR= ../build
TARGET= $(BUILD_DIR)/ecu_process_manager
SOURCE= ecu_process_manager.c
.PHONY: all clean
all: $(TARGET)
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)
clean:
	rm -f $(TARGET)
