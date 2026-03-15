/* Program Information 
Name: Sam Evans 
Date Started: March 24, 2023 
Date Finished: May 21, 2023  (Goal) 

    This program is the Comprehensive Semester Project main file of Golf, a classic card game. 
    The Golf game I've made is of Six-Card Golf is for two to six players. 


    File Key: 
        Comment Out When Done Coding (Coding Aids): 
            //Comment out after done programming game 

        Rules: 
            //Clarify the specifics of this in the game introduction (class "Introduction") 
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <fstream>
#include <map>
#include <array>

using namespace std;


//Function Prototypes, Constants, and other Globals 
const int playerDeckAmount = 6; //This is Six-Card Golf, won't do Four and Eight-Card Golf 

void beginGame(); //Function Prototype 
//void setDeckVector(vector<string> &); //Setter wouldn't work for what I want to do 
vector<string> dealPlayerOne(vector<string> &, int &);
vector<string> dealPlayerTwo(vector<string> &, int &);
vector<string> dealPlayerThree(vector<string> &, int &);
vector<string> dealPlayerFour(vector<string> &, int &);
/*void dealPlayerFive(vector<string> &, int &);
void dealPlayerSix(vector<string> &, int &);*/
//void callClass(vector<string> &, int &);
void game(int &);
string stringifyPlayerNumber(int &);
string stringifyCard(string &);
string checkGameWin();



class Introduction {
    /*private:
    string knowsGameRules;
    string askClarifications;

    public:
    Introduction(string newKnowsGameRules = "") {
        knowsGameRules = newKnowsGameRules;
    }*/
    private:

    public:

    //Initial Rule Prompts 
    /*void promptRules() {
        while (keeprunning) {
            cout << "Do you know the rules of 'Golf' or would you like the rules to be printed?" << endl << "Type yes for rules or no for none: "; cin >> knowsGameRules;
            if ((knowsGameRules == "Yes") || (knowsGameRules == "yes") || (knowsGameRules == "Y") || (knowsGameRules == "y")) {
                printRules();
                keeprunning = false;
            }
            else if ((knowsGameRules == "No") || (knowsGameRules == "no") || (knowsGameRules == "N") || (knowsGameRules == "n")) {
                cout << "Skipping the rules..." << endl;
                keeprunning = false;
            }
            else {
                cout << endl << "Enter again..." << endl << endl << endl;
            }
        }
    }
    void promptRuleClarifications() { //Marked with "//Clarify the specifics of this in the game introduction (class "Introduction") " 
        while (keeprunning2) {
            cout << endl << "There are some differences in my game compared to one you might play in the real world. " << endl << "Would you like learn about some of the finer details of this program: "; cin >> askClarifications;
            if ((askClarifications == "Yes") || (askClarifications == "yes") || (askClarifications == "Y") || (askClarifications == "y")) {
                printRuleClarifications();
                keeprunning2 = false;
            }
            else if ((askClarifications == "No") || (askClarifications == "no") || (askClarifications == "N") || (askClarifications == "n")) {
                cout << "Skipping the game clarifications..." << endl;
                keeprunning2 = false;
            }
            else {
                cout << endl << "Enter again..." << endl << endl << endl;
            }
        }
    }*/

    void ruleOptionMenu() {
        cout << "[0] Continue" << endl << "[1] Rules" << endl << "[2] Rule Clarifications" << endl << "[3] Deck Example" << endl << "[9] Quit" << endl;
    }
    void printRules() {
        //cout << "Rules..." << endl;
        cout << "=========================================================================================" << endl << "                                          Rules                                           " << endl << "=========================================================================================" << endl;
        //|==========================================
        //|==========================================


        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    }
    void printRuleClarifications() { //This can be attached as a print-out with the "printRules()" function or opted out of seperately 
        //To print how "random", "shuffle", card placement, etc. work and how they are determined 
        //cout << "This game program can't perform tasks quite like in real life, here are some small differences... " << endl;
        cout << "=========================================================================================" << endl << "                                   Rule Clarifications                                           " << endl << "=========================================================================================" << endl;
        //|===================================
        //|===================================
        cout << "Hello! " << endl;
        cout << "Welcome to my (really interesting) Rule/Game Clarifications printout. " << endl;
        cout << "Please stick with me while I explain the way in which this program is different from the official way to play Golf. " << endl << endl;
        cout << "To get straight to the point this program doesn't represent the entirety of the Golf card game with one-hundred percent accuracy. " << endl;
        cout << "This program represents moreso the way my family plays Golf, which isn't quite the official way to play, but I think it's more fun. " << endl;
        cout << "I'll let you be the judge of that, though. " << endl << endl;
        cout << "This is largely due to this program's limited implimentation of the varied collection of Golf card games. " << endl;
        cout << "Here are some links to wesites that go over each version of Golf: 1. https://bicyclecards.com/how-to-play/six-card-golf/ (Straight to the point) " << endl;
        cout << "                                                                  2. https://en.wikipedia.org/wiki/Golf_%28card_game%29 (In-Depth) " << endl;
        cout << "                                                                  3. https://gamerules.com/rules/golf-card-game/ (In-depth) " << endl;
        cout << "                                                                  4. https://www.wikihow.com/Play-Golf-(Card-Game) (Visual and Descriptive) " << endl;
        cout << endl << endl << endl << endl;
        cout << "Here are some specific examples of how this program is different than playing in real life: " << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "1. Card Deck: A standard deck, Jokers are included for the game, this deck returns to its original order/state after a game ends. " << endl;
        cout << "2. Card Rearranging: Unlike in real-life, you cannot rearrange your cards in any way you want to, I decided it would be less of a headache to leave out. " << endl;
        cout << "3. Shuffle: This card manipulation trick is accomplished with the 'chrono' library and the 'shuffle' function in the STL. " << endl;
        cout << "4. Cutting: This traditional, but optional, rule was done by taking in an integer and moving that card and all the cards before it to the end of the vector. " << endl;
        /*cout << "5. " << endl;
        cout << "6. " << endl;
        cout << "7. " << endl;
        cout << "8. " << endl;
        cout << "9. " << endl;
        cout << "10. " << endl;
        cout << "11. " << endl;
        cout << "12. " << endl;
        cout << "13. " << endl;*/
        
        


        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    } //Will issue a warning if this isn't printed out 
};

