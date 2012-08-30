## file ex07/Makefile in the public domain
include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run:  ex07c-sample.c $(MELTQUICKLYBUILTMODULES)
	$(MELTGCC) -O3 -v $(meltmode)=showpasses \
	     $(meltworkdir)=meltworkdir \
             $(meltextra)=$(MELTBASE) -c $<
