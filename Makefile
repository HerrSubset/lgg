CC=gcc
CXX=g++
RM=rm -f

LDLIBS=$(shell pkg-config gtkmm-3.0 --cflags --libs)
CPPFLAGS=-g -std=c++11

SRCS=main.cpp Generator.cpp ParametersContainer.cpp PPWindow.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: pepekestaal

pepekestaal: $(OBJS)
	$(CXX) -o pepekestaal $(OBJS) $(LDLIBS)

main.o: main.cpp Generator.h ParametersContainer.h PPWindow.h
	$(CXX) -c $(CPPFLAGS) main.cpp `pkg-config gtkmm-3.0 --cflags --libs`

Generator.o: Generator.cpp Generator.h
	$(CXX) -c $(CPPFLAGS) Generator.cpp

ParametersContainer.o: ParametersContainer.cpp ParametersContainer.h
	$(CXX) -c $(CPPFLAGS) ParametersContainer.cpp

PPWindow.o: PPWindow.cpp PPWindow.h Generator.h ParametersContainer.h
	$(CXX) -c $(CPPFLAGS) PPWindow.cpp `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) pepekestaal



