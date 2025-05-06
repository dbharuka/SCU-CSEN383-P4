# Page Replacement Algorithms Simulation

This project simulates classic **Page Replacement Algorithms** used in operating systems for memory management. Implemented in **C**, the simulation allows running and comparing five different algorithms for analyzing page fault behavior.

## Implemented Algorithms

- **FCFS (First-Come, First-Served)** – `FCFS.c`
- **LFU (Least Frequently Used)** – `LFU.c`
- **LRU (Least Recently Used)** – `LRU.c`
- **MFU (Most Frequently Used)** – `MFU.c`
- **Random Replacement** – `R.c`

## Project Structure

```
.
│   Project Description.pdf      # Problem statement and requirements
│   README.md                    # This file
│
├───output                       # Output logs for each algorithm
│       FCFS.txt
│       LFU.txt
│       LRU.txt
│       MFU.txt
│       Random.txt
│
└───src                          # Source code files
        FCFS.c                   # FCFS algorithm
        LFU.c                    # LFU algorithm
        LRU.c                    # LRU algorithm
        Makefile                 # For building the simulation
        MFU.c                    # MFU algorithm
        PAGE.c                   # Shared utility functions
        PAGE.h                   # Header file for PAGE.c
        R.c                      # Random algorithm (your part)
        SIMULATION.c             # Driver to run selected algorithm
```

## Compilation and Execution

### Using Make

```bash
cd src
make
```

This compiles all the `.c` files and creates the `simulation` executable.

### Executing

Run the simulation with the desired algorithm name:

```bash
./simulation FCFS
./simulation LRU
./simulation LFU
./simulation MFU
./simulation Random
```

### Saving Output

Redirect the output to text files inside the `output/` directory:

```bash
./simulation FCFS > ../output/FCFS.txt
./simulation LRU > ../output/LRU.txt
./simulation LFU > ../output/LFU.txt
./simulation MFU > ../output/MFU.txt
./simulation Random > ../output/Random.txt
```

### Cleaning the Build

To clean compiled files:

```bash
make clean
```

## Output Details

Each output file includes:
- Sequence of page requests and frame status updates
- Page faults and replacements
- Final summary including hit/miss ratios and total faults

## Notes

- Ensure that `output/` folder exists before saving results via redirection.
- The simulation takes user input or internally defined sequences depending on the implementation.
- All algorithms follow the same interface for ease of comparison.
