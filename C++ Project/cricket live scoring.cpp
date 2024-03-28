#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long int ll;
ll p = 1, run1 = 0, wicket = 0,wi=0;
ll total_run=0,Total_Run=0,W1=0,W2=0;
class Player{
public:
    char name_of_player[26];
};
class cricket1{
public:
    vector<ll> bowl;
    cricket1(ll t){
        bowl.push_back(t);
    }
    vector<string>Name;
    cricket1(string t){
        Name.push_back(t);
    }

    ll d;
    cricket1(ll w,ll d1){
        wi=w,d=d1;
    }
    cricket1(ll p1,ll run2,ll wicket1){
        p=p1;
        run1=run2;
        wicket=wicket1;
    }
    void display(){
        for (auto it : bowl){
            if (wicket <(wi-1)){
                if (it <= 6 && p == 1){
                    cout << "1st"<< " bowl- ",p++;
                    if (it >= 0){
                        cout << "valid bowl-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else{
                        cout << "invalid bowl- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    if(it==6)cout<<"Wow Six!!\n";
                    else if(it==4)cout<<"Great Four!!\n";
                    else cout<<"Extra run!!\n";
                    cout << "Run:" << run1 << " Wicket:" << wicket << " bowl:" << p - 1 << nl << nl;
                }
                else if (it <= 6 && p == 2){
                    cout << "2nd"<< " bowl- ",p++;
                    if (it >= 0){
                        cout << "valid bowl-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else{
                        cout << "invalid bowl- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    if(it==6)cout<<"Wow Six!!\n";
                    else if(it==4)cout<<"Great Four!!\n";
                    else cout<<"Extra run!!\n";
                    cout << "Run:" << run1 << " Wicket:" << wicket << " bowl:" << p - 1 << nl << nl;
                }
                else if (it <= 6 && p == 3){
                    cout << "3rd"<< " bowl- ",p++;
                    if (it >= 0){
                        cout << "valid bowl-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else{
                        cout << "invalid bowl- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    if(it==6)cout<<"Wow Six!!\n";
                    else if(it==4)cout<<"Great Four!!\n";
                    else cout<<"Extra run!!\n";
                    cout << "Run:" << run1 << " Wicket:" << wicket << " bowl:" << p - 1 << nl << nl;
                }
                else if (it <= 6 && p > 3){
                    cout << p << "th bowl- ", p++;
                    if (it >= 0){
                        cout << "valid bowl-   ", run1 += it;
                        cout << "Run = " << it << nl;
                    }
                    else{
                        cout << "invalid bowl- ", run1 += 1;
                        cout << "Run = " << 1 << nl;
                    }
                    if(it==6)cout<<"Wow Six!!\n";
                    else if(it==4)cout<<"Great Four!!\n";
                    else cout<<"Extra run!!\n";
                    cout << "Run:" << run1 << " Wicket:" << wicket << " bowl:" << p - 1 << nl << nl;
                }
                else if (it > 6) {
                    if (p == 1)cout << "1st"<< " bowl- ",p++;
                    else if (p == 2)cout << "2nd"<< " bowl- ",p++;
                    else if (p == 3)cout << "3rd"<< " bowl- ",p++;
                    else cout << p << "th bowl- ", p++;
                    cout << "valid bowl-   ", run1 += 0;
                    cout << "Wicket = 1\n";
                    wicket++;
                    cout<<"This team lost their Wicket.\n";
                    cout << "Run:" << run1 << " Wicket:" << wicket << " bowl:" << p - 1 << nl << nl;
                }
                else{
                    cout << p << "th bowl- ", p++;
                    cout << "Invalid bowl- Run = 0\n";
                    cout << "Run:" << run1 << " Wicket:" << wicket << " bowl:" << p - 1 << nl << nl;
                }
            }
            else{
                cout << "There are no more players.\n", p++;
                cout << "Run:" << run1 << " Wicket:" << wicket << " bowl:" << p - 1 << nl << nl;
                break;
            }
        }
    }
};

class Team{
public:
    string teamName;
    void setTeamname(){
        cin>>teamName;
    }
    Player p[16];

    //return 0 for team 1 and 1 for team 2;
    ll tossTime(Team t1, Team t2){
        srand(time(0));
        ll random;
        random=(rand()%2);
        cout<<"It toss time----"<<nl;
        if(random==0){
            cout<<t1.teamName<<" Will throw the coin."<<nl;
            random=(rand()%2);
            if(random ==0){
                cout<<"Congratulations Team "<<t1.teamName<<" has won the toss\n";
                return 0;
            }
            else{
                cout<<"Congratulations Team "<<t2.teamName<<" has won the toss\n";
                return 1;
            }
        }
        else{
            cout<<t2.teamName<<" Will throw the coin"<<endl;
            random=(rand()%2);
            if(random ==0){
                cout<<"Congratulations Team "<<t1.teamName<<" has won the toss\n";
                return 0;
            }
            else{
                cout<<"Congratulations Team "<<t2.teamName<<" has won the toss\n";
                return 1;
            }

        }
    }

    //return true if given team choose to bat
    bool isBatting(Team t){
        char choice[4];
        cout<<t.teamName<<" -Would you like to Bat/bowl first (Bat/bowl): ";
        cin>>choice;
        if(strcmp(choice,"Bat")==0 ||strcmp(choice,"bat")==0 ||strcmp(choice,"bowl")==0 || strcmp(choice,"bowl")==0) {
            if(strcmp(choice,"Bat")==0 || strcmp(choice,"bat")==0)  return true;
            else return false;
        }
        else {
            cout<<"Invalid Input\nPlz re-enter your choice."<<nl;
            return isBatting(t);
        }
    }
};

int main(){
    cout<<"This is a Cricket Game."<<nl;
    ll over;
    cout<<"Enter Number of over(1x6)for the game: ",cin>>over;
    Team t[2],t0;
    cout<<"Enter the First Team name: ";t[0].setTeamname();
    cout<<"Enter the Second Team name: ";t[1].setTeamname();

    //0 for team1 and 1 for team2
    ll toss_won,toss_lost;
    toss_won=t0.tossTime(t[0],t[1]);
    if(toss_won==0) toss_lost=1;
    else toss_lost=0;
    //who batting first.
    ll d=t0.isBatting(t[toss_won]);

    //Player Number and name for each team.
    ll player_number;
    cout<<"Enter player number : ",cin>>player_number;
    cricket1 c(player_number,player_number);


    if(d==1)cout<<"Enter "<<player_number<<" player name for batting team:"<<t[toss_won].teamName<<nl;
    else cout<<"Enter "<<player_number<<" player name for bowling team:"<<t[toss_won].teamName<<nl;
    for(ll i=0; i<player_number; i++){
        if(i==0)cout<<"1st player name: ";
        else if(i==1)cout<<"2nd player name: ";
        else if(i==2)cout<<"3rd player name: ";
        else cout<<(i+1)<<"th player name: ";
        cin>>t[0].p[i].name_of_player;
        cricket1 name(t[1].p[i].name_of_player);
        // name.display1();
    }


    if(d==0)cout<<"Enter "<<player_number<<" player name for batting team:"<<t[toss_lost].teamName<<nl;
    else cout<<"Enter "<<player_number<<" player name for bowling team:"<<t[toss_lost].teamName<<nl;
    for(ll i=0; i<player_number; i++){
        if(i==0)cout<<"1st player name: ";
        else if(i==1)cout<<"2nd player name: ";
        else if(i==2)cout<<"3rd player name: ";
        else cout<<(i+1)<<"th player name: ";
        cin>>t[1].p[i].name_of_player;
        cricket1 name(t[1].p[i].name_of_player);
        // name.display1();
    }

    cout << "Valid Run(0<=x<=6),No/wide ball(x<0) and witcket(x>6)\n";
    if(d==1)cout << "Enter "<<6*over<<" bowl Run for team: "<<t[toss_won].teamName<<nl;
    else cout << "Enter "<<6*over<<" bowl Run for team: "<<t[toss_lost].teamName<<nl;
    for (ll i = 1; i <=6*over; i++){
        ll x;cin >> x;
        cricket1 b(x);
        b.display();
        while (x < 0){
            cout << "Wrong bowl, again bowl plz." << nl;
            cin >> x;
            cricket1 b(x);
            b.display();
        }
    }
    cout<<"First innings was END!!\n\n";
    total_run=run1,W1=wicket;
    cricket1 k(1,0,0);
    cout << "Valid Run(0<=x<=6),No/wide ball(x<0) and witcket(x>6)\n";
    if(d==0)cout << "Enter "<<6*over<<" bowl Run for team: "<<t[toss_won].teamName<<nl;
    else cout << "Enter "<<6*over<<" bowl Run for team: "<<t[toss_lost].teamName<<nl;
    for (ll i = 1; i <=6*over; i++){
        ll x;cin >> x;
        cricket1 b(x);
        b.display();
        while (x < 0){
            cout << "Wrong bowl, again bowl plz." << nl;
            cin >> x;
            cricket1 b(x);
            b.display();
        }
    }
    Total_Run=run1,W2=wicket;

    cout<<"\n......AFTER TWO INNINGS........\n";
    if(d==1)cout <<"Team "<<t[toss_won].teamName<<" Result."<<nl;
    else cout <<"Team "<<t[toss_lost].teamName<<" Result."<<nl;
    cout<<"Total Run: "<<total_run<<" Wicket: "<<W1<<nl;

    if(d==0)cout <<"Team "<<t[toss_won].teamName<<" Result."<<nl;
    else cout <<"Team "<<t[toss_lost].teamName<<" Result."<<nl;
    cout<<"Total Run: "<<Total_Run<<" Wicket: "<<W2<<nl;
    cout<<nl<<nl;
    if(total_run>Total_Run){
        ll dif=total_run-Total_Run;
        if(d==1)cout <<"Congratulations!!! Team "<<t[toss_won].teamName<<" for WON the game by "<<dif<<" Run."<<nl;
        else cout <<"Congratulations!!! Team "<<t[toss_lost].teamName<<" for WON the game by "<<dif<<" Run."<<nl;
    }
    else if(total_run<Total_Run){
        ll dif=Total_Run-total_run;
        if(d==0)cout <<"Congratulations!!! Team "<<t[toss_won].teamName<<" for WON the game by "<<dif<<" Run."<<nl;
        else cout <<"Congratulations!!! Team "<<t[toss_lost].teamName<<" for WON the game by "<<dif<<" Run."<<nl;
    }
    else{
        cout << "The Match is draw.\n\n";
    }
}
