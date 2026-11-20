
#include <stdio.h>

void normalScheduling() {
    printf("\n===== NORMAL PRIORITY SCHEDULING =====\n");

    printf("Time 0: Low priority task (L) locks resource.\n");
    printf("Time 1: High priority task (H) requests resource.\n");
    printf("Time 2: H gets blocked because L holds resource.\n");
    printf("Time 3: Medium priority task (M) starts executing.\n");
    printf("Time 4: M continues executing.\n");
    printf("Time 5: L cannot release the resource promptly.\n");
    printf("Time 6: L resumes and releases resource.\n");
    printf("Time 7: H gets the resource and executes.\n");

    printf("Result: Priority inversion occurs.\n");
}

void priorityInheritance() {
    printf("\n===== PRIORITY INHERITANCE PROTOCOL =====\n");

    printf("Time 0: L locks the shared resource.\n");
    printf("Time 1: H requests the resource and gets blocked.\n");
    printf("Time 2: L inherits H's priority.\n");
    printf("Time 3: L executes with high priority.\n");
    printf("Time 4: L releases the resource.\n");
    printf("Time 5: H gets the resource and executes.\n");
    printf("Time 6: L returns to its original priority.\n");

    printf("Result: Priority inversion is reduced.\n");
}

void priorityCeiling() {
    printf("\n===== PRIORITY CEILING PROTOCOL =====\n");

    printf("Time 0: L locks the shared resource.\n");
    printf("        Resource ceiling priority is applied.\n");
    printf("Time 1: M cannot preempt L while the ceiling applies.\n");
    printf("Time 2: L continues and releases the resource.\n");
    printf("Time 3: H gets the resource and executes.\n");

    printf("Result: Priority inversion is controlled.\n");
}

int main() {
    printf("PRIORITY INVERSION IN REAL-TIME SYSTEMS\n");

    normalScheduling();
    priorityInheritance();
    priorityCeiling();

    printf("\n===== COMPARISON SUMMARY =====\n");
    printf("Normal Scheduling: Priority inversion occurs.\n");
    printf("Priority Inheritance: Blocking is reduced.\n");
    printf("Priority Ceiling: Resource conflicts are controlled.\n");

    return 0;
}
