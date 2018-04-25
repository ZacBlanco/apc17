TARGETS = qsort
TARGETS32 := $(TARGETS:%=%.32)
TARGETS64 := $(TARGETS:%=%.64)
ALLTARGETS := $(TARGETS64)

# results dumped by cilkview objects
VIEWS = qsort

CC      = gcc
CFLAGS  = -g -Werror -gdwarf-3 -std=gnu99 -fcilkplus
LDFLAGS = -lcilkrts -ldl
#INCLUDES = -I/afs/csail.mit.edu/proj/courses/6.172/cilkutil/include
INCLUDES =

OLDMODE := $(shell cat .buildmode 2> /dev/null)
ifeq ($(DEBUG),1)
  CFLAGS := -DDEBUG -O0 $(CFLAGS)
  ifneq ($(OLDMODE),debug)
  $(shell echo debug > .buildmode)
endif
        else
  CFLAGS := -O3 $(CFLAGS)
  ifneq ($(OLDMODE),nodebug)
  $(shell echo nodebug > .buildmode)
endif
        endif

CFLAGS32 := $(CFLAGS) -m32
CFLAGS64 := $(CFLAGS) -m64

OUTPUTS = $(VIEWS:%=%.csv) $(VIEWS:%=%.plt) $(ALLTARGETS:%=%.cv.out) cilkview.out

all: $(ALLTARGETS)

.buildmode:
	touch .buildmode

%.32 : %.c .buildmode
	$(CC) -o $@ $(CFLAGS32) $(INCLUDES) $< $(LDFLAGS)

%.64 : %.c .buildmode
	$(CC) -o $@ $(CFLAGS64) $(INCLUDES) $< $(LDFLAGS)

clean:
	rm -f $(ALLTARGETS) $(OUTPUTS) *.stdout *.stderr
