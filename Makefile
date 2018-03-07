
px = ./X_Frame/
lop = ./OP_Layer/
lep = ./EP_Layer/
lfa = ./FA_Layer/
las = ./AS_Layer/

obj_X = $(px)RegExLib.o $(px)X_Tool.o $(px)X_CmdTarget.o $(px)X_CFGLoader.o $(px)X_XMLParser.o $(px)tinyxml2.o
obj_OP = $(lop)FileOPer.o
obj_EP = $(lep)LineEPer.o $(lep)FileManager.o
obj_FA = $(lfa)FAitfX.o
obj_AS = $(las)ASitfX.o

FA_Auto_X: FA_Auto_X.o $(obj_X) $(obj_OP) $(obj_EP) $(obj_FA) $(obj_AS)
	g++ -o FA_Auto_X FA_Auto_X.o $(obj_X) $(obj_OP) $(obj_EP) $(obj_FA) $(obj_AS)

FA_Auto_X.o: FA_Auto_X.cpp
	g++ -c FA_Auto_X.cpp

RegExLib.o: $(px)RegExLib.h $(px)RegExLib.cpp
	g++ -c $(px)RegExLib.cpp

X_Tool.o: $(px)X_Tool.h $(px)X_Tool.cpp
	g++ -c $(px)X_Tool.cpp

X_CmdTarget.o: $(px)X_CmdTarget.h $(px)X_CmdTarget.cpp
	g++ -c $(px)X_CmdTarget.cpp

X_CFGLoader.o: $(px)X_CFGLoader.h $(px)X_CFGLoader.cpp
	g++ -c $(px)X_CFGLoader.cpp

X_XMLParser.o: $(px)X_XMLParser.h $(px)X_XMLParser.cpp
	g++ -c $(px)X_XMLParser.cpp

tinyxml2.o: $(px)tinyxml2.h $(px)tinyxml2.cpp
	g++ -c $(px)tinyxml2.cpp

FileOPer.o: $(lop)FileOPer.h $(lop)FileOPer.cpp
	g++ -c $(lop)FileOPer.cpp

LineEPer.o: $(lep)LineEPer.h $(lep)LineEPer.cpp
	g++ -c $(lep)LineEPer.cpp

FileManager.o: $(lep)FileManager.h $(lep)FileManager.cpp
	g++ -c $(lep)FileManager.cpp

FAitfX.o: $(lfa)FAitfX.h $(lfa)FAitfX.cpp
	g++ -c $(lfa)FAitfX.cpp

ASitfX.o: $(las)ASitfX.h $(las)ASitfX.cpp
	g++ -c $(las)ASitfX.cpp

.PHONY:clean
clean:
	rm $(px)*.o $(lop)*.o $(lep)*.o $(lfa)*.o $(las)*.o *.o FA_Auto_X
