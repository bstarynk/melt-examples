## file ex03/Makefile in the public domain
include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run:  ex03c-twofun.c $(MELTQUICKLYBUILTMODULES)
	$(MELTGCC) -O -v $(meltmode)=nop \
	     $(meltworkdir)=meltworkdir \
             $(meltextra)=$(MELTBASE) -c $<