class Card {
    private:
    //const string cardNumber[14] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"};
    //const char cardSuit[4] = {'S', 'C', 'H', 'D'};
    string cardNumber;
    char cardSuit;

    protected:
    string everyCard[54] = {"0", "0", "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13", 
                                "C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C12", "C13", 
                                "H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "H10", "H11", "H12", "H13", 
                                "D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "D10", "D11", "D12", "D13"};
    
    public:
    Card(string newCard = "") { //This is kind of like the "Label {};" class from "Spreadsheet.cpp" 
        if (newCard.length() >= 2) {
            this->cardSuit = newCard[0];
            this->cardNumber = stoi(newCard.substr(1));
        }
        else {
            this->cardSuit = '?';
            this->cardNumber = "##";
        }
    }
    /*Card(string newCardNumber = "", char newCardSuit = ' ') {
        this->cardNumber = newCardNumber;
        this->cardSuit = newCardSuit;
    }*/
    
     //Maybe do something like with the "Label {};" class from Spreadsheet.cpp 
    //(To get an individual Card Suit and Card Number) 
    char getSuit() {
        return cardSuit;
    }
    string getNumber() {
        return cardNumber;
    }
    string getCard() {
        return (cardSuit + cardNumber);
    }
};

class CardStack: public Card {
    private:
    /*string everyCard[54] = {"0", "0", "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13", 
                            "C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C12", "C13", 
                            "H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "H10", "H11", "H12", "H13", 
                            "D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "D10", "D11", "D12", "D13"};*/
    vector<string> cards; //Switched from vector of type "Card" to type "string" 
    vector<string> shuffledStack; //Switched from vector of type "Card" to type "string" 
    vector<string> cutShuffledStack;

    public:
    void testCards() { //Acting as an example for the player in the game Introduction 
        //Print a Standard Deck of Cards Straight From the Box 
        cout << "Here is a normal deck of cards, in their original state: " << endl;
        for (int cardParse = 0; cardParse < 54; cardParse++) {
            cards.push_back(everyCard[cardParse]);
            cout << cards[cardParse] << ' ';
        }
        cout << endl << endl;

        
        //Shuffle Step 
        unsigned int randomChronoNumber = chrono::system_clock::now().time_since_epoch().count(); //Source: https://www.educba.com/c-plus-plus-shuffle/ 

        cout << "Here is the same deck shuffled via the 'shuffle()' function: " << endl;
        /*for (int cardParse = 0; cardParse < 54; cardParse++) {
            cards.push_back(everyCard[cardParse]);
            //cout << shuffledStack.at(cardParse) << " ";
        }*/
        shuffle(cards.begin(), cards.end(), default_random_engine(randomChronoNumber)); //Source: https://www.educba.com/c-plus-plus-shuffle/ 
        for (string x: cards) { //Source: https://www.educba.com/c-plus-plus-shuffle/ 
            shuffledStack.push_back(x);
        }
        for (int cardParse = 0; cardParse < 54; cardParse++) {
            cout << shuffledStack[cardParse] << ' ';
        }
        cout << endl << endl;


        //Cutting Step 
        int cutPosition;
        vector<string> cutShuffledStack;

        cout << "Please choose a card position to cut the deck at: ";
        cin >> cutPosition;
        cout << "Here is the same shuffled deck, now cut based on your input: " << endl;

        int tempCutPosition = cutPosition;
        for (int cardParse = 0; cardParse < (54 - cutPosition); cardParse++) {
            /*if (cardParse == cutPosition) {
                cutShuffledStack.push_back("|#");
            }
            else {
                cutShuffledStack.push_back(shuffledStack[tempCutPosition]);
            }*/
            cutShuffledStack.push_back(shuffledStack[tempCutPosition]);
            tempCutPosition++;
        }
        cutShuffledStack.push_back("|CUT|"); //Indicates to player where the deck was cut  //Size of vector now at 55 elements 
        for (int cardParse = 0; cardParse < cutPosition+1; cardParse++) { //If "cutPosition+2" and in next for-loop "i < 56 (Or > 56)", 
            cutShuffledStack.push_back(shuffledStack[cardParse]);        //we get repeat elements of our vector, which we don't want. 
        }


        //Printing Step 
        for (int i = 0; i < 55; i++) {
            cout << cutShuffledStack[i] << " ";
        }
        cout << endl << endl;
        cout << "Deck cut right at position " << cutPosition-1 << " (For Programmers)" << endl;
        cout << "Deck cut right at position " << cutPosition << " (For Normal Humans)" << endl;
        cout << endl << endl << endl << "Press 'Enter' to continue: ";
        cin.ignore(100, '\n');
        cin.get();
        cout << endl << endl << endl;
    }

