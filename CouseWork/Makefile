COMPILER:=gcc

#-Werror 
#	Make all warnings into hard errors. Source code which triggers warnings will be rejected
#-Wall 
#	Turns on all optional warnings which are desirable for normal code. At present this is -Wcomment and -Wtrigraphs. Note that many of the preprocessor's warnings are on by default and have no options to control them.
#-Wmissing-prototypes (C only)
#	Warn if a global function is defined without a previous prototype declaration. This warning is issued even if the definition itself provides a prototype. The aim is to detect global functions that fail to be declared in header files.
#-Wmissing-declarations 
#	Warn if a global function is defined without a previous declaration. Do so even if the definition itself provides a prototype. Use this option to detect global functions that are not declared in header files.
CFLAGS:=-Wall -Wmissing-prototypes -Wmissing-declarations -Werror
EXECUTABLE:=report.run

EXECUTABLE_SOURCES:=report.c
EXECUTABLE_OBJECTS:=$(EXECUTABLE_SOURCES:.c=.o)

OTHER_SOURCES:=temp_functions.c
OTHER_OBJECTS=$(OTHER_SOURCES:.c=.o)
OTHER_HEADERS=$(OTHER_SOURCES:.c=.h)


.PHONY: all
all: $(EXECUTABLE_OBJECTS) $(OTHER_OBJECTS)
	$(COMPILER) $(CFLAGS) $^ -o $(EXECUTABLE)

$(EXECUTABLE_OBJECTS): $(EXECUTABLE_SOURCES)
	$(COMPILER) $(CFLAGS) -c $^

$(OTHER_OBJECTS): $(OTHER_SOURCES) $(OTHER_HEADERS)
	$(COMPILER) $(CFLAGS) -c $<

.PHONY: clean
clean:
	$(RM) *.o

