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
- Note: depending on the program index value, necessary arguments are different.
- If no necessity, my codes doesn't allow it.
## POSIX Threading
Consist of two different threads
• Consist of a global integer counter.
• One thread should enter the following loop:
    1. Sleep for a random interval between 1 to 1000 milliseconds
    2. Print and increment the global counter
• The other thread should:
    1. Sleep for a random interval between 1 to 1000 milliseconds
    2. Read an integer value from the stdin, and store it in the global counter

When working with threads in this section
1. I 
2. 

#### run with
```
./digital_gate 1
```
![an image](images/digital_gate_1.png)

## POSIX Signals
```
./digital_gate 2
```
![an image](images/digital_gate_2.png)

## POSIX Socket
![an image](images/digital_gate_3_4.png)

## Serialization
```
./digital_gate 5
```
![an image](images/digital_gate_5.png)

## State Machines
![an image](images/digital_gate_6.png)
