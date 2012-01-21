## file ex01/Makefile
## in the public domain

include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run:  ex02c-sample.c $(MELTQUICKLYBUILTMODULES)
	$(MELTGCC) -O -v $(meltmode)=funcounter $(meltextra)=$(MELTBASE) -c $<