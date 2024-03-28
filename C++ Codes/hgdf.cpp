#include <cstdlib>
 #include <iostream>
 #include <ctime>

 using namespace std;

int main()
{
    srand(time(NULL));

    const int trials = 100000;
    int birthdays[50];
    int numMatches;


    for(int i = 2; i <= 50; i++)
    {
        numMatches = 0;

        for(int j = 1; j <= trials; j++)
        {

            for(int k = 1; k <= i; k++)
            {
                birthdays[k] = (rand() % 365) + 1;
            }

            int m = 1;
            bool matched = false;
            while(m < i && !matched){
                int n = m + 1;

            while(n <= i && !matched){
                if(birthdays[m] == birthdays[n]){
                    numMatches++;
                    matched = true;
                }
                n++;
            }
                m++;
            }
        }

        cout << "Probability of " << i << " people in a room sharing a birthday is \t"
          << ( float(numMatches) / float(trials) ) << endl;
    }
}
