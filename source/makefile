GPP = g++
GCC = gcc
output = "CMath.so"

COMPILE_FLAGS = -m32 -fPIC -c -O3 -w -D LINUX -D PROJECT_NAME=\"CMath\" -I ./SDK/amx/

command = -D CMath $(COMPILE_FLAGS)

all: command

clean:
	-rm -f *~ *.o *.so

command: clean
	$(GPP) $(command) ./SDK/amx/*.c
	$(GPP) $(command) ./SDK/*.cpp
	$(GPP) $(command) *.cpp
	$(GPP) -m32 -O2 -fshort-wchar -shared -o $(output) *.o
