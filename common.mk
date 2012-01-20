## file common.mk in melt-examples/
## Copyright (C) 2012 by Basile Starynkevitch

#########################################################################
##   This file is free software: you can redistribute it and/or modify
##   it under the terms of the GNU Lesser General Public License as
##   published by the Free Software Foundation, either version 3 of
##   the License, or (at your option) any later version.
##
##   This file is distributed in the hope that it will be useful, but
##   WITHOUT ANY WARRANTY; without even the implied warranty of
##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
##   Lesser General Public License for more details.
##
##   You should have received a copy of the GNU Lesser General Public
##   License along with this file.  If not, see
##   <http://www.gnu.org/licenses/>.
#########################################################################

## this file contain the common GNU make stuff and is included inside
## every example directory's Makefile

## the GCC for our MELT

CC=$(MELTGCC)
MELTGCC=gcc -fplugin=melt


## the default MELT sources
MELTSOURCES=$(wildcard *.melt)
MELTBASE=$(patsubst %.melt,%,$(MELTSOURCES))
MELTQUICKLYBUILTMODULES=$(patsubst %.melt,%.quicklybuilt.so,$(MELTSOURCES))
MELTGENERATED=$(patsubst %,%.c,$(MELTBASE))  $(wildcard $(patsubst %,%+*.[ch],$(MELTBASE)))

### do we use the MELT plugin; leave empty if using the MELT branch
meltisplugin=yes
## the prefix for each MELT specific argument
ifdef meltisplugin
meltsuffix=-fplugin-arg-melt
else
meltsuffix=-fmelt
endif

## various common arguments
meltmode=$(meltsuffix)-mode
meltworkdir=$(meltsuffix)-workdir
meltarg=$(meltsuffix)-arg
meltextra=$(meltsuffix)-extra

## the empty file used to translate MELT 
meltempty=empty-file-for-melt.c

.DEFAULT: all
.SUFFIXES: .melt .so

vpath %.so: .
vpath %.melt: .

####################
.PHONY: all run clean

%.quicklybuilt.so: %.melt | $(meltempty) meltworkdir
	$(MELTGCC) $(meltmode)=translatequickly \
	      $(meltarg)=$^ \
	      $(meltworkdir)=meltworkdir \
	      -c $(meltempty) 

$(meltempty):
	date +"/*$(meltempty) generated %c*/" > $@

meltworkdir:
	[ -d $@ ] || mkdir $@


clean:
	$(RM) -f *.o *.so *% *~ $(meltempty) $(MELTGENERATED)
	$(RM) -rf meltworkdir
