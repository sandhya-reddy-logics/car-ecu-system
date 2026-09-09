CC=gcc
CFLAGS= -Wall -Wextra -Iinclude -MMD -MP
TARGET= build/car_ecu_app

OBJECTS= build/main.o\
	 build/engine_ecu.o\
	 build/brake_ecu.o\
	 build/body_ecu.o\
	 build/hvac_ecu.o\
	 build/infotainment_ecu.o\
	 build/logger.o

.PHONY: all source process clean rebuild

all: source process

source:
	$(MAKE) -C source

process:
	$(MAKE) -C process

clean:
	$(MAKE) -C source clean
	$(MAKE) -C process clean

rebuild: clean all