    //Clarify the specifics of this in the game introduction (class "Introduction") 
    vector<string> startingCards() { //Adds every possibility of card to the string vector "cards" 
        for (int cardParse = 0; cardParse < 54; cardParse++) {
            cards.push_back(everyCard[cardParse]);
        }
        //cout << "getCard(): " << getCard() << endl;

        //shuffleCards(cards); //Pass "cards<>" to the next function by reference 


        return cards;
    }
    //Clarify the specifics of this in the game introduction (class "Introduction") 
    vector<string> shuffleCards(vector<string> &cards) { //Function that will be used to randomly choose the order of the deck of cards based on the original preexisting list of card numbers and suits 
        unsigned int randomChronoNumber = chrono::system_clock::now().time_since_epoch().count(); //Source: https://www.educba.com/c-plus-plus-shuffle/ 

        shuffle(cards.begin(), cards.end(), default_random_engine(randomChronoNumber)); //Source: https://www.educba.com/c-plus-plus-shuffle/ 
        for (string x: cards) { //Source: https://www.educba.com/c-plus-plus-shuffle/ 
            shuffledStack.push_back(x);
        }

        //For Testing 
        /*for (int shuffledCardParse = 0; shuffledCardParse < 54; shuffledCardParse++) {
            cout << shuffledStack.at(shuffledCardParse) << " ";
        }
        cout << endl;*/

        //cutDeck(shuffledStack); //Pass "shuffledStack<>" to the next function by reference 


        return shuffledStack;
    }
    //Clarify the specifics of this in the game introduction (class "Introduction") 
    vector<string> cutDeck(vector<string> &shuffledStack) { //Function to prompt and cut the deck of cards based on user-input 
        int cutPosition;
        
        cout << "Please choose a card position to cut the deck at: "; cin >> cutPosition;

        int tempCutPosition = cutPosition;
        for (int cardParse = 0; cardParse < (54 - cutPosition); cardParse++) {
            cutShuffledStack.push_back(shuffledStack[tempCutPosition]);
            tempCutPosition++;
        }
        //cout << "cutPosition: " << cutPosition << endl;
        for (int cardParse = 0; cardParse < cutPosition; cardParse++) {
            cutShuffledStack.push_back(shuffledStack[cardParse]);
        }

        //For Testing 
        /*cout << "cutPosition: " << cutPosition << endl;
        for (int i = 0; i < 54; i++) {
            cout << cutShuffledStack[i] << ' ';
            //cout << i << ": " << newShuffledStack[i] << endl;
        }*/


        return cutShuffledStack;
    }
    //For card deck testing purposes 
    void printCards(vector<string> &cutShuffledStack) { //Variable printing functions and art in additional file to print every possible card of a normal deck of cards that has been shuffled and cut 
        cout << "Initial Playing Deck of Cards this Round: " << endl;
        for (int i = 0; i < 54; i++) {
            cout << cutShuffledStack[i] << ' ';
            //cout << '?' << ' ';
        }

        //Initial way of showing players the process of shuffling and cutting the deck 
        /*int choice;
        
        while (choice != 1 || choice != 2) {
            cout << "Would you like to print an example of a shuffled, cut deck? " << endl << "[1] Print Example" << endl << "[2] Continue Without" << endl << "choice: "; cin >> choice;
            
            if (choice == 1) {
                cout << "Card Deck this Shuffle and Cut: [";
                for (int i = 0; i < 54; i++) {
                    cout << cutShuffledStack[i] << ", ";
                }
                cout << ']' << endl;


                shuffleCards(cutShuffledStack);
            }
            else if (choice == 2) {
                cout << "Continuing..." << endl;
            }
        }*/
    }
    /*string getCard() {

    }*/
};

class GameMechanics {
    private:

    public:
    int beginGame() {
        Introduction introduction;
        CardStack CS;
        bool keepRunning = true;
        int ruleChoice;
        
        while ((keepRunning == true) || ((ruleChoice <= -1) || (ruleChoice >= 3) || (ruleChoice == 9))) {
            // /cin.ignore(100, '\n');
            introduction.ruleOptionMenu();
            cout << "Choose an Option: "; cin >> ruleChoice; cout << endl;
            
            if (ruleChoice == 0) {
                CS.startingCards();
                //beginGame();
                keepRunning = false;
                return 0;
            }
            else if (ruleChoice == 1) {
                introduction.printRules();
                keepRunning = true;
            }
            else if (ruleChoice == 2) {
                introduction.printRuleClarifications();
                keepRunning = true;
            }
            else if (ruleChoice == 3) {
                CS.testCards();
                keepRunning = true;
            }
            else if (ruleChoice == 9) {
                //keepRunning = false;
                quitGame();
                return 9;
            }
            

            return 0;
        }


        return 0;
    }
    void quitGame() {
        cout << "See you later!" << endl;
    }

