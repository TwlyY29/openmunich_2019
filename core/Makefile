PROG_BASE= fancystuff

DIR_SRC = src
DIR_BUILD = build
DIR_ALGOS = ./

SRCS= $(wildcard $(DIR_SRC)/*.cpp)
OBJS= $(addprefix $(DIR_BUILD)/,$(notdir $(SRCS:.cpp=.o)))
DEPS= $(OBJS:.o=.d)))

INCS=$(DIR_ALGOS)

LIBS=
LIBDIRS=

CPP= g++
MKDIR= mkdir

CXXFLAGS= -std=c++11 -O3 -g -Wall
LDFLAGS=$(addprefix -L,$(LIBDIRS))
LDLIBS=$(addprefix -l,$(LIBS))
INCLUDES=$(addprefix -I, $(INCS))

.PHONY: all run clean
-include $(DEPS)

all: $(PROG_BASE)
	@echo $(INCLUDES)

$(PROG_BASE): $(OBJS)
	$(CPP) $(LDFLAGS) $^ -o $@ $(LDLIBS)

$(DIR_BUILD)/%.o: $(DIR_SRC)/%.cpp | $(DIR_BUILD)
	$(CPP) $(CXXFLAGS) $(INCLUDES) -MMD -c $< -o $@

$(DIR_BUILD):
	$(MKDIR) -p $@

clean:
	@$(RM) -fr $(DIR_BUILD)
	@$(RM) -f $(OBJ) *~

run: $(PROG_BASE)
	./$<

