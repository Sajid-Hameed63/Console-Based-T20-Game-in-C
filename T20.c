#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   
    int total_balls=120,total_players=10,team1Bat[10]={0},team2Bat[10]={0},team1Balls[10]={0};
    int team2Balls[10]={0},players=1,balls=0,sc=0,Total_scores=0;
    int T1,T2,D,max=0,i,sm=0,smT1=0,smT2=0,mindex,nofms,sresult,fours=0,sixes=0,fourst2=0,sixest2=0;
    int fourt1p1=0,fourt1p2=0,fourt1p3=0,fourt1p4=0,fourt1p5=0,fourt1p6=0,fourt1p7=0,fourt1p8=0,fourt1p9=0,fourt1p10=0;
	int sixt1p1=0,sixt1p2=0,sixt1p3=0,sixt1p4=0,sixt1p5=0,sixt1p6=0,sixt1p7=0,sixt1p8=0,sixt1p9=0,sixt1p10=0;
    /*sm= series match*/
    /* nofms=numbers of match for series Tournament*/
    srand(time(0));
    printf("Enter number of total matches for T20 Tournament\n");
    scanf("%d",&nofms);
    while(sm<nofms)
    {
    int total_balls=120,total_players=10,team1Bat[10]={0},team2Bat[10]={0},team1Balls[10]={0};
    int team2Balls[10]={0},players=1,balls=0,sc=0,Total_scores=0;
    int T1,T2,D,max=0,i;
    while(balls<total_balls&&players<=total_players)
    {
        if(players==1)
        {
            team1Balls[0]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p1++;
            if(sc==6)
            	sixt1p1++;
            if(sc==5)
               players++;
            else
                team1Bat[0]=team1Bat[0]+sc;
        }
        else if(players==2)
        {
            team1Balls[1]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p2++;
            if(sc==6)
            	sixt1p2++;
            if(sc==5)
               players++;
            else
                team1Bat[1]=team1Bat[1]+sc;
        }
        else if(players==3)
        {
            team1Balls[2]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p3++;
            if(sc==6)
            	sixt1p3++;
            if(sc==5)
                players++;
            else
                team1Bat[2]=team1Bat[2]+sc;
        }
        else if(players==4)
        {
            team1Balls[3]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p4++;
            if(sc==6)
            	sixt1p4++;
            if(sc==5)
               players++;
            else
                team1Bat[3]=team1Bat[3]+sc;
        }
        else if(players==5)
        {
            team1Balls[4]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p5++;
            if(sc==6)
            	sixt1p5++;
            if(sc==5)
               players++;
            else
                team1Bat[4]=team1Bat[4]+sc;
        }
        else if(players==6)
        {
            team1Balls[5]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p6++;
            if(sc==6)
            	sixt1p6++;
            if(sc==5)
                players++;
            else
                team1Bat[5]=team1Bat[5]+sc;
        }
        else if(players==7)
        {
            team1Balls[6]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p7++;
            if(sc==6)
            	sixt1p7++;
            if(sc==5)
               players++;

            else
                team1Bat[6]=team1Bat[6]+sc;
        }
        else if(players==8)
        {
            team1Balls[7]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p8++;
            if(sc==6)
            	sixt1p8++;
            if(sc==5)
               players++;
            else
                team1Bat[7]=team1Bat[7]+sc;
        }
        else if(players==9)
        {
            team1Balls[8]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p9++;
            if(sc==6)
            	sixt1p9++;
            if(sc==5)
                players++;
            else
                team1Bat[8]=team1Bat[8]+sc;
        }
        else if(players==10)
        {
            team1Balls[9]++;
            sc=rand()%6+1;
            if(sc==4)
            	fourt1p10++;
            if(sc==6)
            	sixt1p10++;
            if(sc==5)
                players++;
            else
                team1Bat[9]=team1Bat[9]+sc;
        }
        if(sc==4)
        	fours++;
        if(sc==6)
        	sixes++;

        balls++;
    }

    printf("\tSCORE CARD OF PAKISTAN\t\n");
    printf("total fours in innings of Pakistan=%d\n",fours);
    printf("total sixes in innings of Pakistan=%d\n",sixes);


    Total_scores=team1Bat[0]+team1Bat[1]+team1Bat[2]+team1Bat[3]+team1Bat[4]+
                 team1Bat[5]+team1Bat[6]+team1Bat[7]+team1Bat[8]+team1Bat[9];
                 printf("Total_Played_Balls =%d\nPlayers Played =%d\nTotal scores of Pakistan =%d\n",balls,--players,Total_scores);

    printf("Sarfaraz Ahmed 1_score =%d\t	Sarfaraz Ahmed 1_balls = %d\n",team1Bat[0],team1Balls[0]);
    printf("Hafeez 2_score =%d\t		Hafeez 2_balls = %d\n",team1Bat[1],team1Balls[1]);
    printf("Babar Azam 3 _score =%d\t		Babar Azam 3_balls = %d\n",team1Bat[2],team1Balls[2]);
    printf("Fakhar Zamman 4 _score =%d\t	Fakhar Zamman 4_balls = %d\n",team1Bat[3],team1Balls[3]);
    printf("Ahmed Shehzad 5_score =%d\t	Ahmed Shehzad 5_balls = %d\n",team1Bat[4],team1Balls[4]);
    printf("Imad Wasim 6_score =%d\t		Imad Wasim 6_balls = %d\n",team1Bat[5],team1Balls[5]);
    printf("Yasir SHah 7_score =%d\t		Yasir SHah 7_balls = %d\n",team1Bat[6],team1Balls[6]);
    printf("Shadab Khan 8_score =%d\t		Shadab Khan 8_balls = %d\n",team1Bat[7],team1Balls[7]);
    printf("Hassan Ali 9_score =%d\t		Hassan Ali 9_balls = %d\n",team1Bat[8],team1Balls[8]);
    printf("Mohammad Amir 10_score =%d\t	Mohammad Amir 10_balls = %d\n",team1Bat[9],team1Balls[9]);

    printf("	CARD OF FOURS AND SIXES FOR EACH PLAYER OF PAKISTAN\n");
    
    printf("fours of Sarfaraz Ahmed 1=%d\t	sixes of Sarfaraz Ahmed 1=%d\n",fourt1p1,sixt1p1);
    printf("fours of Hafeez2=%d\t		sixes of Hafeez2=%d\n",fourt1p2,sixt1p2);
    printf("fours of Babar Azam3=%d\t		sixes of Babar Azam3=%d\n",fourt1p3,sixt1p3);
    printf("fours of Fakhar Zamman4=%d\t	sixes of Fakhar Zamman4=%d\n",fourt1p4,sixt1p4);
    printf("fours of Ahmed Shehzad5=%d\t	sixes of Ahmed Shehzad5=%d\n",fourt1p5,sixt1p5);
    printf("fours of Imad Wasim6=%d\t		sixes of Imad Wasim6=%d\n",fourt1p6,sixt1p6);
    printf("fours of Yasir SHah 7=%d\t		sixes of Yasir SHah 7=%d\n",fourt1p7,sixt1p7);
    printf("fours of Shadab Khan8=%d\t		sixes of Shadab Khan8=%d\n",fourt1p8,sixt1p8);
    printf("fours of Hassan Ali9=%d\t		sixes of Hassan Ali9=%d\n",fourt1p9,sixt1p9);
    printf("fours of Mohammad Amir10=%d\t	sixes of Mohammad Amir10=%d\n",fourt1p10,sixt1p10);
    /*Second team start batting from here*/
    int total_balls2=120,total_players2=10,players2=0,balls2=0,sc2=0,Total_score=0,var=1;
    int fourt2p1=0,fourt2p2=0,fourt2p3=0,fourt2p4=0,fourt2p5=0,fourt2p6=0,fourt2p7=0,fourt2p8=0,fourt2p9=0,fourt2p10=0;
    int sixt2p1=0,sixt2p2=0,sixt2p3=0,sixt2p4=0,sixt2p5=0,sixt2p6=0,sixt2p7=0,sixt2p8=0,sixt2p9=0,sixt2p10=0;
    while(balls2<total_balls2&&var<=total_players2)
    {
        if(var==1)
        {
            team2Balls[0]++;
            sc2=rand()%6+1;
            if(sc2==4)
            	fourt2p1++;
            if(sc2==6)
            	sixt2p1++;
            if(sc2==5)
               var++;
            else
                team2Bat[0]=team2Bat[0]+sc2;
        }
        else if(var==2)
        {
            team2Balls[1]++;
            sc2=rand()%6+1;
            if(sc2==4)
            	fourt2p2++;
            if(sc2==6)
            	sixt2p2++;
            if(sc2==5)
               var++;
            else
                team2Bat[1]=team2Bat[1]+sc2;
        }
        else if(var==3)
        {
            team2Balls[2]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p3++;
            if(sc2==6)
            	sixt2p4++;
            if(sc2==5)
                var++;
            else
                team2Bat[2]=team2Bat[2]+sc2;
        }
        else if(var==4)
        {
            team2Balls[3]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p4++;
            if(sc2==6)
            	sixt2p4++;
            if(sc2==5)
               var++;
            else
                team2Bat[3]=team2Bat[3]+sc2;
        }
        else if(var==5)
        {
            team2Balls[4]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p5++;
            if(sc2==6)
            	sixt2p5++;
            if(sc2==5)
               var++;
            else
                team2Bat[4]=team2Bat[4]+sc2;
        }
        else if(var==6)
        {
            team2Balls[5]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p6++;
            if(sc2==6)
            	sixt2p6++;
            if(sc2==5)
                var++;
            else
                team2Bat[5]=team2Bat[5]+sc2;
        }
        else if(var==7)
        {
            team2Balls[6]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p7++;
            if(sc2==6)
            	sixt2p7++;
            if(sc2==5)
               var++;

            else
                team2Bat[6]=team2Bat[6]+sc2;
        }
        else if(var==8)
        {
            team2Balls[7]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p8++;
            if(sc2==6)
            	sixt2p8++;
            if(sc2==5)
               var++;
            else
                team2Bat[7]=team2Bat[7]+sc2;
        }
        else if(var==9)
        {
            team2Balls[8]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p9++;
            if(sc2==6)
            	sixt2p9++;
            if(sc2==5)
                var++;
            else
                team2Bat[8]=team2Bat[8]+sc2;
        }
        else if(var==10)
        {
            team2Balls[9]++;
            sc2=rand()%6+1;
             if(sc2==4)
            	fourt2p10++;
            if(sc2==6)
            	sixt2p10++;
            if(sc2==5)
                var++;
            else
                team2Bat[9]=team2Bat[9]+sc2;
        }
        if(sc2==4)
        	fourst2++;
        if(sc2==6)
        	sixest2++;

        balls2++;
    }





    printf("\t SCORE CARD OF INDIA\t\n");

    printf("total fours in innings of India=%d\n",fourst2);
    printf("total sixes in innings of india=%d\n",sixest2);
    
    Total_score=team2Bat[0]+team2Bat[1]+team2Bat[2]+team2Bat[3]+team2Bat[4]+
                 team2Bat[5]+team2Bat[6]+team2Bat[7]+team2Bat[8]+team2Bat[9];
    
   
    
    printf("Total score of India=%d\n",Total_score);
    printf("Total players played=%d\n",--var);
    printf("Total balls played=%d\n",balls2);
    
    printf("Rohit Sharma1_score =%d\t		Rohit Sharma1_balls = %d\n",team2Bat[0],team2Balls[0]);
    printf("MS Dhoni2_score =%d\t		MS Dhoni2_balls = %d\n",team2Bat[1],team2Balls[1]);
    printf("Yovraj Singh3_score =%d\t		Yovraj Singh3_balls = %d\n",team2Bat[2],team2Balls[2]);
    printf("Virat Kohli4_score =%d\t		Virat Kohli4_balls = %d\n",team2Bat[3],team2Balls[3]);
    printf("Jadeja5_score =%d\t		Jadeja5_balls = %d\n",team2Bat[4],team2Balls[4]);
    printf("Raina6_score =%d\t			Raina6_balls = %d\n",team2Bat[5],team2Balls[5]);
    printf("Kumar7_score =%d\t		Kumar7_balls = %d\n",team2Bat[6],team2Balls[6]);
    printf("Eshant SHarma8_score =%d\t		Eshant SHarma8_balls = %d\n",team2Bat[7],team2Balls[7]);
    printf("Hardik Panday9_score =%d\t		Hardik Panday9_balls = %d\n",team2Bat[8],team2Balls[8]);
    printf("Shami10_score =%d\t		Shami10_balls = %d\n",team2Bat[9],team2Balls[9]);
    
    printf("	CARD OF FOURS AND SIXES FOR EACH PLAYER OF INDIA\n");
    
    printf("fours of Rohit Sharma1=%d\t	sixes of Rohit Sharma1=%d\n",fourt2p1,sixt2p1);
    printf("fours of MS Dhoni2=%d\t		sixes of MS Dhoni2=%d\n",fourt2p2,sixt2p2);
    printf("fours of Yovraj Singh3=%d\t	sixes of Yovraj Singh3=%d\n",fourt2p3,sixt2p3);
    printf("fours of Virat Kohli4=%d\t		sixes of Virat Kohli4=%d\n",fourt2p4,sixt2p4);
    printf("fours of Jadeja5=%d\t		sixes of Jadeja5=%d\n",fourt2p5,sixt2p5);
    printf("fours of Raina6=%d\t		sixes of Raina6=%d\n",fourt2p6,sixt2p6);
    printf("fours of Kumar7=%d\t		sixes of Kumar7=%d\n",fourt2p7,sixt2p7);
    printf("fours of Eshant SHarma8=%d\t	sixes of Eshant SHarma8=%d\n",fourt2p8,sixt2p8);
    printf("fours of Hardik Panday9=%d\t	sixes of Hardik Panday9=%d\n",fourt2p9,sixt2p9);
    printf("fours of Shami10=%d\t		sixes of Shami10=%d\n",fourt2p10,sixt2p10);
    
    T1=Total_scores;
    T2=Total_score;
    D=T1-T2;
    if(D>0)
    {
    	printf("PAKISTAN HAS WON THE MATCH.\n");
    	for(i=0;i<10;i++)
    		{
    		if(max<team1Bat[i])
    			{
    			max=team1Bat[i];
    			mindex=i;
    			}
    		}
    		smT1++;
    }
    else if(D<0)
    {
    	printf("INDIA HAS WON THE MATCH.\n");
    	for(i=0;i<10;i++)
    		{
    		if(max<team2Bat[i])
    			{
    			max=team2Bat[i];
    			mindex=i;
    			}
    		}
    		smT2++;
    }

    printf("Man of the Match is PLayer=%d and he made scores in this match=%d\n",++mindex,max);
    printf("		***\n");
    printf("		***\n");
    printf("		***\n");
   // printf("Next match\n");
    sm++;
    }
    sresult=smT1-smT2;
    if(sresult>0)
    	printf("PAKISTAN HAS WON THE T20 SERIES TOURNAMENT\n");
    else if(sresult<0)
    	printf("INDIA HAS WON THE T20 SERIES TOURNAMENT\n");
    else
    	printf("T20 Tournament has Tied which means both Teams has won equal number of matches\n");
    
    return 0;
}

	