    int playerMovePrompt() {
        int playerMoveDescision;

        cout << endl;
        cout << "What's your move? " << endl;
        cout << "[1] Draw an Unknown Card" << endl;
        cout << "[2] Draw a Discarded Card" << endl;
        //cout << "[3] Reveal a Card" << endl;
        cout << "[3] Skip Turn" << endl;
        cout << "Descision: "; cin >> playerMoveDescision;

        if ((playerMoveDescision >= 1) && (playerMoveDescision <= 3)) {
            return playerMoveDescision;
        }
        else { //Recursion 
            cout << endl << endl << endl;
            playerMovePrompt();
            return 0;
        }
    }
    int cardReplaceOptionMenu() {
        int cardReplaceDescision;

        cout << endl;
        cout << "What would you like to do with this card? " << endl;
        cout << "[1] Replace a Specific Card" << endl;
        cout << "[2] Add to Discard Pile" << endl;
        cout << "Descision: "; cin >> cardReplaceDescision;

        if ((cardReplaceDescision == 1) || (cardReplaceDescision == 2)) {
            return cardReplaceDescision;
        }
        else { //Recursion 
            cout << endl << endl << endl;
            cardReplaceOptionMenu();
            return 0;
        }
    }
    int cardReplacePositionMenu() {
        int cardReplacePosition;

        cout << endl;
        cout << "Select the position of the card you would like to replace (1 - 6). " << endl;
        cout << "Position: "; cin >> cardReplacePosition;

        if ((cardReplacePosition >= 1) && (cardReplacePosition <= 6)) {
            return cardReplacePosition;
        }
        else { //Recursion 
            cout << endl << endl << endl;
            cardReplacePositionMenu();
            return 0;
        }
    }

    /*int getPlayerTurn() { //To indicate which player's turn it is in the game 
        return playerTurn;
    }*/
    void printGameMove() {
        //To output the process of the game as its going on 
    }
    void printPlayerMove() {
        //To output what each player does immediately after they commit to an action 
    }
    /*string determineGameCompletion() {
        //Function to determine if a player runs out of cards to turn over   
    }*/
};




/*class Player {
    private:

    public:

    virtual int getPlayer() = 0;
};*/






/* //Developing an Algorithm for Erasure of Desired Values 
cutShuffledStack.erase(0+0-0);
cutShuffledStack.erase(0+2-1);
cutShuffledStack.erase(0+4-2);
cutShuffledStack.erase(0+6-3);
cutShuffledStack.erase(0+8-4);
cutShuffledStack.erase(0+10-5);
cutShuffledStack.erase(cutShuffledStack.begin() + (playerOneParse - parse))
*/


class Player {
    private:
    map<int, vector<string>> decks;
    vector<string> cutShuffledStack;
    
    public:
    vector<string> dealPlayerOne(vector<string> &cutShuffledStack, int &numPlayers) {
        vector<string> p1Hand;
        //CardStack CS;
        int cardAmount = 1;
        int playerNumber = 1;
        //vector<string>::iterator deletionParse = (cutShuffledStack.begin() + numPlayers);
        
        //Player One Hand Formation 
        for (int playerParse = 0; playerParse <= 54; playerParse += numPlayers) {
            if (cardAmount == playerDeckAmount+1) {break;}
            p1Hand.push_back(cutShuffledStack[playerParse]);
            cardAmount++;
        }

        decks[playerNumber] = p1Hand;

        //Printing Player One's Hand 
        //Comment out after done programming game 
        cout << endl << endl << endl << "Player 1 Hand: ";
        for (int i = 0; i < playerDeckAmount; i++) {
            cout << p1Hand[i] << ' ';
        }
        /*int i = 0;
        for (auto it = decks.begin(); it != decks.end(); it++) {
            cout << it->second.at(i) << ' ';
            //cout << decks[0][0] << ' ';
            //i++;
        }*/
        cout << endl;
        
        /*if (numPlayers >= (playerNumber + 1)) {
            //dealPlayerTwo(cutShuffledStack, numPlayers);
            return p1Hand;
        }
        else {
            game(numPlayers);
            return p1Hand;
        }*/
        return p1Hand;
    }

    vector<string> erasePlayerOneCards(vector<string> &cutShuffledStack, int &numPlayers) {
        //Player One Card Deletion From Main Deck 
        int cardAmount = 1;
        int parse = 0;
        for (int playerParse = 0; playerParse <= 54; playerParse += numPlayers) {
            if (cardAmount == playerDeckAmount+1) {break;}
            cutShuffledStack.erase((cutShuffledStack.begin() + playerParse) - parse);
            
            parse++;
            cardAmount++;
        }

        /* //Printing the Remaining Cards in the Main Deck After Player One Card Deletion 
        //Comment out after done programming game 
        cout << endl << "Deck's Remaining Cards: ";
        for (int i = 0; i <= (54 - ((6 * playerNumber) + 1)); i++) {
            cout << cutShuffledStack.at(i) << ' ';
        }*/


        return cutShuffledStack;
    }


    vector<string> dealPlayerTwo(vector<string> &cutShuffledStack, int &numPlayers) {
        vector<string> p2Hand;
        int cardAmount = 1; 
        int playerNumber = 2;
        
        for (int playerParse = 0; playerParse <= 54; playerParse += (numPlayers - 1)) {
            if (cardAmount == playerDeckAmount+1) {break;}
            p2Hand.push_back(cutShuffledStack[playerParse]);
            cardAmount++;
        }
        
        decks[playerNumber] = p2Hand;
        
        //Printing Player Two's Hand 
        //Comment out after done programming game 
        cout << endl << endl << endl << "Player 2 Hand: ";
        for (int i = 0; i < playerDeckAmount; i++) {
            cout << p2Hand[i] << ' ';
        }
        cout << endl;
        
        /*if (numPlayers >= (playerNumber + 1)) {
            //dealPlayerThree(cutShuffledStack, numPlayers);
            return p2Hand;
        }
        else {
            game(numPlayers);
            return p2Hand;
        }*/
        return p2Hand;
    }

