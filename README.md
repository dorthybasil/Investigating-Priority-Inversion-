
# Investigating Priority Inversion in a Real-Time System

## Project Overview
This project investigates priority inversion in a real-time operating system.

Priority inversion occurs when a high-priority task is delayed because a low-priority task holds a shared resource, while a medium-priority task continues executing.

## Objectives
- Understand priority inversion.
- Study real-time task scheduling.
- Implement priority inheritance.
- Implement priority ceiling concepts.
- Compare scheduling approaches.

## Algorithms and Protocols

### 1. Normal Priority Scheduling
A low-priority task holds a shared resource. A high-priority task gets blocked, while a medium-priority task executes.

### 2. Priority Inheritance Protocol (PIP)
The low-priority task temporarily inherits the priority of the blocked high-priority task.

### 3. Priority Ceiling Protocol (PCP)
A shared resource is assigned a priority ceiling to control resource access and prevent uncontrolled priority inversion.

## Technologies Used
- Programming Language: C
- Operating System Concepts: Real-Time Scheduling
- Compiler: GCC

## How to Run

1. Download the repository.
2. Open a terminal in the project folder.
3. Compile the program:

   gcc priority_inversion.c -o priority_inversion

4. Run the program:

   ./priority_inversion

## Expected Output
The program displays three scheduling scenarios:
- Normal Priority Scheduling
- Priority Inheritance Protocol
- Priority Ceiling Protocol

It also displays a comparison summary.

## Conclusion
This project demonstrates how priority inversion affects real-time systems and explains how priority inheritance and priority ceiling protocols help control resource-related delays.

## Developed By
Department of Computer Science and Engineering
