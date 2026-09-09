CC=gcc
CFLAGS= -Wall -Wextra

TARGET= ../build/ecu_process_manager
SOURCE= ecu_process_manager.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET)


