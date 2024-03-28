#include<bits/stdc++.h>
using namespace std;
class Player{
	public:
	char name_of_player[26];
	int No_of_runs_scored=0,No_of_runs_given=0,No_of_balls_played=0,No_of_balls_delivered=0,XTRa=0,No_of_wicket_taken=0;
    float over_played=0.0,economy_rate_of_a_player,strike_rate_of_a_player=0.0;


	void setname(){
		cout<<"Player's name ";
		cin>>name_of_player;}

};
class Team{
	public:
	char teamName[10];
	Player p[16];
	float over_played_by_team=0.0;
	int wicket_taken_by_Team=0,total_runs_scored_by_team=0,fall_of_wickets[10]={0},on_strike_batsman=0,far_end_batsman=0,on_strike_bowler=0;
	bool toss_won_by_team=0;

	Team(){
		strcpy(teamName,"");
	}
	void setTeamname()	{
		cout<<"Enter the Team name :";
		cin>>teamName;
     }

	bool Batting(Team t){
		char choice[4];
		cout<<t.teamName<<"Like to Bat/Bowl first  (Bat/Bowl)";
		cin>>choice;
		if(strcmp(choice,"Bat")==0 ||strcmp(choice,"Bowl")==0 || strcmp(choice,"BAT")==0 ||strcmp(choice,"BOWL")==0){
				if(strcmp(choice,"Bat")==0 || strcmp(choice,"BAT")==0)
					return true;
				else
					return false;
		}
		else{

			return Batting(t);
		}
	}

	int tossTime(Team t1, Team t2){
		srand(time(NULL));
		int r=(rand()%2);
		cout<<"It toss time"<<endl;
		if(r==0){
            cout<<t1.teamName <<"Will throw the coin"<<endl;
			r=(rand()%2);
			if(r ==0){
				cout<<"Team "<<t1.teamName<<" has won the toss";
				return 0;
				}
			else{
				cout<<"Team "<<t2.teamName<<" has won the toss";
				return 1;
			}
		}
		else {
			cout<<t2.teamName <<"Will throw the coin"<<endl;
			r=(rand()%2);
			if(r ==0){
				cout<<"Team "<<t1.teamName<<" has won the toss";
				return 0;
				}
			else{
				cout<<"Team "<<t2.teamName<<" has won the toss";
				return 1;
			}

		}
	}
	bool strike_changed(int runs){
		switch(runs){
            case 0:
			case 1:
			case 5:
			case 3:return true;
			case 2:
			case 4:
			case 6:return false;
			default:cout<<"Invalid Run";
		}
		return NULL;
	}
	void displayDataAtTheOverEnd(Team battingTeam , Team bowlingTeam){


	  cout << "Batsmen on Strike "<<battingTeam.p[battingTeam.on_strike_batsman].name_of_player << endl;
	  cout << "Strike Rate "<< battingTeam.p[battingTeam.on_strike_batsman].strike_rate_of_a_player << endl;
	  cout << "Batsmen far End " <<battingTeam.p[battingTeam.far_end_batsman].name_of_player << endl;
	  cout << "Strike Rate "<< battingTeam.p[battingTeam.far_end_batsman].strike_rate_of_a_player << endl;

	  cout << "Previous Bowler "<<bowlingTeam.p[bowlingTeam.on_strike_bowler].name_of_player << endl;
	  cout << "Economy Rate " <<bowlingTeam.p[bowlingTeam.on_strike_bowler].economy_rate_of_a_player << endl;



	}


	void displayBoundariesWicket(char run){
		switch (run-48) {
			case 4:cout << "..FOUR.." << '\n';break;
			case 6:cout << "....SIX...." << '\n';break;
			case 39:   // 39+48 =87 ('W')
			case 71:cout << " BIG WICKET   " << '\n';break;   // 71+48 =119 ('w')
			default:return;
		}
	}

