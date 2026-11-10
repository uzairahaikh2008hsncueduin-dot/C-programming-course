#include <stdio.h>

int main() {
int n, i;
printf("Enter number of processes: "); scanf("%d", &n);

int arrival[n], burst[n], waiting[n], turnaround[n], completion[n], start[n]; float avg_wait = 0, avg_tat = 0;

// Input process details 
for (i = 0; i < n; i++) {
printf("\nEnter arrival time for P%d: ", i + 1); 
scanf("%d", &arrival[i]);
printf("Enter burst time for P%d: ", i + 1);
scanf("%d", &burst[i]);

}

// FCFS Scheduling start[0] = arrival[0];
completion[0] = start[0] + burst[0]; 
waiting[0] = start[0] - arrival[0];
 turnaround[0] = completion[0] - arrival[0];

// For remaining processes 
for (i = 1; i < n; i++) {

// CPU idle check
if (completion[i-1] < arrival[i]) { start[i] = arrival[i];	// CPU waits
} else {
start[i] = completion[i-1]; // CPU free, next process starts immediately
}

completion[i] = start[i] + burst[i]; waiting[i] = start[i] - arrival[i]; turnaround[i] = completion[i] - arrival[i];
}

// Average calculation 
for (i = 0; i < n; i++) {
avg_wait += waiting[i]; avg_tat += turnaround[i];
}

avg_wait /= n; avg_tat /= n;

// Output table 
printf("\nProcess\tAT\tBT\tST\tCT\tWT\tTAT\n"); for (i = 0; i < n; i++) {
printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
i + 1, arrival[i], burst[i], start[i], completion[i], waiting[i], turnaround[i]);
}
printf("\nAverage Waiting Time: %.2f", avg_wait); printf("\nAverage Turnaround Time: %.2f\n", avg_tat);
return 0;
}