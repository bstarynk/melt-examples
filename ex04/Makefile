## file ex04/Makefile in the public domain
include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run:  ex04c-sample.c $(MELTQUICKLYBUILTMODULES)
	$(MELTGCC) -O -v $(meltmode)=searchfun \
	     $(meltworkdir)=meltworkdir \
             $(meltextra)=$(MELTBASE) -c $<