    void inningsStarted(Team *battingTeam,Team *bowlingTeam,int num_Of_Over_Match){

	  char result;
        cout<<"ENTER RUNS";
	  for(int i = 1;i <= num_Of_Over_Match * 6 ; i++){

	      cin>>result;

				battingTeam->p[battingTeam->on_strike_batsman].No_of_balls_played++;
				if(result!='e' || result != 'e')
					bowlingTeam->p[bowlingTeam->on_strike_bowler].No_of_balls_delivered++;
	displayBoundariesWicket(result);


				if (result=='w' || result == 'W')
				{
					//first display the player details after fall of his wickets
					(bowlingTeam->p[bowlingTeam->on_strike_bowler].No_of_wicket_taken)++;
					battingTeam->fall_of_wickets[bowlingTeam->wicket_taken_by_Team++]=battingTeam->total_runs_scored_by_team;
					battingTeam->on_strike_batsman = (battingTeam->on_strike_batsman > battingTeam->far_end_batsman ) ? battingTeam->on_strike_batsman + 1 : battingTeam->far_end_batsman + 1;
				}
	      if(result>=48 && result<=57){
	        battingTeam->p[battingTeam->on_strike_batsman].No_of_runs_scored+=result-48;
	        bowlingTeam->p[bowlingTeam->on_strike_bowler].No_of_runs_given+=result-48;
	        battingTeam->p[battingTeam->on_strike_batsman].No_of_balls_played++;
	        bowlingTeam->p[bowlingTeam->on_strike_bowler].No_of_balls_delivered++;

	        battingTeam->total_runs_scored_by_team += (result - 48) ;
	        if(strike_changed(result-48)==true){

	          battingTeam->on_strike_batsman=battingTeam->on_strike_batsman+battingTeam->far_end_batsman;
	          battingTeam->far_end_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;
	          battingTeam->on_strike_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;

       }
    }
  if(i % 6 == 0 ){
    battingTeam->over_played_by_team++;
    battingTeam->p[battingTeam->on_strike_batsman].over_played=(battingTeam->p[on_strike_batsman].No_of_balls_played*1.0)/6;//over played by a batsmen
    bowlingTeam->p[bowlingTeam->on_strike_bowler].over_played++;//update the ball delivered

    battingTeam->p[battingTeam->on_strike_batsman].strike_rate_of_a_player=(battingTeam->p[battingTeam->on_strike_batsman].No_of_runs_scored / (battingTeam->p[battingTeam->on_strike_batsman].No_of_balls_played ))*100;
    battingTeam->p[battingTeam->far_end_batsman].strike_rate_of_a_player=(battingTeam->p[battingTeam->far_end_batsman].No_of_runs_scored / (battingTeam->p[battingTeam->far_end_batsman].No_of_balls_played ))*100;
    //economy rate of bowler after each delivery
    bowlingTeam->p[bowlingTeam->on_strike_bowler].economy_rate_of_a_player=(bowlingTeam->p[bowlingTeam->on_strike_bowler].No_of_runs_given*1.0/bowlingTeam->p[bowlingTeam->on_strike_bowler].No_of_balls_delivered)*100;
  //to swap the batsmen at the end of over
    battingTeam->on_strike_batsman=battingTeam->on_strike_batsman+battingTeam->far_end_batsman;
    battingTeam->far_end_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;
    battingTeam->on_strike_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;
    displayDataAtTheOverEnd(*battingTeam,*bowlingTeam);
				}
	}

	}
};

int main(){
	Team t[2],t0;
	int innings1_batting_team,innings2_batting_team,over;
	cout<<"NUMBER OF OVERS\t:";
	cin>>over;
	t[0].setTeamname();
	t[1].setTeamname();
	int toss_won_by_team,toss_lost_by_team;
	bool tossWon_Team_Choose_Batting ;
	cout<<"LIST OF PLAYING 11 FOR THE TEAM :"<<t[0].teamName<<endl;
	for(int i=0;i<11;i++){
		cin>>t[0].p[i].name_of_player;
	}
	cout<<"LIST OF PLAYING 11 FOR THE TEAM :"<<t[1].teamName<<endl;
	for(int i=0;i<11;i++){
		cin>>t[1].p[i].name_of_player;
	}
	// toss_won_by_team=Team::tossTime(t[0],t[1]);//0 for team1 and 1 for team2,//to do team selecting for batting first
	toss_won_by_team=t0.tossTime(t[0],t[1]);
	if(toss_won_by_team==0)toss_lost_by_team=1;
	else {toss_lost_by_team=0;}
	//Innings started by "toss won by team"
	tossWon_Team_Choose_Batting=t0.Batting(t[toss_won_by_team]);
	if(tossWon_Team_Choose_Batting==0){

		innings1_batting_team=toss_won_by_team;
		t0.inningsStarted(&t[toss_won_by_team],&t[toss_lost_by_team],over);
	}
	else
	{
		innings1_batting_team=toss_lost_by_team;
		t0.inningsStarted(&t[toss_lost_by_team], &t[toss_won_by_team],over);
	}

	cout<<"Total runs required to win the match \t:" ;
	cout<<t[innings1_batting_team].total_runs_scored_by_team + 1<<endl;

    

return 0;
}