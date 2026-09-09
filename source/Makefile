CC=gcc
CFLAGS= -Wall -Wextra -I../include -MMD -MP

TARGET= ../build/car_ecu_app

OBJECTS= ../build/main.o \
	 ../build/engine_ecu.o \
	 ../build/brake_ecu.o \
	 ../build/body_ecu.o \
	 ../build/hvac_ecu.o \
	 ../build/infotainment_ecu.o \
	 ../build/logger.o

.PHONY:all clean rebuild

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

../build/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJECTS:.o=.d)

clean:
	rm -f ../build/*.o ../build/*.d $(TARGET)

rebuild: clean all 



