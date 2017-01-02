##############
# 
# Targets:
#     all   - build $(PGM)
#     run   - build and run $(PGM)
#     clean - delete all generated files.
#
MY_CFLAGS = -c -g -O0 -Wall
MY_LDFLAGS = -lstdc++ -lrt

PGM  = jsonDemo

.PHONY:	run

SRC_DIR = JsonSerialization

SRC  = $(shell ls $(SRC_DIR)/*.cpp)
OBJS = $(SRC:$(SRC_DIR)/%.cpp=objs/%.o)

.PHONY:	clean 

all: $(PGM)

objs/%.o:	$(SRC_DIR)/%.cpp
	@[ -d objs ] || mkdir objs
	@[ -d deps ] || mkdir deps
	g++ $(MY_CFLAGS) -MMD -MF"$(@:objs/%.o=deps/%.d)" -o"$@" "$<"

$(PGM):	$(OBJS)
	g++ -o $@ $(OBJS) $(MY_LDFLAGS) 

clean:
	rm -rf deps objs $(PGM)

run:	$(PGM)
	./$(PGM)
