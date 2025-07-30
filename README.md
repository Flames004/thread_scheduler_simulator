# 🖥️ Thread Scheduler Simulator

A CPU Scheduling Simulator written in **C**, implementing classic Operating System scheduling algorithms.  
This project demonstrates key OS concepts such as **process scheduling**, **waiting time calculation**, **turnaround time analysis**, and **CPU utilization**.  

---

## 📌 Features

- **Multiple Scheduling Algorithms**
  - ✅ First Come First Serve (FCFS)
  - ✅ Shortest Job First (SJF - Non-Preemptive)
  - ✅ Round Robin (RR)
  - ✅ Priority Scheduling (Non-Preemptive)
- **Detailed Metrics**
  - Waiting Time
  - Turnaround Time
  - Gantt Chart (text-based)
- **Interactive Menu**
  - Select any algorithm from a central launcher
- **Clean Structure**
  - Each algorithm is implemented in its own module

---

## 📂 Project Structure

```

thread-scheduler-simulator/
│
├── src
│   ├── main.c                   # Central launcher
│   ├── build.sh                 # Script to compile everything
│   ├── fcfs/
│   │   └── fcfs.c               # FCFS implementation
│   ├── sjf/
│   │   └── sjf.c                # SJF (Non-preemptive) implementation
│   ├── round_robin/
│   │   └── rr.c                 # Round Robin implementation
│   └── priority/
│       └── priority.c           # Priority Scheduling implementation
│   
├── examples/
│   ├── input1.txt           # Example input
│   ├── input2.txt
│   └── output\_demo.txt      # Sample output
│
├── docs/
│   ├── gantt\_example.png    # Example Gantt Chart
│   └── flowchart.png        # Optional flowchart of scheduling logic
├── .gitignore               # Ignore compiled files
└── README.md                # Project documentation

````

---

## ⚙️ How to Build and Run

### 1. Clone the Repository
```bash
git clone https://github.com/Flames004/thread_scheduler_simulator.git
cd thread_scheduler_simulator
````

### 2. Compile Everything

Using the provided script:

```bash
chmod +x build.sh
./build.sh
```

Or compile manually:

```bash
gcc fcfs/fcfs.c -o fcfs/fcfs
gcc sjf/sjf.c -o sjf/sjf
gcc round_robin/rr.c -o round_robin/rr
gcc priority/priority.c -o priority/priority
gcc main.c -o scheduler
```

### 3. Run the Launcher

```bash
./scheduler
```

---

## 📊 Example Run

### Input

```
===== CPU Scheduling Simulator =====
1. First Come First Serve (FCFS)
2. Shortest Job First (SJF - Non Preemptive)
3. Round Robin
4. Priority Scheduling
5. Exit
Enter your choice: 1

Enter number of processes: 3
Enter Arrival Time and Burst Time for P1: 0 5
Enter Arrival Time and Burst Time for P2: 1 3
Enter Arrival Time and Burst Time for P3: 2 8
```

### Output

```
--- FCFS Scheduling ---
Gantt Chart:
| P1 | P2 | P3 |
0    5    8    16

Average Waiting Time: 3.33
Average Turnaround Time: 8.33
```

---

## 📘 Algorithms Explained

### 🔹 First Come First Serve (FCFS)

* Processes are scheduled in the order they arrive.
* **Non-preemptive**: once a process starts, it runs until completion.
* Fair but may cause **Convoy Effect**.

### 🔹 Shortest Job First (SJF - Non-Preemptive)

* Always selects the process with the smallest **burst time** among the available ones.
* Minimizes average waiting time.
* May cause **starvation** for long processes.

### 🔹 Round Robin (RR)

* Each process gets a fixed **time quantum** in a cyclic order.
* **Preemptive**: ensures fairness.
* Best for **time-sharing systems**.

### 🔹 Priority Scheduling

* Each process has a priority; CPU is given to the highest priority process.
* **Non-preemptive** in this implementation.
* May cause **starvation** for low-priority processes (can be avoided with aging).

---

## 📈 Future Enhancements

* Add **SJF Preemptive (Shortest Remaining Time First)**.
* Include **Multilevel Queue Scheduling**.
* Create a **graphical Gantt chart** using Python or C graphics.
* Add support for reading processes from a file.

---

