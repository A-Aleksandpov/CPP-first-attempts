// created by Anton Alexanderov.
#include <iostream>
using namespace std;

int main()
{
	short quant;
	//quantity of food/rooms
	short choice;

	//max person in room

	short Qrooms = 0, Qpasta = 0, Qsoup = 0, Qburger = 0, Qsalad = 0, Qcheesecake = 0;
	//quantity of rooms, pasta e.t.c
	short Srooms = 0, Spasta = 0, Ssoup = 0, Sburger = 0, Ssalad = 0, Scheesecake = 0;
	// sold rooms, pasta e.t.c.
	short Total_rooms = 0, Total_pasta = 0, Total_soup = 0, Total_burger = 0, Total_salad = 0, Total_cheesecake = 0;
	// total price
	cout << "\n\t Quantity of items we have";
	//n = next line t = horizontal space
	cout << "\n Rooms availible ";
	cin >> Qrooms;
	cout << "\n Quantity of pasta ";
	cin >> Qpasta;
	cout << "\n Quantity of soup ";
	cin >> Qsoup;
	cout << "\n Quantity of burger ";
	cin >> Qburger;
	cout << "\n Quantity of salad ";
	cin >> Qsalad;
	cout << "\n Quantity of cheesecake ";
	cin >> Qcheesecake;

m:
	// menu label to comeback after choice
	cout << "\n\t\t\t Please select from the menu options";
	cout << "n\n1) rooms";
	cout << "\n2) pasta";
	cout << "\n3) soup";
	cout << "\n4) burger";
	cout << "\n5) salad";
	cout << "\n6) cheesecake";
	cout << "\n7) Information regarding sales and collection";
	cout << "\n8 Exit";

	cout << "\n\n Please enter your choice!";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\n\n Enter the room number you want:";

		cin >> quant;
		if (Qrooms - Srooms >= quant)
		{
			Srooms = Srooms + quant;
			Total_rooms = Total_rooms + quant * 999;
			//999, 70 price of room, pasta e.t.c.
			cout << "\n\n\t\t" << quant << "Room/Rooms have been alloted to you ";
		}
		else

			cout << "\n\tOnly" << Qrooms - Srooms << "Rooms remaining in hotel ";
		break;

	case 2:
		cout << "\n\n Enter pasta Quantity: ";

		cin >> quant;
		if (Qpasta - Spasta >= quant)
		{
			Spasta = Spasta + quant;
			Total_pasta = Total_pasta + quant * 70;
			cout << "\n\n\t\t" << quant << "Your pasta order has been accepted ";
		}
		else

			cout << "\n\tOnly" << Qpasta - Spasta << "Pasta remaining in hotel ";
		break;

	case 3:
		cout << "\n\n Enter soup Quantity:";

		cin >> quant;
		if (Qsoup - Ssoup >= quant)
		{
			Ssoup = Ssoup + quant;
			Total_soup = Total_soup + quant * 85;
			cout << "\n\n\t\t" << quant << "Your soup order has been accepted ";
		}
		else

			cout << "\n\tOnly" << Qsoup - Ssoup << "Soup remaining in hotel ";
		break;

	case 4:
		cout << "\n\n Enter burger Quantity: ";

		cin >> quant;
		if (Qburger - Sburger >= quant)
		{
			Sburger = Sburger + quant;
			Total_burger = Total_burger + quant * 130;
			cout << "\n\n\t\t" << quant << "Your burger order has been accepted ";
		}
		else

			cout << "\n\tOnly" << Qburger - Sburger << "Burger remaining in hotel ";
		break;

	case 5:
		cout << "\n\n Enter salad Quantity: ";

		cin >> quant;
		if (Qsalad - Ssalad >= quant)
		{
			Ssalad = Ssalad + quant;
			Total_salad = Total_salad + quant * 40;
			cout << "\n\n\t\t" << quant << "Your salad order has been accepted ";
		}
		else

			cout << "\n\tOnly" << Qsalad - Ssalad << "Salad remaining in hotel ";
		break;

	case 6:
		cout << "\n\n Enter cheesecake Quantity: ";

		cin >> quant;
		if (Qcheesecake - Scheesecake >= quant)
		{
			Scheesecake = Scheesecake + quant;
			Total_cheesecake = Total_cheesecake + quant * 60;
			cout << "\n\n\t\t" << quant << "Your cheesecake order has been accepted ";
		}
		else

			cout << "\n\tOnly" << Qcheesecake - Scheesecake << "Cheesecake remaining in hotel ";
		break;

	case 7:
		cout << "\n\n Details of sales and collection ";
		cout << "\n\n Number of rooms we had: " << Qrooms;
		cout << "\n\n Number of rooms we gave for rent " << Srooms;
		cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
		cout << "\n\n Total rooms collection for the day: " << Total_rooms;

		cout << "\n\n Number of pastas we had: " << Qpasta;
		cout << "\n\n Number of pastas we gave for rent " << Spasta;
		cout << "\n\n Remaining pastas: " << Qpasta - Spasta;
		cout << "\n\n Total pastas collection for the day: " << Total_pasta;

		cout << "\n\n Number of soups we had: " << Qsoup;
		cout << "\n\n Number of soups we gave for rent " << Ssoup;
		cout << "\n\n Remaining soups: " << Qsoup - Ssoup;
		cout << "\n\n Total soups collection for the day: " << Total_soup;

		cout << "\n\n Number of burgers we had: " << Qburger;
		cout << "\n\n Number of burgers we gave for rent " << Sburger;
		cout << "\n\n Remaining burgers: " << Qburger - Sburger;
		cout << "\n\n Total burgers collection for the day: " << Total_burger;

		cout << "\n\n Number of salads  we had: " << Qsalad;
		cout << "\n\n Number of salads we gave for rent " << Ssalad;
		cout << "\n\n Remaining salads: " << Qsalad - Ssalad;
		cout << "\n\n Total salads collection for the day: " << Total_salad;

		cout << "\n\n Number of cheesecakes  we had: " << Qcheesecake;
		cout << "\n\n Number of cheesecakes we gave for rent " << Scheesecake;
		cout << "\n\n Remaining cheesecakes: " << Qcheesecake - Scheesecake;
		cout << "\n\n Total cheesecakes collection for the day: " << Total_cheesecake;

	case 8:
		exit(0);

	default:
		cout << "\n Please select the numbers mentioned above!";
	}
	goto m;
	// back to menu
}