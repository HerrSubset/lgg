CC=gcc
CXX=g++
RM=rm -f

SRCS=main.cpp Generator.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: pepekestaal

pepekestaal: $(OBJS)
	$(CXX) -o pepekestaal $(OBJS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) -MM $^>>./.depend

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) pepekestaal

include: .depend