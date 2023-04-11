#! Commands
CC = cc
RM = rm -f
AR = ar -rc

#! Flags
CFLAGS = -Wall -Wextra -Werror


CLIENT = client
SERVER = server
CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus
UTILS = ./utils/libftprintf.a

#! Rules

all: $(CLIENT) $(SERVER)

bonus: $(CLIENT_BONUS) $(SERVER_BONUS)

$(UTILS):
	make -C ./utils

$(CLIENT): $(UTILS)

	$(CC) $(CFLAGS) client.c $(UTILS) -o $(CLIENT) 

$(SERVER): $(UTILS)
	$(CC) $(CFLAGS) server.c $(UTILS) -o $(SERVER)

$(CLIENT_BONUS): $(UTILS)

	$(CC) $(CFLAGS) client_bonus.c $(UTILS) -o $(CLIENT_BONUS) 

$(SERVER_BONUS): $(UTILS)
	$(CC) $(CFLAGS) server_bonus.c $(UTILS) -o $(SERVER_BONUS)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o

clean:
	$(RM) $(CLIENT) $(SERVER) $(CLIENT_BONUS) $(SERVER_BONUS)
	make clean -C ./utils

fclean: clean
	$(RM) $(CLIENT) $(SERVER) $(CLIENT_BONUS) $(SERVER_BONUS)
	make fclean -C ./utils

re: fclean all