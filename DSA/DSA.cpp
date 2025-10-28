#include <iostream>
#include "clsQueueLine.h"  // include your class header

using namespace std;

int main()
{
    clsQueueLine Queue1("A", 5); // Prefix A, average serve time = 5 minutes per client

    Queue1.IssueTicket();
    Queue1.IssueTicket();
    Queue1.IssueTicket();

    cout << "\n\nQueue Information:\n";
    Queue1.PrintInfo();

    cout << "\nTickets Line (Left to Right):";
    Queue1.PrintTicketsLineLTR();

    cout << "\nTickets Line (Right to Left):";
    Queue1.PrintTicketsLineRTL();

    cout << "\n\nWho is next: " << Queue1.WhoIsNext() << endl;

    cout << "\n\nServing next client...\n";
    Queue1.ServeNextClient();

    cout << "\nUpdated Queue Info:";
    Queue1.PrintInfo();

    cout << "\nTickets Line After Serving One:";
    Queue1.PrintTicketsLineLTR();

    cout << "\n\nAll Ticket Details:";
    Queue1.PrintAllTickets();

    cout << "\n\n";
    system("pause");
    return 0;
}
