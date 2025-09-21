typedef struct Contact {
    char firstName[50];
    char lastName[50];
    char phone[15];
} contact_t;

void list_contacts(contact_t contacts[], int contactCount);
void add_contact(contact_t contacts[], int* contactCount);
void edit_contact(contact_t contacts[], int contactCount);
void remove_contact(contact_t contacts[], int* contactCount);