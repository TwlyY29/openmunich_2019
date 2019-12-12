INST_PATH = ./test/
BOOST_VERS = 1.65.1

DIR_SRC = src
DIR_BUILD = build
DIR_ALGOS = ../core/

SRCS= $(wildcard $(DIR_SRC)/*.cpp)
OBJS= $(addprefix $(DIR_BUILD)/,$(notdir $(SRCS:.cpp=.o)))
MODULES = $(addprefix $(DIR_BUILD)/,$(notdir $(SRCS:.cpp=.so)))
MODULE_INST_PATH = $(addprefix $(INST_PATH)/,$(notdir $(SRCS:.cpp=)))

INCS=$(DIR_ALGOS) /usr/include/
LIBS=
LIBDIRS=/usr/lib

CPP= g++
MKDIR= mkdir

CXXFLAGS= -std=c++11 -O3 -g -c -Wall

python3: PYVERS=python3.6
python3: PYLIBS=$(LIBS) :libboost_python3.so.$(BOOST_VERS)
python3: PYLIBDIRS=$(LIBDIRS)
python3: buildlib

python2: PYVERS=python2.7
python2: PYLIBS=$(LIBS) :libboost_python.so.$(BOOST_VERS)
python3: PYLIBDIRS=$(LIBDIRS)
python2: buildlib


buildlib: $(MODULES) | $(MODULE_INST_PATH)
	@cp $(MODULES) $(MODULE_INST_PATH)

$(MODULE_INST_PATH):
	$(MKDIR) -p $@

$(DIR_BUILD)/%.so: $(OBJS)
	$(CPP) -shared $^ $(addprefix -L,$(PYLIBDIRS)) $(shell $(PYVERS)-config --ldflags) $(addprefix -l,$(PYLIBS)) -o $@

$(DIR_BUILD)/%.o: $(DIR_SRC)/%.cpp | $(DIR_BUILD)
	$(CPP) $(CXXFLAGS) -fPIC $(addprefix -I,$(INCS)) $(shell $(PYVERS)-config --includes) -o $@ $^

$(DIR_BUILD):
	$(MKDIR) -p $@

clean:
	@$(RM) -f $(OBJ) *~
	@$(RM) -f $(MODULES) *~
	@$(RM) -fr $(DIR_BUILD)

