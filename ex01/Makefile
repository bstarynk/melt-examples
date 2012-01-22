## file ex01/Makefile
## in the public domain

include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run: $(MELTQUICKLYBUILTMODULES) $(meltempty)
	$(MELTGCC) $(meltmode)=nop \
	     $(meltworkdir)=meltworkdir \
	     $(meltextra)=$(MELTBASE) -c $(meltempty)
	rm -v $(MELTBASE)*.[och]
	$(MELTGCC) $(meltmode)=runfile $(meltarg)=$(MELTSOURCES) -c $(meltempty)

