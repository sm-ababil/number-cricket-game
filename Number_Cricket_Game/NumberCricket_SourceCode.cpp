#include <iostream>
#include <ctime>

int main(){
    int num;
    int runs = 0;
    int wickets = 0;
    int randnum;
    int bl=0;
    int total;
    
    std::cout<<"------Welcome to NUMBER CRICKET !-------"<<"\n\n\n\n";

    do{
        srand(time(NULL));
        randnum = rand()%6 + 1;

        std::cout<<"Hit for: ";
        std::cin>>num;
        
        if (bl== 0){
            if ((num<1) || (num>6)){
                std::cout<<">>>>  DOT  <<<<"<< "Bowled: "<<randnum<<"\n";
                std::cout<<"Scoreboard: "<<runs<<" - "<<wickets<<"\n";
            }
            else if (num != randnum){
                runs+=num;
                std::cout<<">>>>  "<<num<<"  <<<<"<< "Bowled: "<<randnum<<"\n";
                std::cout<<"Scoreboard: "<<runs<<" - "<<wickets<<"\n";
            }
            else{
                wickets+=1;

                if (wickets<3){
                    std::cout<<"*********** OUT ! ***********"<< "Bowled: "<<randnum<<"!"<<"\n";
                    std::cout<<"Scoreboard: "<<runs<<" - "<<wickets<<"\n";
                }
                else{
                    std::cout<<"*********** ALL OUT ! *************"<< "Bowled: "<<randnum<<"\n";
                    std::cout<<"###### Target: "<<runs+1<<" ##########"<<"\n";
                    total = runs+1;
                    bl+=1;
                    runs = 0;
                    wickets = 0;

                }    
            }
        }
        else{
            if ((num<1) || (num>6)){
                std::cout<<">>>>  DOT  <<<<"<< "Bowled: "<<randnum<<"\n";
                std::cout<<"Scoreboard: "<<runs<<" - "<<wickets<<"\n";
            }
            else if (num != randnum){
                runs+=num;
                std::cout<<">>>>  "<<num<<"  <<<<"<< "Bowled: "<<randnum<<"\n";
                if (runs<total){
                    std::cout<<"Scoreboard: "<<runs<<" - "<<wickets<<" || Need "<<total-runs<<" to win !"<<"\n";
                }
                else{
                    std::cout<<"**************** CONGRATS! You win by "<<3-wickets<<" wicket(s) ! ******************"<<"\n";
                    bl+=1;
                }
            }
            else{
                wickets+=1;
                if (wickets<3){
                    std::cout<<"*********** OUT ! ***********"<< "Bowled: "<<randnum<<" !"<<"\n";
                    std::cout<<"Scoreboard: "<<runs<<" - "<<wickets<<" || Need "<<total-runs<<" to win !"<<"\n";
                }
                else{
                    if (runs==total-1){
                        std::cout<<"********  ALL OUT! ********"<<"\n";
                        std::cout<<"******* Match DRAWN ! *****"<<"\n";
                        bl+=1;
                    }
                    else{
                        std::cout<<"**************************  ALL OUT! *******************************"<<"\n";
                        std::cout<<"***************** Fucked ! You lose by "<<total-runs-1<<" runs ! *******************"<<"\n";
                        bl+=1;
                    }
                    
                }    
            }
        }
    } while(bl<2);

    std::cout<<"\n\n\n\n\nThank you for playing Number Cricket !"<<"\n";
    std::cout<<"Coded by S. M. Ababil Islam"<<"\n";

    return 0;
}