## file ex05/Makefile in the public domain
include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run:  ex05c-sample.c $(MELTQUICKLYBUILTMODULES)
	$(MELTGCC) -O -v $(meltmode)=searchfflush \
	     $(meltworkdir)=meltworkdir \
             $(meltextra)=$(MELTBASE) -c $<
