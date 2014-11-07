CC=gcc
CXX=g++
RM=rm -f

vpath %.cpp src/domain src/ui
vpath %.h include/
CPPFLAGS=-g -std=c++11 -I include

SRCS=main.cpp Generator.cpp ParametersContainer.cpp PPWindow.cpp
OBJS=$(SRCS:.cpp=.o)

all: pepekestaal

pepekestaal: $(OBJS)
	$(CXX) $(CPPFLAGS) $^ -o $@   `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp Generator.h ParametersContainer.h PPWindow.h
	$(CXX) -c $(CPPFLAGS) $< -o $@ `pkg-config gtkmm-3.0 --cflags --libs`

Generator.o: Generator.cpp Generator.h
	$(CXX) -c $(CPPFLAGS) $< -o $@

ParametersContainer.o: ParametersContainer.cpp ParametersContainer.h
	$(CXX) -c $(CPPFLAGS) $< -o $@

PPWindow.o: PPWindow.cpp PPWindow.h Generator.h ParametersContainer.h
	$(CXX) -c $(CPPFLAGS) $< -o $@ `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) pepekestaal



