CC = gcc

CFLAGS = -Wall -Wextra -g

TARGET = rbt

SRC = main.c \
      insert.c \
      insert_fix.c \
      delete.c \
      delete_fixup.c \
      delete_min.c \
      delete_max.c \
      rotate.c \
      find_min.c \
      find_max.c \
      display.c \
      validate.c

OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c main.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)