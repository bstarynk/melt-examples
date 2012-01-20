## file ex01/Makefile
## in the public domain

include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run: $(MELTQUICKLYBUILTMODULES) $(meltempty)
	$(MELTGCC) $(meltmode)=nop $(meltextra)=$(MELTBASE) -c $(meltempty)
	$(MELTGCC) $(meltmode)=runfile $(meltarg)=$(MELTBASE) -c $(meltempty)

