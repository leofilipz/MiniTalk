#MINITALK 42 SCHOOL height="55" align="right" />&nbsp; 

## Grade: 125/100

### Installing and running the project:

1- Clone this repository
	
	git clone https://github.com/leofilipz/MiniTalk
2- run `make`
	
3- `make clean` so that you don't keep those object files that you won't need anymore

	make clean
4- Run server and copy its PID to the client alongside the message you want to send.

	./server
	./client <server_PID> <message>

###  Subject: [minitalk en_subject](./extras/en.subject_minitalk.pdf)

#### Makefile Available Targets:  
`make` or `make all` - Makes _client_ and _server_  
`make clean` - Deletes all the resulting object files  
`make fclean` - Deletes the executables and all the resulting object files  
`make re` - fclean + all  
`make bonus` - same as `all`, added for subject purposes  
