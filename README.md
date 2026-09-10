# ECU Simulation System

## Overview

The Automotive ECU Simulation System is a modular C-based project that simulates basic functionality of multiple Electronic Control Units (ECUs) in a vehicle.

The project demonstrates practical concepts in C programming, Linux system programming, GCC compilation, Makefile-based build management, recursive Make, process management, shell scripting, logging, and Git.

The system includes five simulated ECU modules:

- Engine ECU
- Brake ECU
- Body ECU
- HVAC ECU
- Infotainment ECU

Each ECU maintains its own internal state and provides initialization, update, and status-display functionality.

> **Note:** This is a software simulation developed for learning and demonstration purposes. It does not interface with real vehicle hardware, CAN networks, sensors, or actuators.

## Features

- Modular C-based ECU architecture
- Five independent ECU modules
- ECU initialization, update, and status monitoring
- File-based logging
- GCC-based compilation
- Recursive Make using multiple Makefiles
- Parallel build support
- Linux process creation and management
- Parent-child process handling using `fork()`
- PID and PPID monitoring
- Process synchronization using `waitpid()`
- Shell-based build automation
- Git and GitHub version control

## Project Structure

```text
car-ecu-system/
├── build/
├── data/
├── include/
│   ├── engine_ecu.h
│   ├── brake_ecu.h
│   ├── body_ecu.h
│   ├── hvac_ecu.h
│   ├── infotainment_ecu.h
│   └── logger.h
├── logs/
├── process/
│   ├── Makefile
│   └── ecu_process_manager.c
├── scripts/
│   └── build.sh
├── source/
│   ├── main.c
│   ├── engine_ecu.c
│   ├── brake_ecu.c
│   ├── body_ecu.c
│   ├── hvac_ecu.c
│   ├── infotainment_ecu.c
│   ├── logger.c
│   └── Makefile
├── .gitignore
├── Makefile
└── README.md
