# 🖥️ CPU Scheduling Simulator

A **cross-platform** CPU Scheduling Simulator written in **C**, implementing classic Operating System scheduling algorithms.  
This project demonstrates key OS concepts such as **process scheduling**, **waiting time calculation**, **turnaround time analysis**, and **CPU utilization**.

---

## 📌 Features

- **Multiple Scheduling Algorithms**
  - ✅ First Come First Serve (FCFS)
  - ✅ Shortest Job First (SJF - Non-Preemptive)
  - ✅ Round Robin (RR)
  - ✅ Priority Scheduling (Non-Preemptive)
- **Detailed Metrics**
  - Waiting Time & Turnaround Time calculation
  - Gantt Chart visualization (text-based)
  - Average performance metrics
- **Cross-Platform Support**
  - Works on Windows, Linux, and macOS
  - Automatic OS detection and compilation
- **Interactive Menu**
  - User-friendly interface to select algorithms
- **Clean Modular Structure**
  - Each algorithm implemented in separate modules

---

## 🚀 Quick Start Guide (First-Time Users)

### Prerequisites
- **GCC Compiler** (GNU Compiler Collection)
  - **Windows**: Install [MinGW-w64](https://www.mingw-w64.org/) or use [Dev-C++](https://www.bloodshed.net/devcpp.html)
  - **Linux**: `sudo apt install gcc` (Ubuntu/Debian) or `sudo yum install gcc` (RedHat/CentOS)
  - **macOS**: Install Xcode Command Line Tools: `xcode-select --install`

### Step 1: Clone or Download the Project
```bash
# Option 1: Clone with Git
git clone https://github.com/Flames004/thread_scheduler_simulator.git
cd thread_scheduler_simulator

# Option 2: Download ZIP and extract
# Then navigate to the extracted folder
```

### Step 2: Build the Project

**🪟 Windows Users:**
```cmd
cd src
build.bat
```

**🐧 Linux/Unix Users:**
```bash
cd src
chmod +x build.sh
./build.sh
```

**🍎 macOS Users:**
```bash
cd src
chmod +x build.sh
./build.sh
```

### Step 3: Run the Simulator

**🪟 Windows:**
```cmd
scheduler.exe
```

**🐧 Linux/Unix/macOS:**
```bash
./scheduler
```

---

## 📂 Project Structure

```
thread-scheduler-simulator/
│
├── src/                         # Source code directory
│   ├── main.c                   # Main menu and program entry
│   ├── fcfs/
│   │   └── fcfs.c               # FCFS implementation
│   ├── sjf/
│   │   └── sjf.c                # SJF implementation
│   ├── round_robin/
│   │   └── rr.c                 # Round Robin implementation
│   ├── priority/
│   │   └── priority.c           # Priority Scheduling implementation
│   ├── build.bat                # Windows build script
│   ├── build.sh                 # Linux/Unix build script
│   ├── build-universal.sh       # Universal build script
│   └── Makefile                 # Cross-platform Makefile
│
├── examples/                    # Example inputs and outputs
│   ├── input1.txt               # Sample process data
│   ├── input2.txt               # More sample data
│   └── output_demo.txt          # Expected output examples
│
├── docs/                        # Documentation and diagrams
│   ├── gantt_example.png        # Gantt chart examples
│   └── flowchart.png            # Algorithm flowcharts
│
├── .gitignore                   # Git ignore file
└── README.md                    # This file
```

---

## 🛠️ Advanced Build Options

### Option 1: Simple Build Scripts (Recommended for Beginners)

**Windows:**
```cmd
cd src
build.bat
```

**Linux/Unix:**
```bash
cd src
./build.sh
```

### Option 2: Universal Build Script
Works on all platforms (including Git Bash on Windows):
```bash
cd src
chmod +x build-universal.sh
./build-universal.sh
```

### Option 3: Using Make (Advanced Users)
```bash
cd src
make           # Build all
make clean     # Clean compiled files
make help      # Show help
```

### Option 4: Manual Compilation

**Windows:**
```cmd
cd src
gcc fcfs/fcfs.c -o fcfs/fcfs.exe
gcc sjf/sjf.c -o sjf/sjf.exe
gcc round_robin/rr.c -o round_robin/rr.exe
gcc priority/priority.c -o priority/priority.exe
gcc main.c -o scheduler.exe
```

**Linux/Unix/macOS:**
```bash
cd src
gcc fcfs/fcfs.c -o fcfs/fcfs
gcc sjf/sjf.c -o sjf/sjf
gcc round_robin/rr.c -o round_robin/rr
gcc priority/priority.c -o priority/priority
gcc main.c -o scheduler
```

---

## 📊 Example Usage

### Sample Input/Output

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
- **Simple**: Processes executed in arrival order
- **Non-preemptive**: Once started, runs to completion
- **Pros**: Fair, easy to implement
- **Cons**: May cause convoy effect (long processes block short ones)

### 🔹 Shortest Job First (SJF - Non-Preemptive)
- **Optimal**: Minimizes average waiting time
- **Greedy**: Always picks shortest remaining job
- **Pros**: Efficient for batch systems
- **Cons**: May cause starvation for long processes

### 🔹 Round Robin (RR)
- **Time-sharing**: Each process gets fixed time quantum
- **Preemptive**: Ensures fairness through rotation
- **Pros**: Good response time, fair
- **Cons**: Context switching overhead

### 🔹 Priority Scheduling
- **Priority-based**: Higher priority processes run first
- **Flexible**: Can be preemptive or non-preemptive
- **Pros**: Important tasks get preference
- **Cons**: Low priority processes may starve

---

## 🔧 Troubleshooting

### Common Issues

**1. "gcc: command not found"**
- Install GCC compiler for your operating system
- On Windows: Install MinGW or use an IDE like Dev-C++
- On Linux: `sudo apt install gcc` or `sudo yum install gcc`
- On macOS: `xcode-select --install`

**2. "Permission denied" on Linux/macOS**
```bash
chmod +x build.sh
chmod +x build-universal.sh
```

**3. "No such file or directory" when running**
- Make sure you're in the `src` directory
- Check if compilation was successful (no error messages)

**4. Build script doesn't work**
- Try manual compilation method
- Check if all source files exist in their respective folders

---

## 🌟 Future Enhancements

- [ ] Add **SJF Preemptive (Shortest Remaining Time First)**
- [ ] Implement **Multilevel Queue Scheduling**
- [ ] Create **graphical Gantt charts** using Python/GUI
- [ ] Add **file input support** for batch processing
- [ ] Include **aging mechanism** to prevent starvation
- [ ] Add **real-time scheduling algorithms**

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/new-algorithm`)
3. **Commit** your changes (`git commit -am 'Add new scheduling algorithm'`)
4. **Push** to the branch (`git push origin feature/new-algorithm`)
5. **Open** a Pull Request

### Areas for Contribution:
- New scheduling algorithms
- GUI implementation
- Performance optimizations
- Better error handling
- Documentation improvements

---

**Happy Scheduling! 🎯**

