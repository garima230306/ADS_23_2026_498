#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    
    cout << "============================================\n";
    cout << "       FCFS CPU SCHEDULING ALGORITHM       \n";
    cout << "============================================\n";
    cout << "Enter number of processes: ";
    cin >> n;
    
    // Arrays to store process details
    int pid[10], arrival[10], burst[10];
    int completion[10], turnaround[10], waiting[10];
    
    // Input process details
    cout << "\n--- Enter Process Details ---\n";
    for(int i = 0; i < n; i++) {
        pid[i] = i + 1;
        cout << "\nProcess P" << pid[i] << ":\n";
        cout << "  Arrival Time: ";
        cin >> arrival[i];
        cout << "  Burst Time: ";
        cin >> burst[i];
    }
    
    // Sort processes by arrival time (FCFS)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arrival[j] > arrival[j + 1]) {
                // Swap arrival times
                swap(arrival[j], arrival[j + 1]);
                // Swap burst times
                swap(burst[j], burst[j + 1]);
                // Swap process IDs
                swap(pid[j], pid[j + 1]);
            }
        }
    }
    
    // Calculate completion, turnaround, and waiting times
    int currentTime = 0;
    
    cout << "\n--- Execution Order ---\n";
    for(int i = 0; i < n; i++) {
        // If CPU is idle, jump to next process arrival
        if(currentTime < arrival[i]) {
            currentTime = arrival[i];
        }
        
        // Calculate completion time
        completion[i] = currentTime + burst[i];
        
        // Calculate turnaround time = completion - arrival
        turnaround[i] = completion[i] - arrival[i];
        
        // Calculate waiting time = turnaround - burst
        waiting[i] = turnaround[i] - burst[i];
        
        // Display execution order
        cout << "P" << pid[i] << " executes from " << currentTime 
             << " to " << completion[i] << endl;
        
        // Update current time
        currentTime = completion[i];
    }
    
    // Display results in table format
    cout << "\n============================================================\n";
    cout << "                     RESULTS TABLE                          \n";
    cout << "============================================================\n";
    cout << "Process\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n";
    cout << "------------------------------------------------------------\n";
    
    float totalTurnaround = 0, totalWaiting = 0;
    
    for(int i = 0; i < n; i++) {
        cout << "P" << pid[i] << "\t"
             << arrival[i] << "\t"
             << burst[i] << "\t"
             << completion[i] << "\t\t"
             << turnaround[i] << "\t\t"
             << waiting[i] << "\n";
             
        totalTurnaround += turnaround[i];
        totalWaiting += waiting[i];
    }
    
    cout << "------------------------------------------------------------\n";
    cout << "Average Turnaround Time: " << fixed << setprecision(2) 
         << totalTurnaround / n << endl;
    cout << "Average Waiting Time: " << fixed << setprecision(2) 
         << totalWaiting / n << endl;
    
    // Display Gantt Chart
    cout << "\n==================== GANTT CHART ====================\n";
    cout << " ";
    for(int i = 0; i < n; i++) {
        cout << "---------";
    }
    cout << "\n|";
    
    for(int i = 0; i < n; i++) {
        cout << "  P" << pid[i] << "  |";
    }
    cout << "\n ";
    
    for(int i = 0; i < n; i++) {
        cout << "---------";
    }
    cout << "\n";
    
    // Display time points
    cout << arrival[0];
    for(int i = 0; i < n; i++) {
        cout << "\t" << completion[i];
    }
    cout << "\n====================================================\n";
    
    return 0;
}