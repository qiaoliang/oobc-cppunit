CPPTEST_LIB_DIR = ./ut/lib

# Where to find user code.
USER_DIR = ./src

OBJ_DIR = ./output/ut
PRODUCT_OBJ_DIR = ./output/bin
MAIN_OBJ = $(PRODUCT_SRC_DIR)/main.cpp

EXTENSION = cpp 

CPPTEST_INCLUDE_DIR = $(CPPTEST_LIB_DIR)/include
UT_INCLUDE_DIR = ./ut/include
UT_SRC_DIR = ./ut/src

PRODUCT_INCLUDE_DIR = ./include
PRODUCT_SRC_DIR = ./src

# Flags passed to the preprocessor.
CPPFLAGS += -I$(CPPTEST_INCLUDE_DIR) -I$(UT_INCLUDE_DIR) -I$(PRODUCT_INCLUDE_DIR)

# Flags passed to the C++ compiler.
CXXFLAGS += -O2 -w -Wextra -lrt 

# All tests produced by this Makefile.  Remember to add new tests you

all : ut product

clean :
	rm -f $(OBJ_DIR)/* $(PRODUCT_OBJ_DIR)/*

# Builds gtest.a and gtest_main.a.

UT_SRC = $(wildcard $(UT_SRC_DIR)/*.$(EXTENSION))
PRODUCT_SRC = $(wildcard $(PRODUCT_SRC_DIR)/*.$(EXTENSION))
UT_HEADER = $(wildcard $(UT_INCLUDE_DIR)/*.h)
PRODUCT_HEADER = $(wildcard $(PRODUCT_INCLUDE_DIR)/*.h)

UT_OBJS = $(patsubst $(UT_SRC_DIR)/%.$(EXTENSION), $(OBJ_DIR)/%.o,$(UT_SRC))
PRODUCT_OBJS = $(patsubst $(PRODUCT_SRC_DIR)/%.$(EXTENSION), $(PRODUCT_OBJ_DIR)/%.o,$(PRODUCT_SRC))
PRODUCT_FOR_UT = $(filter-out $(MAIN_OBJ), $(PRODUCT_OBJS))


$(OBJ_DIR)/%.o : $(UT_SRC_DIR)/%.$(EXTENSION)
	@echo ' 1 '
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -I$(CPPTEST_INCLUDE_DIR) -I$(UT_INCLUDE_DIR) -I$(PRODUCT_INCLUDE_DIR) -o $@

$(PRODUCT_OBJ_DIR)/%.o : $(PRODUCT_SRC_DIR)/%.$(EXTENSION)
	@echo ' 2' 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -I$(PRODUCT_INCLUDE_DIR) -o $@
	
ut : $(UT_OBJS) $(PRODUCT_FOR_UT) 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -pthread $^ -o $(OBJ_DIR)/$@

product : $(PRODUCT_OBJS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -pthread $^ -o $(PRODUCT_OBJ_DIR)/$@
