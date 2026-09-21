#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define STORAGE_FILE "priority_queue.dat"
#define MAX_VALUE_LEN 256

typedef struct {
    int id;
    int priority;
    char value[MAX_VALUE_LEN];
} PQItem;

// Global array state for the priority queue
static PQItem *pq_items = NULL;
static int pq_size = 0;
static int pq_capacity = 0;
static int id_counter = 0;

// Internal helpers
static void _load_from_disk() {
    FILE *file = fopen(STORAGE_FILE, "rb");
    if (!file) {
        pq_size = 0;
        pq_capacity = 10;
        pq_items = malloc(pq_capacity * sizeof(PQItem));
        id_counter = 0;
        return;
    }

    fread(&id_counter, sizeof(int), 1, file);
    fread(&pq_size, sizeof(int), 1, file);
    
    pq_capacity = pq_size > 0 ? pq_size * 2 : 10;
    pq_items = malloc(pq_capacity * sizeof(PQItem));
    
    if (pq_size > 0) {
        fread(pq_items, sizeof(PQItem), pq_size, file);
    }
    fclose(file);
}

static void _save_to_disk() {
    FILE *file = fopen(STORAGE_FILE, "wb");
    if (!file) return;

    fwrite(&id_counter, sizeof(int), 1, file);
    fwrite(&pq_size, sizeof(int), 1, file);
    if (pq_size > 0) {
        fwrite(pq_items, sizeof(PQItem), pq_size, file);
    }
    fclose(file);
}

static void _ensure_capacity() {
    if (pq_size >= pq_capacity) {
        pq_capacity *= 2;
        pq_items = realloc(pq_items, pq_capacity * sizeof(PQItem));
    }
}

// Assignment Required Functions

int insert(int priority, const char *value) {
    _load_from_disk();
    _ensure_capacity();

    id_counter++;
    PQItem item;
    item.id = id_counter;
    item.priority = priority;
    strncpy(item.value, value, MAX_VALUE_LEN - 1);
    item.value[MAX_VALUE_LEN - 1] = '\0';

    pq_items[pq_size++] = item;
    _save_to_disk();
    
    int assigned_id = id_counter;
    free(pq_items);
    return assigned_id;
}

bool is_empty() {
    _load_from_disk();
    bool empty = (pq_size == 0);
    free(pq_items);
    return empty;
}

bool peek(int *out_priority, char *out_value, int *out_id) {
    _load_from_disk();
    if (pq_size == 0) {
        free(pq_items);
        return false;
    }

    // Min priority is considered highest importance
    int min_idx = 0;
    for (int i = 1; i < pq_size; i++) {
        if (pq_items[i].priority < pq_items[min_idx].priority) {
            min_idx = i;
        }
    }

    *out_priority = pq_items[min_idx].priority;
    *out_id = pq_items[min_idx].id;
    strcpy(out_value, pq_items[min_idx].value);

    free(pq_items);
    return true;
}

bool extract_min(int *out_priority, char *out_value, int *out_id) {
    _load_from_disk();
    if (pq_size == 0) {
        free(pq_items);
        return false;
    }

    int min_idx = 0;
    for (int i = 1; i < pq_size; i++) {
        if (pq_items[i].priority < pq_items[min_idx].priority) {
            min_idx = i;
        }
    }

    *out_priority = pq_items[min_idx].priority;
    *out_id = pq_items[min_idx].id;
    strcpy(out_value, pq_items[min_idx].value);

    // Shift items to fill the hole
    for (int i = min_idx; i < pq_size - 1; i++) {
        pq_items[i] = pq_items[i + 1];
    }
    pq_size--;

    _save_to_disk();
    free(pq_items);
    return true;
}

bool extract_max(int *out_priority, char *out_value, int *out_id) {
    _load_from_disk();
    if (pq_size == 0) {
        free(pq_items);
        return false;
    }

    int max_idx = 0;
    for (int i = 1; i < pq_size; i++) {
        if (pq_items[i].priority > pq_items[max_idx].priority) {
            max_idx = i;
        }
    }

    *out_priority = pq_items[max_idx].priority;
    *out_id = pq_items[max_idx].id;
    strcpy(out_value, pq_items[max_idx].value);

    for (int i = max_idx; i < pq_size - 1; i++) {
        pq_items[i] = pq_items[i + 1];
    }
    pq_size--;

    _save_to_disk();
    free(pq_items);
    return true;
}

bool update(int item_id, int new_priority) {
    _load_from_disk();
    bool updated = false;

    for (int i = 0; i < pq_size; i++) {
        if (pq_items[i].id == item_id) {
            pq_items[i].priority = new_priority;
            updated = true;
            break;
        }
    }

    if (updated) {
        _save_to_disk();
    }
    free(pq_items);
    return updated;
}

bool delete(int item_id) {
    _load_from_disk();
    int found_idx = -1;

    for (int i = 0; i < pq_size; i++) {
        if (pq_items[i].id == item_id) {
            found_idx = i;
            break;
        }
    }

    if (found_idx == -1) {
        free(pq_items);
        return false;
    }

    for (int i = found_idx; i < pq_size - 1; i++) {
        pq_items[i] = pq_items[i + 1];
    }
    pq_size--;

    _save_to_disk();
    free(pq_items);
    return true;
}
