- This is my test for DigitalGate AMG

## Compile the project
```
make
make clean
```

## Run the project
```
./digital_gate [program index] [second argument] [third argument]
```
- Depending on the program index value, necessary arguments are different.
- If no necessity, my codes doesn't allow it.

## POSIX Threading

- Consist of two different threads
    - Consist of a global integer counter.
    - One thread should enter the following loop:
        - Sleep for a random interval between 1 to 1000 milliseconds
        - Print and increment the global counter
    - The other thread should:
        - Sleep for a random interval between 1 to 1000 milliseconds
        - Read an integer value from the stdin, and store it in the global counter

##### When working with threads in this section
- There were two threads running simultaneously. When the second thread prompted for an input by displaying the message ```Input "counter":```, however, before I could input anything, the first thread printed the counter on the terminal, which resulted in me being unable to provide the desired input.
(I just let the second thread cancel first one till I input)

#### run with
```
./digital_gate 1
```
![an image](images/digital_gate_1.png)

## POSIX Signals

- Write a simple program that:
    - Sleeps for 1 second
    - Increments an integer counter

When Ctrl + c is pressed in the terminal, the number of seconds elapsed shall be printed and the program must continue counting without exiting.

- I just handled the SIGINT signal using ```sighandler_t signal(int signum, sighandler_t handler);``` function as assigning```signum = SIGINT```.

```
./digital_gate 2
```
![an image](images/digital_gate_2.png)

## POSIX Socket
- Write a simple program that: - Listens to incoming UDP packets and prints them along with their originating IP address
- Explain how you tested your app.
```
./digital_gate 3
```
```
./digital_gate 4
```
![an image](images/digital_gate_3_4.png)

## Serialization
```
typedef struct
{
    int Code;
    char * Reason;
} Crash;
```
A such C struct was given and I copied its content into ```char *buffer``` using C ``` void *memcpy(void *dest, const void *src, size_t n);``` function.

Description was:
- We need to send this data to another application with UDP sockets.
- Convert this object to a buffer that can be sent via UDP socket. 
NOTE: There is no need to actually send the data, the objective is to just construct the buffer so that it can be sent over the network.

```
./digital_gate 5 12345 package_1

```
![an image](images/digital_gate_5.png)

## State Machines
![an image](images/digital_gate_6.png)