    vector<string> erasePlayerTwoCards(vector<string> &cutShuffledStack, int &numPlayers) {
        //Player Two Card Deletion From Main Deck 
        int cardAmount = 1;
        int parse = 0;
        for (int playerParse = 0; playerParse <= 54; playerParse += (numPlayers - 1)) {
            if (cardAmount == playerDeckAmount+1) {break;}
            cutShuffledStack.erase((cutShuffledStack.begin() + playerParse) - parse);
            
            parse++;
            cardAmount++;
        }

        /* //Printing the Remaining Cards in the Main Deck After Player Two Card Deletion 
        //Comment out after done programming game 
        cout << endl << "Deck's Remaining Cards: ";
        for (int i = 0; i <= (54 - ((6 * playerNumber) + 1)); i++) {
            cout << cutShuffledStack.at(i) << ' ';
        }*/
        
        
        return cutShuffledStack;
    }


    vector<string> dealPlayerThree(vector<string> &cutShuffledStack, int &numPlayers) {
        vector<string> p3Hand;
        int cardAmount = 1; 
        int playerNumber = 3;
        //int score;
        
        for (int playerParse = 0; playerParse <= 54; playerParse += (numPlayers - 2)) {
            if (cardAmount == playerDeckAmount+1) {break;}
            p3Hand.push_back(cutShuffledStack[playerParse]);
            cardAmount++;
        }
        
        decks[playerNumber] = p3Hand;
        
        //Printing Player Three's Hand 
        //Comment out after done programming game 
        cout << endl << endl << endl << "Player 3 Hand: ";
        for (int i = 0; i < playerDeckAmount; i++) {
            cout << p3Hand[i] << ' ';
        }
        cout << endl;

        /*if (numPlayers >= (playerNumber + 1)) {
            //dealPlayerFour(cutShuffledStack, numPlayers);
            return p3Hand;
        }
        else {
            game(numPlayers);
            return p3Hand;
        }*/
        return p3Hand;
    }

    vector<string> erasePlayerThreeCards(vector<string> &cutShuffledStack, int &numPlayers) {
        //Player Three Card Deletion From Main Deck 
        int cardAmount = 1;
        int parse = 0;
        for (int playerParse = 0; playerParse <= 54; playerParse += (numPlayers - 2)) {
            if (cardAmount == playerDeckAmount+1) {break;}
            cutShuffledStack.erase((cutShuffledStack.begin() + playerParse) - parse);
            
            parse++;
            cardAmount++;
        }

        /* //Printing the Remaining Cards in the Main Deck After Player Three Card Deletion 
        //Comment out after done programming game 
        cout << endl << "Deck's Remaining Cards: ";
        for (int i = 0; i <= (54 - ((6 * playerNumber) + 1)); i++) {
            cout << cutShuffledStack.at(i) << ' ';
        }*/


        return cutShuffledStack;
    }


    vector<string> dealPlayerFour(vector<string> &cutShuffledStack, int &numPlayers) {
        vector<string> p4Hand;
        int cardAmount = 1; 
        int playerNumber = 4;

        for (int playerParse = 0; playerParse <= 54; playerParse += (numPlayers - 3)) {
            if (cardAmount == playerDeckAmount+1) {break;}
            p4Hand.push_back(cutShuffledStack[playerParse]);
            cardAmount++;
        }
        
        decks[playerNumber] = p4Hand;
        
        //Printing Player Four's Hand 
        //Comment out after done programming game 
        cout << endl << endl << endl << "Player 4 Hand: ";
        for (int i = 0; i < playerDeckAmount; i++) {
            cout << p4Hand[i] << ' ';
        }
        cout << endl;

        /* //Not implimented 
        if (numPlayers >= (playerNumber + 1)) {
            playerFive(cutShuffledStack, numPlayers);
        }*/
        

        //game(numPlayers);
        return p4Hand;
    }

