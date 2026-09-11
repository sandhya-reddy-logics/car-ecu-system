.PHONY: all source process clean rebuild

all: source process

source:
	$(MAKE) -C source

process:
	$(MAKE) -C process

clean:
	$(MAKE) -C source clean
	$(MAKE) -C process clean
