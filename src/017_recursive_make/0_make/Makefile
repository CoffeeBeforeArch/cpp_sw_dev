# An example of recursive make

SUBDIRS = int_math float_math

libraries: 
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir; done

.PHONY: clean
clean: 
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir clean; done
