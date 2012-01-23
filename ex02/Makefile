## file ex02/Makefile
## in the public domain

include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run:  ex02c-sample.c $(MELTQUICKLYBUILTMODULES)
	$(MELTGCC) -O -v $(meltmode)=funcounter \
	     $(meltworkdir)=meltworkdir \
             $(meltextra)=$(MELTBASE) -c $<
