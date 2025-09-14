typedef struct Contact {
    char firstName[50];
    char lastName[50];
    char phone[15];
} contact_t;

void list_contacts(contact_t contacts[]);
void add_contact(contact_t contacts[]);
void edit_contact(contact_t contacts[]);
void remove_contact(contact_t contacts[]);