    vector<string> erasePlayerFourCards(vector<string> &cutShuffledStack, int &numPlayers) {
        //Player Four Card Deletion From Main Deck 
        int cardAmount = 1;
        int parse = 0;
        for (int playerParse = 0; playerParse <= 54; playerParse += (numPlayers - 3)) {
            if (cardAmount == playerDeckAmount+1) {break;}
            cutShuffledStack.erase((cutShuffledStack.begin() + playerParse) - parse);
            
            parse++;
            cardAmount++;
        }

        /* //Printing the Remaining Cards in the Main Deck After Player Four Card Deletion 
        //Comment out after done programming game 
        cout << endl << "Deck's Remaining Cards: ";
        for (int i = 0; i <= (54 - ((6 * playerNumber) + 1)); i++) {
            cout << cutShuffledStack.at(i) << ' ';
        }*/


        return cutShuffledStack;
    }
};

/*protected:
vector<string> p1Hand;
vector<string> p2Hand;
vector<string> p3Hand;
vector<string> p4Hand;*/
//map<int, vector<string>> decks;

/* //If I want to have between five and eight players and I decide to add another deck of cards rather than just one, will stick to one deck for now 
void playerFive(vector<string> &cutShuffledStack, int &numPlayers) {
    vector<string> p5Hand;
    int cardAmount = 1; 
    //int score;
    int playerNumber = 5;

    for (int playerFiveParse = 0; playerFiveParse <= 54; playerFiveParse += numPlayers) {
        if (cardAmount == playerDeckAmount+1) {break;}
        p5Hand.push_back(cutShuffledStack[playerFiveParse]);
        cardAmount++;
    }
    
     //For Testing
    //Comment out after done programming game 
    cout << endl << endl << endl << "Player 3 Deck: ";
    for (int i = 0; i < playerDeckAmount; i++) {
        cout << p5Hand[i] << " ";
    }
    cout << endl;

    if (numPlayers >= (playerNumber + 1)) {
        playerSix(cutShuffledStack, numPlayers);
    }
}

void playerSix(vector<string> &cutShuffledStack, int &numPlayers) {
    vector<string> p6Hand;
    int cardAmount = 1; 
    //int score;
    int playerNumber = 6;

    for (int playerSixParse = 0; playerSixParse <= 54; playerSixParse += numPlayers) {
        if (cardAmount == playerDeckAmount+1) {break;}
        p6Hand.push_back(cutShuffledStack[playerSixParse]);
        cardAmount++;
    }
    
     //For Testing
    //Comment out after done programming game 
    cout << endl << endl << endl << "Player 3 Deck: ";
    for (int i = 0; i < playerDeckAmount; i++) {
        cout << p6Hand[i] << " ";
    }
    cout << endl;

    //playerFour(cutShuffledStack, numPlayers);
}*/




void game(int &numPlayers) {
    Player P;
    vector<string> drawDeck;
    vector<string> discardPile;
    CardStack CS;
    bool keepGameGoing = true;
    int playerTurnNumber = 1;
    string playerNumberString;
    GameMechanics GM;
    int playerTurnChoice;
    int cardReplaceDescision;
    int cardReplacePosition;
    string placeholderCardName = "[INSERT CHOSEN CARD HERE]";
    int timesAroundTheTable = 0;
    map<int, vector<string>> playerCards;
    //map<key, value> mapName;
    //map<1-4, playerNumberHand vector> playerCards;
    //Card card;
    //ifstream fin;
    ofstream fout;

    fout.open("PlayerHands.txt");


    //Shuffling and Cutting the Cards 
    vector<string> initialDeck = CS.startingCards();
    vector<string> shuffledInitialDeck = CS.shuffleCards(initialDeck);
    vector<string> cutShuffledInitialDeck = CS.cutDeck(shuffledInitialDeck);
    //CS.printCards(cutShuffledInitialDeck); //For Testing, commenting out after done 
    //This above here prints the remaining cards in the deck after dealing 



    //Dealing Cards to Each Player 
    vector<string> playerOneHand = P.dealPlayerOne(cutShuffledInitialDeck, numPlayers);
    drawDeck = P.erasePlayerOneCards(cutShuffledInitialDeck, numPlayers); 
    //cout << remainingDeck[0] << endl; //To make sure I don't get a Segfault for accessing the remaining deck elements 
    /*for (int i = 0; i < 20; i++) { //Test for remaining deck 
        cout << remainingDeck[i] << ' ';
    }*/
    playerCards[1] = playerOneHand;
    vector<string> playerTwoHand = P.dealPlayerTwo(drawDeck, numPlayers);
    drawDeck = P.erasePlayerTwoCards(drawDeck, numPlayers);
    playerCards[2] = playerTwoHand;

    if (numPlayers >= 3) {
        vector<string> playerThreeHand = P.dealPlayerThree(drawDeck, numPlayers);
        drawDeck = P.erasePlayerThreeCards(drawDeck, numPlayers);
        playerCards[3] = playerThreeHand;
        if (numPlayers == 4) {
            vector<string> playerFourHand = P.dealPlayerFour(drawDeck, numPlayers);
            drawDeck = P.erasePlayerFourCards(drawDeck, numPlayers);
            playerCards[4] = playerFourHand;
        }
    }
    //cout << "MAP: " << playerCards[1][0] << endl; //Testing printing out element of constructed map, it works! 



    //Initializing the Discard Pile with the Top-most Card from the Draw Pile 
    discardPile.push_back(drawDeck.front());
    //cout << "Draw Pile card before: " << drawDeck[0] << endl;
    drawDeck.erase(drawDeck.begin());
    //cout << "Discard Pile card: " << discardPile[0] << endl;
    //cout << "Draw Pile card after: " << drawDeck[0] << endl;

    float maxRounds;
    cout << endl << endl;
    cout << "How many rounds would you like to go through before players are supposed to go out and finish the game? " << endl;
    cout << "Desired round amount: "; cin >> maxRounds;



    



    //Begin Player's Turns 
    while (keepGameGoing == true) {
        if (playerTurnNumber > numPlayers) {
            playerTurnNumber = 1;
        }

        //Print Player's Hands 
        //fout << "Hello File!" << endl;
        int i = 1;

        fout << "Player One's Hand: [";
        for (int j = 0; j < 6; j++) {
            if (j == 5) {
                fout << playerCards[i][j];
            }
            else {
                fout << playerCards[i][j] << ' ';
            }
        }
        fout << ']' << endl;
        i++;

        fout << "Player Two's Hand: [";
        for (int j = 0; j < 6; j++) {
            if (j == 5) {
                fout << playerCards[i][j];
            }
            else {
                fout << playerCards[i][j] << ' ';
            }
        }
        fout << ']' << endl;
        i++;

        if (numPlayers >= 3) {
            fout << "Player Three's Hand: [";
            for (int j = 0; j < 6; j++) {
                if (j == 5) {
                    fout << playerCards[i][j];
                }
                else {
                    fout << playerCards[i][j] << ' ';
                }
            }
            fout << ']' << endl;
            i++;
        }

        if (numPlayers == 4) {
            fout << "Player Four's Hand: [";
            for (int j = 0; j < 6; j++) {
                if (j == 5) {
                    fout << playerCards[i][j];
                }
                else {
                    fout << playerCards[i][j] << ' ';
                }
            }
            fout << ']' << endl;
        }
        fout << endl;







        cout << endl << endl << endl << endl << "The Draw Deck: ??" << endl;
        cout << endl << "The Discard Pile: " << stringifyCard(discardPile.back()) << endl;
        //cout << endl << "The showing discarded card is: " << stringifyCard(discardPile.back());
        cout << endl << endl << endl << "Player " << stringifyPlayerNumber(playerTurnNumber) << "'s Turn: " << endl;
        
        playerTurnChoice = GM.playerMovePrompt();

        if (playerTurnChoice == 1) {
            cout << endl << "Player " << stringifyPlayerNumber(playerTurnNumber) << " drew a card from the draw pile. " << endl << endl;
            if (playerTurnNumber == 1) {
                cout << "The card you've drawn is a " << stringifyCard(drawDeck.front()) << ". " << endl << endl;
                cardReplaceDescision = GM.cardReplaceOptionMenu();
                if (cardReplaceDescision == 1) {
                    cardReplacePosition = GM.cardReplacePositionMenu();
                    //cout << "cardReplacePosition: " << cardReplacePosition << endl;
                    swap(drawDeck.front(), playerCards[playerTurnNumber][cardReplacePosition-1]);
                    discardPile.push_back(drawDeck.front());
                    drawDeck.erase(drawDeck.begin());
                    //cout << "drawDeck.front(): " << drawDeck.front() << endl;
                    //cout << "playerCards[idx][idx]: " << playerCards[playerTurnNumber][cardReplacePosition-1] << endl;
                    //cout << "discardPile.back(): " << discardPile.back() << endl;
                }
                else if (cardReplaceDescision == 2) {
                    discardPile.push_back(drawDeck.front());
                    drawDeck.erase(drawDeck.begin());
                    cout << "A " << stringifyCard(discardPile.back()) << " has been discarded. " << endl;
                }
                cout << "Your new deck: ";
                for (int i = 0; i < 6; i++) {
                    cout << playerCards[1][i] << ' ';
                }
            }
            else if (playerTurnNumber != 1) {
                //Random number generator here for the bots 
                int minNumber1 = 1;
                int maxNumber1 = 3;
                int range1 = (maxNumber1 - minNumber1 + 1);
                int randomNumber1 = (rand() % range1 + minNumber1);
                cardReplaceDescision = randomNumber1;

                if (cardReplaceDescision == 1) {
                    int minNumber2 = 1;
                    int maxNumber2 = 6;
                    int range2 = (maxNumber2 - minNumber2 + 1);
                    int randomNumber2 = (rand() % range2 + minNumber2);
                    cardReplacePosition = randomNumber2;
                    
                    swap(drawDeck.front(), playerCards[playerTurnNumber][cardReplacePosition-1]);
                    discardPile.push_back(drawDeck.front());
                    drawDeck.erase(drawDeck.begin());
                }
                else if (cardReplaceDescision == 2) {
                    discardPile.push_back(drawDeck.front());
                    drawDeck.erase(drawDeck.begin());
                    cout << "A " << stringifyCard(discardPile.back()) << " has been discarded. " << endl;
                }
                cout << "Player " << stringifyPlayerNumber(playerTurnNumber) << "'s new deck: ";
                for (int i = 0; i < 6; i++) {
                    cout << playerCards[playerTurnNumber][i] << ' ';
                }



            }
            playerTurnNumber++;
        }
        else if (playerTurnChoice == 2) {
            cout << endl << "Player " << stringifyPlayerNumber(playerTurnNumber) << " picked up the " << stringifyCard(discardPile.front()) << " from the Discard Pile. " << endl << endl;
            if (playerTurnNumber == 1) {
                cardReplaceDescision = GM.cardReplaceOptionMenu();
                if (cardReplaceDescision == 1) {
                    cardReplacePosition = GM.cardReplacePositionMenu();
                    swap(discardPile.back(), playerCards[playerTurnNumber][cardReplacePosition-1]);
                    cout << "Player " << stringifyPlayerNumber(playerTurnNumber) << "'s new deck: ";
                    for (int i = 0; i < 6; i++) {
                        cout << playerCards[1][i] << ' ';
                    }
                }
                else if (cardReplaceDescision == 2) {
                    cout << "A " << stringifyCard(discardPile.back()) << " has been discarded. " << endl;
                }
            }
            else {
                //Random number generator here for the bots 
                /*string triquetrium;
                triquetrium = "Tanner";*/
                int minNumber1 = 1;
                int maxNumber1 = 3;
                int range1 = (maxNumber1 - minNumber1 + 1);
                int randomNumber1 = (rand() % range1 + minNumber1);
                cardReplaceDescision = randomNumber1;

                if (cardReplaceDescision == 1) {
                    int minNumber2 = 1;
                    int maxNumber2 = 6;
                    int range2 = (maxNumber2 - minNumber2 + 1);
                    int randomNumber2 = (rand() % range2 + minNumber2);
                    cardReplacePosition = randomNumber2;

                    swap(discardPile.back(), playerCards[playerTurnNumber][cardReplacePosition-1]);
                    cout << "Player " << stringifyPlayerNumber(playerTurnNumber) << "'s new deck: ";
                    for (int i = 0; i < 6; i++) {
                        cout << playerCards[playerTurnNumber][i] << ' ';
                    }
                }
                else if (cardReplaceDescision == 2) {
                    cout << "A " << stringifyCard(discardPile.back()) << " has been discarded. " << endl;
                }
            }
            playerTurnNumber++;
        }
        else if (playerTurnChoice == 3) {
            cout << endl << "Player " << stringifyPlayerNumber(playerTurnNumber) << " decided to skip their turn. " << endl << endl;
            playerTurnNumber++;
        }
        timesAroundTheTable++;
        maxRounds -= ((.5 / numPlayers) * 2);
        if (maxRounds == ((.5 * numPlayers) / 2)) {
            cout << "+----------------------------------------------------------------+" << endl;
            cout << "|  IMPORTANT: This is the last round before the game will end!   |" << endl;
            cout << "+----------------------------------------------------------------+" << endl;
        }
        if (maxRounds <= 0) {
            keepGameGoing = false;
            break;
        }
        //checkGameWin();
    }
    fout.close();
}



/*void callClass(vector<string> &cutShuffledStack, int &numPlayers) {
    PlayerDecks PD;

    PD.dealPlayerOne(cutShuffledStack, numPlayers);
}
void callGame(int &numPlayers) {
    Game G;

    G.game(numPlayers);
}*/

string stringifyPlayerNumber(int &playerTurnNumber) {
    //string playerTurnNumberString;
    
    if (playerTurnNumber == 1) {return "One";}
    else if (playerTurnNumber == 2) {return "Two";}
    else if (playerTurnNumber == 3) {return "Three";}
    else if (playerTurnNumber == 4) {return "Four";}
    else {return "PLAYER NUMBER ERROR";}
}

string stringifyCard(string &card) {
    char cardSuit = card[0];
    int cardNumber = stoi(card.substr(1));
    string printSuit; //S, C, H, D 
    string printNumber;
    string stringifiedCard;

    //cout << "cardSuit: " << cardSuit << endl;
    //cout << "cardNumber: " << cardNumber << endl;

    if ((cardSuit == '0') || (cardNumber == 0)) {return "Joker";}
    else if (cardNumber == 1) {printNumber = "Ace";}
    else if (cardNumber == 2) {printNumber = "Two";}
    else if (cardNumber == 3) {printNumber = "Three";}
    else if (cardNumber == 4) {printNumber = "Four";}
    else if (cardNumber == 5) {printNumber = "Five";}
    else if (cardNumber == 6) {printNumber = "Six";}
    else if (cardNumber == 7) {printNumber = "Seven";}
    else if (cardNumber == 8) {printNumber = "Eight";}
    else if (cardNumber == 9) {printNumber = "Nine";}
    else if (cardNumber == 10) {printNumber = "Ten";}
    else if (cardNumber == 11) {printNumber = "Jack";}
    else if (cardNumber == 12) {printNumber = "Queen";}
    else if (cardNumber == 13) {printNumber = "King";}

    if (cardSuit == 'S') {printSuit = " of Spades";}
    else if (cardSuit == 'C') {printSuit = " of Clubs";}
    else if (cardSuit == 'H') {printSuit = " of Hearts";}
    else if (cardSuit == 'D') {printSuit = " of Diamonds";}

    stringifiedCard = (printNumber + printSuit);


    return stringifiedCard;
}


string checkGameWin() {
    return "";
}





int main() {
    GameMechanics GM;
    int numPlayers;

    if (GM.beginGame() == 0) {
        //Very beginning of the game 
        cout << "Alright, let's begin the game... " << endl << endl << endl << "How many players would you like to include in your game? " << endl << "(Player Count Possibilities: 2 - 4)" << endl << "Player Quantity: " << endl;
        cin >> numPlayers;
        cin.ignore(100, '\n');
        game(numPlayers);
        
        
        
        
    
    }
    
    
    return 0;
}






/* //Designs for every Suit of Card 
  //This is a cool potential feature for file output 
//=============Spades================
cout << "#---------------#" << endl;
cout << "| A             |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|       ^       |" << endl;
cout << "|      / \      |" << endl;
cout << "|      U^U      |" << endl;
cout << "|       |       |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|             A |" << endl;
cout << "#---------------#" << endl;

//=============Clubs=================
cout << "#---------------#" << endl;
cout << "| A             |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|       8       |" << endl;
cout << "|      8?8      |" << endl;
cout << "|       |       |" << endl;
cout << "|       ^       |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|             A |" << endl;
cout << "#---------------#" << endl;

//=============Hearts================
cout << "#---------------#" << endl;
cout << "| A             |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|    (^\_/^)    |" << endl;
cout << "|     \   /     |" << endl;
cout << "|      \ /      |" << endl;
cout << "|       V       |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|             A |" << endl;
cout << "#---------------#" << endl;

//============Diamonds===============
cout << "#---------------#" << endl;
cout << "| A             |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|       /\      |" << endl;
cout << "|      /  \     |" << endl;
cout << "|      \  /     |" << endl;
cout << "|       \/      |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|             A |" << endl;
cout << "#---------------#" << endl;


//=============Joker=================
cout << "#---------------#" << endl;
cout << "| A             |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|    *          |" << endl;
cout << "|    |\\ @ *     |" << endl;
cout << "|       |V      |" << endl;
cout << "|      / \\     |" << endl;
cout << "|               |" << endl;
cout << "|               |" << endl;
cout << "|             A |" << endl;
cout << "#---------------#" << endl;
*/