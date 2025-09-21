# General Design:

## contact.h has:
  
    contact_t:

    49 character first name

    49 character last name

    15 character phone number (not validated)
	  

    void list_contacts(contact_t contacts[10]);

    void add_contact(contact_t contacts[10]);

    void edit_contact(contact_t contacts[10]);

    void remove_contact(contact_t contacts[10]);

## Main loop:

    Main menu:

      List Contacts:

        Prints all contacts

      Add Contact:

        Enter First Name, Last Name

      Remove Contact: 

        Print index next to contact names, select number at index to remove

      Edit contact:

        Print index next to contact names, select number at index to enter edit screen per contact:

          Edit first name

          Edit last name

          Edit phone number

          Go back

      Close program
    
