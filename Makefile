OBJ = main.o BMScontrol.o UImanager.o CourseArray.o BookArray.o Course.o Book.o DList.o Product.o Gift.o Apparel.o Eletronics.o

a1:	$(OBJ)
	g++ -o a1 $(OBJ)

main.o:	main.cc
	g++ -c main.cc

BMScontrol.o:	BMScontrol.cc BMScontrol.h defs.h
	g++ -c BMScontrol.cc

UImanager.o:	UImanager.cc UImanager.h 
	g++ -c UImanager.cc

CourseArray.o:	CourseArray.cc CourseArray.h Course.h
	g++ -c CourseArray.cc

BookArray.o:	BookArray.cc BookArray.h Book.h
	g++ -c BookArray.cc

Course.o:	Course.cc Course.h defs.h
	g++ -c Course.cc

Book.o:	Book.cc Book.h defs.h Product.h
	g++ -c Book.cc

DList.o:	DList.cc DList.h Course.h
	g++ -c DList.cc
Product.o:	Product.cc Product.h Book.h 
	g++ -c Product.cc

Gift.o:	Gift.cc Gift.h Book.h Product.h
	g++ -c Gift.cc

Apparel.o:	Apparel.cc Apparel.h Book.h Product.h 
	g++ -c Apparel.cc

Eletronics.o:	Eletronics.cc Eletronics.h Book.h Product.h
	g++ -c Eletronics.cc
clean:
	rm -f *.o a1



