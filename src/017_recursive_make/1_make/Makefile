# An example of recursive make

SUBDIRS = int_math float_math

.PHONY: libraries
libraries: $(SUBDIRS)

.PHONY: $(SUBDIRS)
$(SUBDIRS): 
	$(MAKE) -C $@

.PHONY: clean
clean: 
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir clean; done
