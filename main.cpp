#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <limits>
#include <fstream>

using namespace std;

void welcompage() { // done 
    /* Display the title concert*/
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << setw(75) << setfill('=') << "" << std::endl;
    std::cout << std::endl;
    std::cout << "________/\\\\\\\\\\\\\\\\\\_______/\\\\\\\\\\_______/\\\\\\______________/\\\\\\\\\\\\\\\\\\\\\\\\____   " << std::endl;
    std::cout << " _____/\\\\\\////////______/\\\\\\///\\\\\\____\\/\\\\\\_____________\\/\\\\\\////////\\\\\\__       " << std::endl;
    std::cout << "  ___/\\\\\\/_____________/\\\\\\/__\\///\\\\\\__\\/\\\\\\_____________\\/\\\\\\______\\//\\\\\\_  " << std::endl;
    std::cout << "   __/\\\\\\______________/\\\\\\______\\//\\\\\\_\\/\\\\\\_____________\\/\\\\\\_______\\/\\\\\\_     " << std::endl;
    std::cout << "    _\\/\\\\\\_____________\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\_____________\\/\\\\\\_______\\/\\\\\\_    " << std::endl;
    std::cout << "     _\\//\\\\\\____________\\//\\\\\\______/\\\\\\__\\/\\\\\\_____________\\/\\\\\\_______\\/\\\\\\_   " << std::endl;
    std::cout << "      __\\///\\\\\\___________\\///\\\\\\__/\\\\\\____\\/\\\\\\_____________\\/\\\\\\_______/\\\\\\__  " << std::endl;
    std::cout << "       ____\\////\\\\\\\\\\\\\\\\\\____\\///\\\\\\\\\\/_____\\/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_\\/\\\\\\\\\\\\\\\\\\\\\\\\/___ " << std::endl;
    std::cout << "        _______\\/////////_______\\/////_______\\///////////////__\\////////////_____" << std::endl;
    std::cout << "__/\\\\\\\\\\\\\\\\\\\\\\\\\\____/\\\\\\_________________/\\\\\\\\\\\\\\\\\\_____/\\\\\\________/\\\\\\_   " << std::endl;
    std::cout << " _\\/\\\\\\/////////\\\\\\_\\/\\\\\\_______________/\\\\\\\\\\\\\\\\\\\\\\\\\\__\\///\\\\\\____/\\\\\\/__       " << std::endl;
    std::cout << "  _\\/\\\\\\_______\\/\\\\\\_\\/\\\\\\______________/\\\\\\/////////\\\\\\___\\///\\\\\\/\\\\\\/____      " << std::endl;
    std::cout << "   _\\/\\\\\\\\\\\\\\\\\\\\\\\\\\/__\\/\\\\\\_____________\\/\\\\\\_______\\/\\\\\\_____\\///\\\\\\/______     " << std::endl;
    std::cout << "    _\\/\\\\\\/////////____\\/\\\\\\_____________\\/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_______\\/\\\\\\_______    " << std::endl;
    std::cout << "     _\\/\\\\\\_____________\\/\\\\\\_____________\\/\\\\\\/////////\\\\\\_______\\/\\\\\\_______   " << std::endl;
    std::cout << "      _\\/\\\\\\_____________\\/\\\\\\_____________\\/\\\\\\_______\\/\\\\\\_______\\/\\\\\\_______  " << std::endl;
    std::cout << "       _\\/\\\\\\_____________\\/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_\\/\\\\\\_______\\/\\\\\\_______\\/\\\\\\_______ " << std::endl;
    std::cout << "        _\\///______________\\///////////////__\\///________\\///________\\///________" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << setw(75) << setfill('=') << "" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

/* Writing new user data to the file user.txt */
void signUp(string username, string password, string userType = "user") { // passing in the variable to the files 
    ofstream file("users.txt", ios::app); // Open the file in append mode
    if (!file) {
        cerr << "Unable to open file for writing";// Error messsage File unable to open 
        exit(1); // call system to stop
    }
    file << "\n" << username << " " << password << " " << userType; // Write the user details to the file
    file.close();
}

bool validation_username(string username) {
    string user, pass, type; // declaration variables
    ifstream file("users.txt"); // Open the file in read mode
    if (!file) { // if file not found
        cerr << "Unable to open file for reading";// print error message that file is not found
        exit(1); // call system to stop
    }
    while (file >> user >> pass >> type) { // Read each line of the file
        if (user == username) { // If the username
            return true;
        }
    }
    file.close();
    return false;
}

void print_user_choice() {
    std::cout << " _____________________________" << std::endl;
    std::cout << "| Code  |Choice               |" << std::endl;
    std::cout << "|-------|---------------------|" << std::endl;
    std::cout << "|   1   |View Seat            |" << std::endl;
    std::cout << "|-------|---------------------|" << std::endl;
    std::cout << "|   2   |Booking              |" << std::endl;
    std::cout << "|-------|---------------------|" << std::endl;
    std::cout << "|   3   |Show purchased ticket|" << std::endl;
    std::cout << "|-------|---------------------|" << std::endl;
    std::cout << "|   4   |Log Out              |" << std::endl;
    std::cout << "|_______|_____________________|" << std::endl;
}

void areaseatshow() {
    std::cout << "                            ____________________\n";
    std::cout << "                           |                    |\n";
    std::cout << "                           |                    |\n";
    std::cout << "                           |       STAGE        |\n";
    std::cout << "                           |                    |\n";
    std::cout << "                           |____________________|\n";
    std::cout << "     ____________________   ____________________   ____________________\n";
    std::cout << "    |                    | |                    | |                    |\n";
    std::cout << "    |                    | |                    | |                    |\n";
    std::cout << "    |         L          | |         V          | |         R          |\n";
    std::cout << "    |                    | |                    | |                    |\n";
    std::cout << "    |____________________| |____________________| |____________________|\n";
    std::cout << "                            ____________________\n";
    std::cout << "                           |                    |\n";
    std::cout << "                           |                    |\n";
    std::cout << "                           |         B          |\n";
    std::cout << "                           |                    |\n";
    std::cout << "                           |____________________|\n\n";
    std::cout << "    |  V  |  VIP seats    | RM 888.00 |\n";
    std::cout << "    |  L  |  LEFT seats   | RM 666.00 |\n";
    std::cout << "    |  R  |  RIGHT seats  | RM 666.00 |\n";
    std::cout << "    |  B  |  BACK seats   | RM 333.00 |\n";

}

bool isValidChar(char ch, bool book) {
    if (ch == 'V' || ch == 'B' || ch == 'L' || ch == 'R')
    {
        return true;
    }
    else
    {
        std::cout << "Invalid syntax" << std::endl;
        if (book) {
            std::cout << "Press enter key to continue..." << std::endl;
            std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
            cin.get();
        }
        return false;
    }
}

bool check_seat_taken(int area, int number_seat, bool seat[4][5][10]) {// done
    int y_axis_of_array, x_axis_of_array;
    y_axis_of_array = (number_seat - 1) / 10;
    x_axis_of_array = (number_seat - 1) % 10;
    if (number_seat != 0) {
        if (seat[area][y_axis_of_array][x_axis_of_array]) {
            return true;

        }
        else {
            return false;
        }
    }
    return false;
}

void print_seat_available(int area_num_forLoop, bool seat[4][5][10]) {
    int seat_num{ 1 };
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << setfill('0');
    for (int y{ 0 }; y < 5; y++) {
        for (int x{ 0 }; x < 10; x++) {
            if (!seat[area_num_forLoop][y][x]) {
                SetConsoleTextAttribute(hConsole, 2);
                std::cout << "\t(" << setw(3) << right << seat_num << ")";
            }
            else {
                SetConsoleTextAttribute(hConsole, 4);
                std::cout << "\t(" << setw(3) << right << seat_num << ")";
            }
            SetConsoleTextAttribute(hConsole, 7); // reset color back to white
            seat_num++;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    SetConsoleTextAttribute(hConsole, 2);
    std::cout << "Color green are available seats." << std::endl;
    SetConsoleTextAttribute(hConsole, 4);
    std::cout << "Color red are seats that are taken." << std::endl;
    SetConsoleTextAttribute(hConsole, 7);

    std::cout << std::endl;
    std::cout << "Press enter key to continue..." << std::endl;/// this have to do some modification
    std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    cin.get();
}

void print_seat_book(int area_num_forLoop, bool seat[4][5][10]) {
    int seat_num{ 1 };
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << setfill('0');
    for (int y{ 0 }; y < 5; y++) {
        for (int x{ 0 }; x < 10; x++) {
            if (!(seat[area_num_forLoop][y][x])) {
                SetConsoleTextAttribute(hConsole, 2);
                std::cout << "\t(" << setw(3) << right << seat_num << ")";
            }
            else {
                SetConsoleTextAttribute(hConsole, 4);
                std::cout << "\t(" << setw(3) << right << seat_num << ")";
            }
            SetConsoleTextAttribute(hConsole, 7); // reset color back to white
            seat_num++;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    SetConsoleTextAttribute(hConsole, 2);
    std::cout << "Color green are available seats." << std::endl;
    SetConsoleTextAttribute(hConsole, 4);
    std::cout << "Color red are seats that are taken." << std::endl;
    SetConsoleTextAttribute(hConsole, 7);

    std::cout << std::endl;
}

int get_num_area(bool book) {
    char seat_area_char{};
    int area_num_forLoop{};
    do {
        system("cls");
        areaseatshow();
        std::cout << "Enter seat area (V, B, L, R): ";
        std::cin >> seat_area_char;
        seat_area_char = toupper(seat_area_char);

    } while (!isValidChar(seat_area_char, book));

    switch (seat_area_char)
    {
    case 'V':
        area_num_forLoop = 0;
        break;
    case 'B':
        area_num_forLoop = 1;
        break;
    case 'L':
        area_num_forLoop = 2;
        break;
    case 'R':
        area_num_forLoop = 3;
    }
    return area_num_forLoop;
}

void choice_view_seat(bool seat[4][5][10]) {
    int area_num_forLoop{};
    char seat_area_char{};
    area_num_forLoop = get_num_area(true);
    print_seat_available(area_num_forLoop, seat);
}

bool check_repitition_order(int* seatnum, int* seatarea, int new_area, int new_seat) {
    if (new_seat != 0) {
        for (int i = 0; i < 10; i++) {
            if (seatnum[i] == new_seat && seatarea[i] == new_area) {
                return true;
            }
        }
    }
    return false;
}
bool valid_yes_no(char ch) {
    if (ch != 'Y' && ch != 'N')
    {
        std::cout << "Invalid syntax" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}
void print_table_choice_payment() {
    std::cout << "Select a payment method " << std::endl;
    std::cout << " _____________________" << std::endl;
    std::cout << "| Code  | Payment     |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|1      |Qr payment   |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|2      |Card Payment |" << std::endl;
    std::cout << "|_______|_____________|" << std::endl;
}

double print_price(int* seatarea, int* seatnum) {
    double total{ 0 };
    for (size_t i{ 0 }; i < 10; i++) {
        if (seatnum[i] != 0) {
            if (seatarea[i] == 0) {
                total += 888;
            }
            else if (seatarea[i] == 1) {
                total += 333;
            }
            else if (seatarea[i] == 2 || seatarea[i] == 3) {
                total += 666;
            }
        }
    }
    return total;
}
bool qr_payment() {
    string code_path = ".\\qr\\", x, code{ "" }; //set default 
    int num;

    srand(time(NULL)); // Seed function to be called once only

    //open file
    for (size_t i = 0; i < 3; i++) {
        num = rand() % 10;
        code_path += to_string(num);
        code += to_string(num);
    }

    code_path += ".png";
    system(code_path.c_str());
    for (size_t count{ 1 }; count < 4; count++) {
        std::cout << "Enter the password :";
        std::cin >> x;
        if (code == x) {
            std::cout << "Payment succesfull!" << std::endl;
            return true;
        }
        else {
            if (count < 3) {
                std::cout << "Incorrect password, you still got " << 3 - count << " attempt." << endl;
            }
            else {
                std::cout << "Payment unsuccesfull" << endl;
            }
        }
    }
    return false;
}

bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();

    int nSum = 0;
    bool isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {

        int d = cardNo[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}

bool creditAndDebit_payment() {
    string cardNo;
    int cncount;
    for (cncount = 1; cncount < 4; cncount++) {
        std::cout << "Enter your credit card number :";
        std::cin >> cardNo;
        if (cardNo.length() > 12 && cardNo.length() < 20) {
            if (checkLuhn(cardNo)) {
                std::cout << "This is a valid card" << std::endl;
                std::cout << "Card payment successfull" << std::endl;
                return true;
            }
            else {
                if (cncount < 3) {
                    std::cout << "This is not a valid card. Please try again. You still have " << 3 - cncount << " attempt." << endl;
                }
                else {
                    std::cout << "Card payment unsucessfull" << std::endl;
                }
            }
        }
        else {
            std::cout << "Invalid card" << std::endl;
        }
    }
    return false;
}

void payment(int* seatarea, int* seatnum) {
    int number_payment;
    double total{};
    bool input_fail{ false }, out_range{ false }, payment_success{ false };
    /* Calulations to seatarea*/

    do {
        do {
            system("cls");
            print_table_choice_payment();
            total = print_price(seatarea, seatnum);
            std::cout << "The total is :" << fixed << setprecision(2) << total << std::endl;
            if (input_fail) {
                cout << "Invalid syntax" << endl;
            }
            else if (out_range) {
                cout << "Invalid Not In Range" << endl;
            }
            std::cout << "Select a payment method :";
            std::cin >> number_payment;
            if (std::cin.fail()) {// if user enter not a number 
                std::cin.clear();
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                input_fail = true;
            }
            else if (number_payment < 1 || number_payment >2) {
                out_range = true;
            }
            else {
                input_fail = false;
                out_range = false;
            }
        } while (out_range || input_fail);

        if (number_payment == 1)
        {
            payment_success = qr_payment();
        }
        else if (number_payment == 2)
        {
            payment_success = creditAndDebit_payment();
        }

    } while (!payment_success);
}

void print_ticket(int* seatarea, int* seatnum) {
    char print_seat_area{ '\0' };
    for (int i = 0; i < 10; i++) {
        if (seatnum[i] != 0) {
            if (seatarea[i] == 0) {
                print_seat_area = 'V';
            }
            else if (seatarea[i] == 1) {
                print_seat_area = 'B';
            }
            else if (seatarea[i] == 2) {
                print_seat_area = 'L';
            }
            else if (seatarea[i] == 3) {
                print_seat_area = 'R';
            }

            std::cout << " ____________________________ \n";
            std::cout << "|     COOL PLAY CONCERT      |\n";
            std::cout << "|        ENTRY TICKET        |\n";
            std::cout << "|                            |\n";
            std::cout << "|     YOUR SEAT IS : " << print_seat_area << setw(7) << setfill(' ') << left << seatnum[i] << setw(7) << setfill(' ') << "|" << endl;
            std::cout << "|                            |\n";
            std::cout << "|     ENJOY THE CONCERT!     |\n";
            std::cout << "|____________________________|\n";
        }
    }
}

/* Final update to seat */
void update_seat_database(int* seatarea, int* seatnum, bool seat[4][5][10]) {
    int area, row, column, temp;
    for (size_t i = 0; i < 10; i++) {
        if (seatnum[i] != 0) {
            area = seatarea[i];
            temp = seatnum[i];
            // calculation to get row and column

            temp -= 1;
            row = temp / 10;
            column = temp % 10;
            seat[area][row][column] = true;// update seat to true 
        }
    }
}

bool check_empty_spce(bool seat[4][5][10], int area_num_forLoop) {
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 10; x++) {
            if (!seat[area_num_forLoop][y][x]) {
                return false;
            }
        }
    }
    cin.ignore();
    cout << "Press any key to continue......" << endl;
    cin.get();
    return true;
}

void remove_data_order(int* seatnum, int* seatarea, int remove_num) {
    int temp_num[10]{ 0 }, temp_area[10]{ 0 };
    int index{ 0 };

    // first remove the data from seat num 
    remove_num--;
    seatnum[remove_num] = 0;
    seatarea[remove_num] = 0;



    // write which have numbers to temp 
    for (size_t i = 0; i < 10; i++) {
        if (seatnum[i] != 0) {
            temp_num[index] = seatnum[i];
            temp_area[index] = seatarea[i];
            index++;
        }
    }

    // copy temp to seatnum and seatarea
    for (size_t i = 0; i < 10; i++) {
        seatnum[i] = temp_num[i];
        seatarea[i] = temp_area[i];
    }
}

bool check_in_remove(int* seatnum, int* seatarea, int remove_index) {
    for (size_t i = 0; i < remove_index; i++) {
        if (seatnum[i] == 0) {
            return true;
        }
    }
    return false;
}
char change_num_char(int number) {
    char ch{ '\0' };
    switch (number)
    {
    case 0:
        ch = 'V';
        break;

    case 1:
        ch = 'B';
        break;
    case 2:
        ch = 'L';
        break;
    case 3:
        ch = 'R';
    }
    return ch;
}

void print_price_seat(int* seatarea, int* seatnum) {
    int seat_v{ 0 }, seat_b{ 0 }, seat_r{ 0 }, seat_l{ 0 }, number, counter{ 1 };
    const double PRICE[]{ 888.0,333.0,666.0 };
    char ch;
    for (size_t i = 0; i < 10; i++) {
        if (seatarea[i] == 0 && seatnum[i] != 0) {
            seat_v++;
        }
        else if (seatarea[i] == 1 && seatnum[i] != 0) {
            seat_b++;
        }
        else if (seatarea[i] == 2 && seatnum[i] != 0) {
            seat_l++;
        }
        else if (seatarea[i] == 3 && seatnum[i] != 0) {
            seat_r++;
        }
    }
    std::cout << setfill(' ') << std::endl;
    if (seat_v > 0) {
        std::cout << "The total of price seat v is:\tRM" << setw(7) << fixed << setprecision(2) << seat_v * PRICE[0] << std::endl;
    }
    if (seat_b > 0) {
        std::cout << "The total of price seat b is:\tRM" << setw(7) << fixed << setprecision(2) << seat_b * PRICE[1] << std::endl;
    }
    if (seat_l > 0) {
        std::cout << "The total of price seat l is:\tRM" << setw(7) << fixed << setprecision(2) << seat_l * PRICE[2] << std::endl;
    }
    if (seat_r > 0) {
        std::cout << "The total of price seat r is:\tRM" << setw(7) << fixed << setprecision(2) << seat_r * PRICE[2] << std::endl;
    }


    std::cout << setw(7) << left << "No.";
    for (size_t i = 0; i < 10; i++) {
        if (seatnum[i] != 0) {
            std::cout << setw(4) << setfill(' ') << right << counter << " ";
            counter++;
        }

    }
    std::cout << endl;

    std::cout << setw(7) << left << "Ticket";
    for (size_t i = 0; i < 10; i++) {
        if (seatnum[i] != 0) {
            number = seatarea[i];
            ch = change_num_char(number);
            std::cout << ch << setw(3) << setfill('0') << right << seatnum[i] << " ";
        }

    }
    std::cout << endl;
}

bool check_order_array(int* seatnum) {
    for (size_t i = 0; i < 10; i++) {
        if (seatnum[i] != 0) {
            return true;
        }
    }
    return false;
}
bool check_full_order(int* seatnum) {
    for (size_t i = 0; i < 10; i++) {
        if (seatnum[i] == 0) {
            return false;
        }
    }
    return true;
}

void update_user_order(int* seatnum, int* seatarea, int new_num_seat, int new_num_area) {
    int i = 0;
    bool haven_added{ true };
    while (i < 10 && haven_added) {
        if (seatnum[i] == 0) {
            seatnum[i] = new_num_seat;
            seatarea[i] = new_num_area;
            haven_added = false;// stop loop when added to order
            std::cout << "Ticket added to order succesfully" << std::endl;
        }
        i++;
    }
}

int change_area_to_num(char ch) {
    switch (ch) {
    case 'V':
        return 0;
        break;
    case 'B':
        return 1;
        break;
    case 'L':
        return 2;
        break;
    case 'R':
        return 3;
    }

    return -1;
}

void save_ticket(int* seatarea, int* seatnum, string username) { // passing in the variable to the files 
    ofstream file("ticketbuy.txt", ios::app); // Open the file in append mode
    if (!file) {
        cerr << "Unable to open file for writing";// Error messsage File unable to open 
        exit(1); // call system to stop
    }
    for (int i = 0; i < 10; i++) {
        if (seatnum[i] != 0) {
            file << "\n" << username << " " << change_num_char(seatarea[i]) << " " << seatnum[i]; // Write the user details to the file
        }
    }
    file.close();
}

void choice_pick_seat(bool seat[4][5][10], string username) {
    int seatnum[10]{ 0 }, seatarea[10]{ 0 };
    int choice_num_seat{ 0 }, area_num_forLoop, remove_num;
    bool continue_purchase = true, validate_number_seat_user{ false }, seat_out_of_range{ false }, seat_taken{ false }, repitition_seat{ false }, remove_order{ true }, valid_remove_in_order{ false }, valid_remove_range{ false }, valid_num_remove{ false };
    char user_continue_purchase, remove_purcharse;

    do {
        if (choice_num_seat == 0) {
            do {
                area_num_forLoop = get_num_area(true);
            } while (check_empty_spce(seat, area_num_forLoop));
        }


        do {
            // here 
            std::cout << "This is your seat ticket " << std::endl;
            print_seat_book(area_num_forLoop, seat);// this shoud get number of seat change this
            // error message after the first do while loop 
            if (validate_number_seat_user) {
                std::cout << "Invalid syntax" << std::endl;
            }
            else if (seat_out_of_range) {
                std::cout << "Invalid range seat" << std::endl;
            }
            else if (seat_taken) {
                std::cout << "Seat has been taken " << std::endl;
            }
            else if (repitition_seat) {
                std::cout << "This seat has already been order " << std::endl;
            }
            std::cout << "Enter 0 to number of seat if you don't want to continue order this area" << std::endl;
            std::cout << "Enter the number of seat :";
            std::cin >> choice_num_seat;
            // validation by using event control 
            if (std::cin.fail()) {// if user enter not a number 
                std::cin.clear();
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                validate_number_seat_user = true;
            }
            else {
                validate_number_seat_user = false;
            }

            seat_out_of_range = (choice_num_seat < 0 || choice_num_seat >50) ? true : false;

            seat_taken = (check_seat_taken(area_num_forLoop, choice_num_seat, seat)) ? true : false;

            repitition_seat = (check_repitition_order(seatnum, seatarea, area_num_forLoop, choice_num_seat)) ? true : false;

        } while (validate_number_seat_user || seat_out_of_range || seat_taken || repitition_seat);

        if (choice_num_seat != 0) {//
            // update to order list 
            update_user_order(seatnum, seatarea, choice_num_seat, area_num_forLoop);
        }

        if (check_order_array(seatnum)) {// this is if got one order will ask want to remove ? or else continue
            do {
                do {
                    print_price_seat(seatarea, seatnum);
                    std::cout << "Do you want to remove order ticket (y/n):";
                    std::cin >> remove_purcharse;
                    remove_purcharse = std::toupper(remove_purcharse);
                } while (valid_yes_no(remove_purcharse));
                remove_order = (remove_purcharse == 'Y') ? true : false;

                // if user wants to remove
                if (remove_order) {

                    do {
                        // error message will appear after the user enter wrongly this put in front cuz to to have a clear display
                        if (valid_num_remove) {
                            std::cout << "Invalid syntax" << std::endl;
                        }
                        else if (valid_remove_range)
                        {
                            std::cout << "Invalid Not In Range" << std::endl;
                        }
                        else if (valid_remove_in_order)
                        {
                            std::cout << "Invalid Not In Your Order List" << std::endl;
                        }


                        std::cout << "Enter the the number of order in the ticket :";
                        std::cin >> remove_num;

                        // this type  of validation not so correct need to change to short hand 
                        if (std::cin.fail()) {// check if user enter not a number 
                            std::cin.clear();
                            std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                            valid_num_remove = true;
                        }
                        else {
                            valid_num_remove = false;
                        }
                        valid_remove_range = (remove_num < 1 || remove_num >10);
                        valid_remove_in_order = check_in_remove(seatnum, seatarea, remove_num);
                    } while (valid_num_remove || valid_remove_range || valid_remove_in_order);
                    // then now remove
                    remove_data_order(seatnum, seatarea, remove_num);
                }
            } while (check_order_array(seatnum) && remove_order);
        }


        if (!check_full_order(seatnum)) {
            if (check_order_array(seatnum)) {
                do {
                    std::cout << "Do you want to purchase another ticket(y/n)";
                    std::cin >> user_continue_purchase;
                    user_continue_purchase = toupper(user_continue_purchase);
                } while (valid_yes_no(user_continue_purchase));
                continue_purchase = (user_continue_purchase == 'Y') ? true : false;
            }
            else {
                do {
                    std::cout << "Do you want to purchase a ticket(y/n)";
                    std::cin >> user_continue_purchase;
                    user_continue_purchase = toupper(user_continue_purchase);
                } while (valid_yes_no(user_continue_purchase));
                continue_purchase = (user_continue_purchase == 'Y') ? true : false;
            }
        }
    } while (!check_full_order(seatnum) && continue_purchase);
    // if got order then continue 
    if (check_order_array(seatnum)) {
        //then now continue to payment 
        payment(seatarea, seatnum);
        // then ticket 
        print_ticket(seatarea, seatnum);
        // update buy tickets
        save_ticket(seatarea, seatnum, username);
        // update to everyone 
        update_seat_database(seatarea, seatnum, seat);
    }

}

void user_brought_ticket(string username) { //this one don't need to write in report first 
    string user, seatarea, seatnum;
    int counter{ 0 };
    bool check_user{ false };
    ifstream file("ticketbuy.txt"); // Open the file in read mode
    if (!file) { // if file not found
        cerr << "Unable to open file for reading";// print error message that file is not found
        exit(1); // call system to stop
    }
    while (file >> user >> seatarea >> seatnum) { // Read each line of the file
        if (user == username) {
            check_user = true;
        }
    }
    file.close();

    if (check_user) {
        cout << "Ticket your have brought " << endl;
        cout << setw(5) << left << setfill(' ') << "No." << setw(6) << right << "Ticket" << endl;
        ifstream file("ticketbuy.txt");
        while (file >> user >> seatarea >> seatnum) { // Read each line of the file
            if (user == username) { // If user purchase
                counter++;
                cout << setw(3) << right << setfill(' ') << counter << ". " << seatarea << setw(2) << right << setfill('0') << seatnum << endl;
            }
        }

    }
    else {
        cout << "There is no purchased ticket found\n";
    }
    cout << "Press enter key to continue......" << endl;
    std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    cin.get();
    file.close();
}

void userinterface(bool* booking, bool seat[4][5][10], string username) {
    bool continue_purchase = true, valid_choice_user{ true };
    int  choice_user;
    do {
        system("cls");
        welcompage();

        std::cout << "Booking Ticket system" << std::endl;

        do {
            print_user_choice();// print table of choice 

            std::cout << "Enter the number to proceed :";
            std::cin >> choice_user;
            if (std::cin.fail() || choice_user < 1 || choice_user >4) { // Check if the input is not a number
                std::cin.clear(); // Clear the input stream
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n'); // Ignore the rest of the line
                std::cout << "Invalid syntax" << std::endl;
            }
            else {
                valid_choice_user = false;
            }
        } while (valid_choice_user);

        if (choice_user == 1) {
            choice_view_seat(seat);
        }
        else if (choice_user == 2) {
            if (*booking) {
                choice_pick_seat(seat, username);
                std::cout << "Exit Choice Pick Seat" << std::endl;
                std::cout << "Press enter key to continue..." << std::endl;
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                cin.get();
            }
            else {
                std::cout << "Booking have already closed" << std::endl;
                std::cout << "Press enter key to continue..." << std::endl;
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                cin.get();
            }
        }
        else if (choice_user == 3) {
            user_brought_ticket(username);
        }
    } while (choice_user != 4);
}

/* admin choice print out this fucntion admin_table --- done*/
void admin_table() {// done 
    std::cout << " _____________________" << std::endl;
    std::cout << "| Code  |Choice       |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|1      |Kill Program |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|2      |Start Booking|" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|3      |Stop Booking |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|4      |Sales Report |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|5      |Log out      |" << std::endl;
    std::cout << "|_______|_____________|" << std::endl;
}

bool logIn(string username, string password, int attempt = 0) { //done
    string user, pass, type;
    ifstream file("users.txt"); // Open the file in read mode
    if (!file) { // if file not found
        cerr << "Unable to open file for reading";// print error message that file is not found
        exit(1); // call system to stop
    }
    while (file >> user >> pass >> type) { // Read each line of the file
        if (user == username && pass == password) { // If the username and password match
            std::cout << "Logged in successfully\n";
            return true;
        }
    }
    std::cout << "Invalid username or password\n";
    if (3 - attempt > 0) {
        std::cout << 3 - attempt << " Attempt left \n";
    }
    else
    {
        system("cls");
    }
    file.close();
    return false;
}


void choicesignuplogin() {//choice table output done
    std::cout << " _____________________" << std::endl;
    std::cout << "| Code  |Choice       |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|1      |Sign Up      |" << std::endl;
    std::cout << "|-------|-------------|" << std::endl;
    std::cout << "|2      |Log In       |" << std::endl;
    std::cout << "|_______|_____________|" << std::endl;
    std::cout << std::endl;
}

bool valid_user(string username, string password) {// done 
    string user, pass, type;
    ifstream file("users.txt"); // Open the file in read mode
    if (!file) { // if file not found
        cerr << "Unable to open file for reading";// print error message that file is not found
        exit(1); // call system to stop
    }
    while (file >> user >> pass >> type) { // Read each line of the file
        if (user == username && pass == password && type == "user") {
            return true;
        }
        if (user == username && pass == password && type == "admin") {
            return false;
        }
    }
    file.close();
    return false;
}

void count_seat_sold(int* ptr_seatV, int* ptr_seatL, int* ptr_seatR, int* ptr_seatB, bool seat[4][5][10]) {
    for (size_t i = 0; i < 4; i++) {
        for (size_t y = 0; y < 5; y++) {
            for (size_t x = 0; x < 10; x++) {
                if (i == 0 && seat[i][y][x] == true) {
                    (*ptr_seatV)++;
                }
                else if (i == 1 && seat[i][y][x] == true) {
                    (*ptr_seatB)++;
                }
                else if (i == 2 && seat[i][y][x] == true) {
                    (*ptr_seatL)++;
                }
                else if (i == 3 && seat[i][y][x] == true) {
                    (*ptr_seatR)++;
                }
            }
        }
    }
}

void sales_report(bool seat[4][5][10]) { // done
    const double price[]{ 888.0,333.0,666.0 };
    int seatV{ 0 }, seatL{ 0 }, seatR{ 0 }, seatB{ 0 };
    count_seat_sold(&seatV, &seatL, &seatR, &seatB, seat);// calculation seat
    std::cout << setfill(' ') << std::endl;
    std::cout << " ________________________________ " << std::endl;
    std::cout << "|" << setw(4) << "Area" << "|" << setw(15) << "Total Seat Sold" << "|" << setw(11) << "Income" << "|" << std::endl;
    std::cout << "|" << setw(4) << "V" << "|" << setw(15) << seatV << "|" << "RM" << fixed << setprecision(2) << setw(9) << seatV * price[0] << "|" << std::endl;
    std::cout << "|" << setw(4) << "L" << "|" << setw(15) << seatL << "|" << "RM" << fixed << setprecision(2) << setw(9) << seatL * price[2] << "|" << std::endl;
    std::cout << "|" << setw(4) << "R" << "|" << setw(15) << seatR << "|" << "RM" << fixed << setprecision(2) << setw(9) << seatR * price[2] << "|" << std::endl;
    std::cout << "|" << setw(4) << "B" << "|" << setw(15) << seatB << "|" << "RM" << fixed << setprecision(2) << setw(9) << seatB * price[1] << "|" << std::endl;
    std::cout << "|--------------------------------|" << std::endl;
    std::cout << "|" << setw(23) << "Total Income : RM" << fixed << setprecision(2) << setw(9) << right << price[0] * seatV + price[2] * seatL + price[2] * seatR + price[1] * seatB << "|" << std::endl;
    std::cout << "|________________________________|" << std::endl << endl;
    cout << "Press enter key to continue......" << endl;
    std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    cin.get();
}

void admin_interface(bool* admin_kill, bool* booking, bool seat[4][5][10]) {// done 
    int admin_choice{};
    bool valid_number{ false }, valid_range{ false };
    do {
        system("cls");
        admin_table();
        if (valid_number) {
            cout << "Invalid syntax" << endl;
        }
        else if (valid_range) {
            cout << "Invalid range" << endl;
        }
        std::cout << "Enter your choice :";
        std::cin >> admin_choice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
            valid_number = true;

        }
        else
        {
            valid_number = false;
            valid_range = (admin_choice < 0 || admin_choice > 5) ? true : false;
            /*
                */

        }
        if (!valid_number && !valid_range) {
            if (admin_choice == 1) {
                std::cout << "Program terminated ... " << std::endl;
                cout << "Press enter key to continue......" << endl;
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                cin.get();
                *admin_kill = false;
            }
            else if (admin_choice == 2) {
                std::cout << "Booking is now open!" << std::endl;
                cout << "Press enter key to continue......" << endl;
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                cin.get();
                *booking = true;
            }
            else if (admin_choice == 3) {
                std::cout << "Booking is now closed!" << std::endl;
                cout << "Press enter key to continue......" << endl;
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                cin.get();
                *booking = false;
            }
            else if (admin_choice == 4) {
                sales_report(seat);
            }
        }
    } while (admin_choice != 5 && admin_choice != 1);
}

int main()
{
    
    bool admin_kill{ true }, booking{ true };
    bool seat[4][5][10]{ {{false}}};

    int choice, counter_pass_enter{ 0 };
    bool selection_code_sign_inNup{ false }, valid_length{ false }, valid_space{ false }, username_not_taken{ false }, valid_password_same{ false }, acces_log_in{};
    string username, password, userType, comfirm_pass;
    // reset file 
    string filename = "ticketbuy.txt";
    ofstream outputFile(filename);
    if (outputFile) {
        // Write to the file (in this case, an empty string)
        outputFile << "";

        // Close the file
        outputFile.close();
    }
    else {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1; // Return an error code
    }

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);

    while (admin_kill) {

        do {
            system("cls"); // clear screen
            welcompage();
            choicesignuplogin();
            if (selection_code_sign_inNup) { // Code if the user enters an invalid input 
                std::cout << "Invalid code..." << std::endl; // Notify the that they enter an invalid input
            }
            std::cout << "Enter code :";
            std::cin >> choice;
            if (std::cin.fail()) { // Check if the input is not a number
                std::cin.clear(); // Clear the input stream
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n'); // Ignore the rest of the line
                selection_code_sign_inNup = true; // Set selection_code_sign_inNup to true to repeat the loop
            }
            else {
                std::cout << std::endl;
                selection_code_sign_inNup = (choice == 1 || choice == 2) ? false : true;// Check if choice that is 1 or 2
            }
        } while (selection_code_sign_inNup);
        //std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
        //cin.clear();

        if (choice == 1) {
            // sign up
            system("cls");
            std::cout << "Welcome to Sign UP" << std::endl;
            std::cout << "The username and password but be 8 to 15 characters.." << endl;

            std::cin.ignore();
            std::cout << "Please enter your username without blank space \t:";

            getline(cin, username);
            // asign and check condition username 

            valid_length = (username.length() < 8 || username.length() > 15) ? true : false;// check length
            valid_space = (username.find(' ') != string::npos); // check space
            username_not_taken = validation_username(username); // check username taken ?
            while (valid_length || valid_space || username_not_taken) {// repeat enter username until correct condition
                // Error message for user
                if (valid_length && valid_space && username_not_taken) {
                    std::cout << "Please do not have space, username length is too long or short and username is taken";
                }
                else if (valid_length && valid_space) {
                    std::cout << "Please do not have space and username length is too long or short";
                }
                else if (valid_length && username_not_taken) {
                    std::cout << "Username length is too long or short and username is taken";
                }
                else if (valid_space && username_not_taken) {
                    std::cout << "Please do not have space and username is taken";
                }
                else if (valid_length) {
                    std::cout << "Username length is too long or short";
                }
                else if (valid_space) {
                    std::cout << "Invalid syntax username cannot contain spaces";
                }
                else {
                    std::cout << "Username has already been taken";
                }
                std::cout << std::endl;
                std::cout << "Please enter your username \t:";
                getline(cin, username);
                valid_length = (username.length() < 8 || username.length() > 15) ? true : false;// check length
                valid_space = (username.find(' ') != string::npos); // check space
                username_not_taken = validation_username(username); // check username taken ?
            }
            std::cout << "Please enter your new password without blank space \t:";
            getline(cin,password);
            std::cout << "Enter comfirm password \t:";
            getline(cin, comfirm_pass);

            // asign and check condition password
            valid_length = (password.length() < 8 || password.length() > 15) ? true : false;// check length
            valid_space = (password.find(' ') != string::npos); // check space
            valid_password_same = (password == comfirm_pass) ? false : true;
            while (valid_length || valid_space || valid_password_same) {// repeat enter password until correct condition
                // Error message for user
                if (valid_length && valid_space && valid_password_same) {
                    std::cout << "Invalid length and syntax and password not the same";
                }
                else if (valid_length && valid_space) {// may have done extra logic needed to be remove
                    std::cout << "Please do not have space and password length is too long or short";
                }
                else if (valid_length && valid_password_same) {
                    std::cout << "Password length is too long or short and password is taken";
                }
                else if (valid_space && valid_password_same) {
                    std::cout << "Please do not have space and password is taken";
                }
                else if (valid_length) {
                    std::cout << "Password length is too long or short";
                }
                else if (valid_space) {
                    std::cout << "Invalid syntax Password cannot contain spaces";
                }
                else {
                    std::cout << "Password are not the same";
                }
                std::cout << std::endl;
                std::cout << "Enter your new password \t:";
                getline(cin, password);
                std::cout << "Enter comfirm password \t:";
                getline(cin, comfirm_pass);

                valid_length = (password.length() < 8 || password.length() > 15) ? true : false;// check length
                valid_space = (password.find(' ') != string::npos); // check space
                valid_password_same = (password == comfirm_pass) ? false : true;


            }
            signUp(username, password);

        }
        else
        {
            std::cout << "Welcome to Log In Page" << std::endl;
            std::cout << "Enter your username :";
            std::cin >> username;
            std::cout << "Enter your password :";
            std::cin >> password;
            acces_log_in = logIn(username, password);
            while (!acces_log_in && counter_pass_enter < 3) {
                counter_pass_enter++;
                std::cout << "Enter your username :";
                std::cin >> username;
                std::cout << "Enter your password :";
                std::cin >> password;
                acces_log_in = logIn(username, password, counter_pass_enter);

            }
            if (acces_log_in) {
                if (valid_user(username, password)) {
                    userinterface(&booking, seat, username);
                }
                else {
                    admin_interface(&admin_kill, &booking, seat);
                }
            }
        }
        username = "";
        password = "";
    }
    return 0;
}

