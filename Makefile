CC=gcc
CXX=g++
RM=rm -f

CPPFLAGS=-std=c++11

SRCS=main.cpp Generator.cpp ParametersContainer.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: pepekestaal

pepekestaal: $(OBJS)
	$(CXX) -o pepekestaal $(OBJS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) pepekestaal

include: .depend