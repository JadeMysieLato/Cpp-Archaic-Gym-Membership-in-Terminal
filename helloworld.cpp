#include <iostream>
  using std::cout;
  using std::cin;

  void membershipCalculator(int desiredMembership);

int main(){
  char gymMembership;
  int bronzeMember = 250;
  int silverMember = 500;
  int goldMember = 750;

  cout << "**********************\n";
  cout << "Welcome to the Gym! Do you have a membership?(y/n)\n";
  cout << "**********************\n";
  cin >> gymMembership;

  if (gymMembership == 'n' || gymMembership == 'N') {
    char avail;

    cout << "Would you like to avail a membership?(y/n) ";
    cin >> avail;

    if (avail == 'y' || avail == 'Y'){

      int membership;
      
      cout << "----------------------\n";
      cout << "Here are the list of Memberships available:\n";
      cout << "1. Bronze Membership - Php 250\n";
      cout << "2. Silver Membership - Php 500\n";
      cout << "3. Gold Membership - Php 750\n";
      cout << "4. Exit\n";
      cout << "----------------------\n";

      cout << "Which Membership would you like to avail? ";
      cin >> membership;

      cin.clear();
      fflush(stdin);

      switch(membership){
        case 1:
          membershipCalculator(bronzeMember);
          break;
        case 2:
          membershipCalculator(silverMember);
          break;
        case 3:
          membershipCalculator(goldMember);
          break;
        case 4:
          cout << "We hope to see you again!\n";
          break;
        default:
          cout << "That is an invalid response. Please choose between the numbers 1-4.\n";
          break;
      }
    }
    else if (avail == 'n' || avail == 'N'){
      cout << "Aww... Unfortunately, our services are reserved to Gym Members.";
    }
  }
  else if (gymMembership == 'y' || gymMembership == 'Y'){
    int program = 0;

    cout << "----------------------\n";
    cout << "Programs we offer:\n";
    cout << "1. Upper Body:\n";
    cout << "2. Lower Body:\n";
    cout << "3. Push:\n";
    cout << "4. Pull:\n";
    cout << "5. Legs:\n";
    cout << "6. Exit:\n";
    cout << "----------------------\n";

    do {

      cout << "Welcome to the gym! Choose your desired program: ";
      cin >> program;

      cin.clear();
      fflush(stdin);

      switch(program){
        case 1:
          cout << "Here are your Upper Body exercises!\n";
          break;
        case 2:
          cout << "Here are your Lower Body exercises!\n";
          break;
        case 3:
          cout << "Here are your Push exercises!\n";
          break;
        case 4:
        cout << "Here are your Pull exercises!\n";
          break;
        case 5:
        cout << "Here are your Legs exercises!\n";
          break;
        case 6:
        cout << "Thank you for visiting!\n";
          break;
        default:
        cout << "Invalid input\n!";
          break;
      }
    } while (program != 6);
    

  }
  else {
    cout << "Invalid input!\n";
  }







  
 return 0;
}

void membershipCalculator(int desiredMembership){
  int amount;

  do {
    cout << "Please input(Php " << desiredMembership << "): ";
    cin >> amount;

    cin.clear();
    fflush(stdin);

    if (amount < desiredMembership){
      cout << "Invalid amount!\n";
    }
    else if (amount > desiredMembership){
      int change = amount - desiredMembership;

      cout << "Here's your change: Php " << change << ". Welcome to the Gym!";
    }
    else if (amount == desiredMembership){
      cout << "You have successfully paid for " << desiredMembership << "! Welcome to the Gym!\n";
    }
    else {
      cout << "There's been an error!\n";
    }
  } while (amount < desiredMembership);

}

