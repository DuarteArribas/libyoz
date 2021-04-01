#variables
compiler:=gcc
#directories
srcDirectory:=src
binDirectory:=bin
includeDirectory:=include
#flags
flags:=-x -std=c17 -Wpedantic -Wall -Wextra
flags+= -Wshadow -Wundef -Wstrict-prototypes -Wswitch-default -Wno-unused-result
flags+= -I$(includeDirectory)
libs:=-lm
#sources
SOURCES:=$(wildcard $(srcDirectory)/*.c)

#name of the executable file
binName:=linkedlist

#rules
#choose this one to debug
dbg:flags+= -g3 -O0 -fsanitize=address -fsanitize=undefined
dbg:$(binDirectory)/$(binName)

#choose this one for the release version
rls:flags+= -g0 -O2
rls:$(binDirectory)/$(binName)

#build rule
$(binDirectory)/$(binName):$(SOURCES)
	@$(compiler) $(SOURCES) $(flags) $(libs) -o $@

#generate default folders
genDir:
	@mkdir bin in include libs src  

#clean binary files
clean:
	@find bin -type f ! -name "*.*" -delete

.PHONY: genDir clean dbg rls
