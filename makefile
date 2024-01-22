TARGET = Project

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

$(TARGET) : $(OBJ)
	gcc $(OBJ) $(FLAGS) -o $(TARGET)

%.o : %.c
	gcc $(FLAGS)-c $< -o $@


.PHONY : clean
clean :
	del *.o $(TARGET).exe -rf
