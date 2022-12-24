#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;

    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake= 0,
    Qchicken = 0; 

    // food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake=0, Schicken = 0;

    // food price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger= 0, Total_noodles = 0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have"<<endl;
    cout<<"Rooms available"<<endl;
    cin>>Qrooms;
    cout<<"Quantity of pasta"<<endl;
    cin>>Qpasta;
    cout<<"Quantity of burger"<<endl;
    cin>>Qburger;
    cout<<"Quantity of noodles"<<endl;
    cin>>Qnoodles;
    cout<<"Quantity of shakes"<<endl;
    cin>>Qshake;
    cout<<"Quantity of Chicken Roll"<<endl;
    cin>>Qchicken;


    // 
    m:
    cout<<"\t Please Select From the given menu items"<<endl;
    cout<<"\n) Rooms"<<endl;
    cout<<"\n2) Pasta"<<endl;
    cout<<"\n3) Burger"<<endl;
    cout<<"\n4) Noodles"<<endl;
    cout<<"\n5) Shake"<<endl;
    cout<<"\n6) Chicken-roll"<<endl;
    cout<<"\n7) Information Regarding Sales and collection"<<endl;
    cout<<"\n8) Exit"<<endl;

    cout<<"Enter your choice"<<endl;
    cin>>choice;    

    switch (choice)
    {
    case 1: 
        cout<<"Enter the number of rooms you want: "<<endl;
        cin>>quant;
        if (Qrooms-Srooms >= quant)
        {
            Srooms=Srooms+quant;
            Total_rooms= Total_rooms+quant*1200;
            cout<<"\t\t"<<quant<<"rooms have been alloted to you!"<<endl;
        }
        else{
            cout<<"\t Only "<<Qrooms-Srooms<<"Rooms remaining in hotel "<<endl;
        }
        break;
    
    case 2: 
        cout<<"Enter the number of pasta you want: "<<endl;
        cin>>quant;
        if (Qpasta-Spasta >= quant)
        {
            Spasta=Spasta+quant;
            Total_pasta= Total_pasta+quant*250;
            cout<<"\t\t"<<quant<<" pasta has been order."<<endl;
        }
        else{
            cout<<"\t Only "<<Qpasta-Spasta<<"Pasta are remaining in hotel "<<endl;
        }
        break;

    case 3: 
        cout<<"Enter the number of Burger you want: "<<endl;
        cin>>quant;
        if (Qburger-Sburger >= quant)
        {
            Sburger=Sburger+quant;
            Total_burger= Total_burger+quant*120;
            cout<<"\t\t"<<quant<<" burger has been order."<<endl;
        }
        else{
            cout<<"\t Only "<<Qburger-Sburger<<" Burger are remaining in hotel "<<endl;
        }
        break;


    case 4: 
        cout<<"Enter the number of noodles you want: "<<endl;
        cin>>quant;
        if (Qnoodles-Snoodles >= quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles= Total_noodles+quant*140;
            cout<<"\t\t"<<quant<<" noodles has been order."<<endl;
        }
        else{
            cout<<"\t Only "<<Qnoodles-Snoodles<<"Noodles are remaining in hotel "<<endl;
        }
        break;


    case 5: 
        cout<<"Enter the number of shakes you want: "<<endl;
        cin>>quant;
        if (Qshake-Sshake >= quant)
        {
            Sshake=Sshake+quant;
            Total_shake= Total_shake+quant*120;
            cout<<"\t\t"<<quant<<" Shakes has been order."<<endl;
        }
        else{
            cout<<"\t Only "<<Qshake-Sshake<<" Shakes remaining in hotel "<<endl;
        }
        break;
    

    case 6: 
        cout<<"Enter the number of Chicken Roll you want: "<<endl;
        cin>>quant;
        if (Qchicken-Schicken >= quant)
        {
            Schicken=Schicken+quant;
            Total_chicken= Total_chicken+quant*100;
            cout<<"\t\t"<<quant<<" Chicken-Roll has been order."<<endl;
        }
        else{
            cout<<"\t Only "<<Qchicken-Schicken<<" Chicken-rolls remaining in hotel "<<endl;
        }
        break;

    
    case 7:
        cout<<"Details of sales and collection"<<endl;
        cout<<"Numbers of rooms we had : "<<Qrooms<<endl;
        cout<<"Numbers of Rooms we gave for rent : "<<Srooms<<endl;
        cout<<"Remaining Rooms "<<Qrooms-Srooms<<endl;
        cout<<"Total Rooms collection for the day :"<< Total_rooms <<endl;


        cout<<"Numbers of Pasta we had : "<<Qpasta<<endl;
        cout<<"Numbers of Pasta we sold : "<<Spasta<<endl;
        cout<<"Remaining Pasta "<<Qpasta-Spasta<<endl;
        cout<<"Total Pasta collection for the day :"<< Total_pasta <<endl;

        cout<<"Numbers of Burger we had : "<<Qburger<<endl;
        cout<<"Numbers of Burger we sold : "<<Sburger<<endl;
        cout<<"Remaining Burger : "<<Qburger-Sburger<<endl;
        cout<<"Total Burger collection for the day :"<< Total_burger <<endl;


        cout<<"Numbers of noodle we had : "<<Qnoodles<<endl;
        cout<<"Numbers of noodles we sold : "<<Snoodles<<endl;
        cout<<"Remaining noodles : "<<Qnoodles-Snoodles<<endl;
        cout<<"Total Noodles collection for the day :"<< Total_noodles <<endl;


        cout<<"Numbers of Shakes we had : "<<Qshake<<endl;
        cout<<"Numbers of shakes we sold : "<<Sshake<<endl;
        cout<<"Remaining Shakes : "<<Qshake-Sshake<<endl;
        cout<<"Total shakes collection for the day :"<< Total_shake <<endl;


        cout<<"Numbers of Chicken-Roll we had : "<<Qchicken<<endl;
        cout<<"Numbers of Chicken-Roll we sold : "<<Schicken<<endl;
        cout<<"Remaining Chicken-Roll : "<<Qchicken-Schicken<<endl;
        cout<<"Total Chicken-Roll collection for the day :"<< Total_chicken <<endl;

        cout<<"Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_chicken+Total_shake;
        break;
    
    case 8:
        exit(0);

    default:
        cout<<"Please select the number mentioned above";
        break;
    }

    goto m;

}
