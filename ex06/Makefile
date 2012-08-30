## file ex06/Makefile in the public domain
include ../common.mk

all: $(MELTQUICKLYBUILTMODULES)

run:  ex06c-jansson.c $(MELTQUICKLYBUILTMODULES)
	$(MELTGCC) $(MELTGCCFLAGS) -O -v $(meltmode)=jansson \
	     $(meltworkdir)=meltworkdir \
             $(meltextra)=$(MELTBASE).quicklybuilt -c $<
