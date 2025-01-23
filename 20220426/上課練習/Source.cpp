#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
string suits[] = { "Spades", "Hearts", "Diamonds", "Clubs" };
string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9",
  "10", "Jack", "Queen", "King" };

void Show(const vector<int>& card) {
    for (int i = 0; i < 4; i++)
    {
        string suit = suits[card[i] / 13];
        string rank = ranks[card[i] % 13];
        cout << "Card number " << card[i] << ": "
            << rank << " of " << suit << endl;
    }
}

void Shuffle(vector<int>& card) {
    srand(time(0));
    for (int i = 0; i < card.size(); i++)
    {
        // Generate an index randomly
        int index = rand() % card.size();
        int temp = card[i];
        card[i] = card[index];
        card[index] = temp;
    }
}

int main()
{
    const int NUMBER_OF_CARDS = 52;
    vector <int> deck(NUMBER_OF_CARDS);


    // Initialize cards
    for (int i = 0; i < NUMBER_OF_CARDS; i++)
        deck[i] = i;

    Show(deck);

    Shuffle(deck);

    Show(deck);


    return 0;
}