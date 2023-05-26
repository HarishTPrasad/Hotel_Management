#include<iostream>
using namespace std;


int main()
{   
    //background color keliye hai ye
    system("color 1f");

    cout<<"\n\n\n\n\t\t\t |________WELCOME TO HARRY'S RESORT________|";

    int quant;
    int choice;
    //yaha Q matlab Quantity of itens
    int Qrooms=0, QLunch=0, QDinner=0, QDrinks=0, QParking=0, QOther=0;
    // yaha S matlb sold items
    int Srooms=0, SLunch=0, SDinner=0, SDrinks=0, SParking=0, SOther=0;
    //total price of itmes hai ye
    int Total_rooms=0, Total_Lunch=0, Total_Dinner=0, Total_Drinks=0, Total_Parking=0, Total_Other=0;
    //register for stocks available
    cout<<"\n\n\n\t\t --------Quantity of items we have today is--------";
    cout<<"\n\nNumber of Rooms available : ";
    cin>>Qrooms;
    cout<<"\nQuantity of Lunch : ";
    cin>>QLunch;
    cout<<"\nQuantity of Dinner : ";
    cin>>QDinner;
    cout<<"\nQuantity of Drinks : ";
    cin>>QDrinks;
    cout<<"\nQuantity of Parking : ";
    cin>>QParking;
    cout<<"\nQuantity of Other : ";
    cin>>QOther;
     //ye hai humara menu
    m:
    cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
    cout<<"\n\n\n\t\t\t Please select from the menu ";
    cout<<"\n\n 1) Rooms |";
    cout<<"\n\n 2) Lunch |";
    cout<<"\n\n 3) Dinner |";
    cout<<"\n\n 4) Drinks |";
    cout<<"\n\n 5) Parking |";
    cout<<"\n\n 6) Other |";
    cout<<"\n\n 7) Information regarding sales and collection |";
    cout<<"\n\n 8) Doubts |";
    cout<<"\n\n 9) Exit |";
    //choice lena hai yha 
    cout<<"\n\n\t\t\t Please Enter your choice!     ";
    cin>>choice;
    //yaha hai main kaam ka saman
    switch(choice)
    {
        //case for Rooms
        case 1:
        cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
        cout<<"\n\n\n Enter the number of Rooms you want : ";
        cin>>quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*2500;
            cout<<"\n\n\t\t"<<quant<<" Rooms have been alloted to you";
        }
        else {
            cout<<"\n\tONLY"<<Qrooms-Srooms<<" Rooms remaining in hotel";
             }break;
           //case for Lunch
            case 2:
            cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
        cout<<"\n\n\n Enter the number of Lunch you want : ";
        cin>>quant;
        if(QLunch-SLunch>=quant)
        {
            SLunch=SLunch+quant;
            Total_Lunch=Total_Lunch+quant*500;
            cout<<"\n\n\t\t"<<quant<<" Lunch have been alloted to you";
        }
        else {
            cout<<"\n\tONLY "<<QLunch-SLunch<<" Lunch remaining in hotel";
             }break;
           //case for Dinner
            case 3:
            cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
        cout<<"\n\n\n Enter the number of Dinner you want : ";
        cin>>quant;
        if(QDinner-SDinner>=quant)
        {
            SDinner=SDinner+quant;
            Total_Dinner=Total_Dinner+quant*700;
            cout<<"\n\n\t\t"<<quant<<" Dinner have been alloted to you";
        }
        else {
            cout<<"\n\tONLY "<<QDinner-SDinner<<" Dinner remaining in Hotel";
            }break;
            //case for Drinks
            case 4:
            cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
        cout<<"\n\n\n Enter the number of Drinks you want : ";
        cin>>quant;
        if(QDrinks-SDrinks>=quant)
        {
            SDrinks=SDrinks+quant;
            Total_Drinks=Total_Drinks+quant*2000;
            cout<<"\n\n\t\t"<<quant<<" Hoodles have been alloted to you";
        }
        else {
            cout<<"\n\tONLY "<<QDrinks-SDrinks<<" Drinks remaining in Hotel";
             }break;
           //case for Parking
            case 5:
            cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
        cout<<"\n\n\n Enter the number of Parking you want : ";
        cin>>quant;
        if(QParking-SParking>=quant)
        {
            SParking=SParking+quant;
            Total_Parking=Total_Parking+quant*250;
            cout<<"\n\n\t\t"<<quant<<" Parking have been alloted to you";
        }
        else {
            cout<<"\n\tONLY "<<QParking-SParking<<" Parking remaining in Hotel";
            } break;
            //case for Other
            case 6:
            cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
        cout<<"\n\n\n Enter the number of Other you want : ";
        cin>>quant;
        if(QOther-SOther>=quant)
        {
            SOther=SOther+quant;
            Total_Other=Total_Other+quant*250;
            cout<<"\n\n\t\t"<<quant<<" Other have been alloted to you";
        }
        else {
            cout<<"\n\tONLY "<<QOther-SOther<<" Other remaining in Hotel";
             }break;
            //case for the collection section is here samjha
             case 7:
             cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
           cout<<"\n\n\n\t\t Details of sales and collection";

           cout<<"\n\n\n Number of Rooms we had : "<<Qrooms;
           cout<<"\n\n Number of Rooms we served : "<<Srooms;
           cout<<"\n\n Remaining Rooms : "<<Qrooms-Srooms;
           cout<<"\n\n Total Rooms collection for the day : "<<Total_rooms;
 
           cout<<"\n\n\n Number of Lunch we had : "<<QLunch;
           cout<<"\n\n Number of Lunch we served : "<<SLunch;
           cout<<"\n\n Remaining Lunch : "<<QLunch-SLunch;
           cout<<"\n\n Total Lunch collection for the day : "<<Total_Lunch;
 
           cout<<"\n\n\n Number of Dinner we had : "<<QDinner;
           cout<<"\n\n Number of Dinner we served : "<<SDinner;
           cout<<"\n\n Remaining Dinner : "<<QDinner-SDinner;
           cout<<"\n\n Total Dinner collection for the day : "<<Total_Dinner;

           cout<<"\n\n\n Number of Drinks we had : "<<QDrinks;
           cout<<"\n\n Number of Drinks we served : "<<SDrinks;
           cout<<"\n\n Remaining Drinks : "<<QDrinks-SDrinks;
           cout<<"\n\n Total Drinks collection for the day : "<<Total_Drinks;

           cout<<"\n\n\n Number of Parking we had : "<<QParking;
           cout<<"\n\n Number of Parking we served : "<<SParking;
           cout<<"\n\n Remaining Parking : "<<QParking-SParking;
           cout<<"\n\n Total Parking collection for the day : "<<Total_Parking;

           cout<<"\n\n\n Number of Other we had : "<<QOther;
           cout<<"\n\n Number of Other we served "<<SOther;
           cout<<"\n\n Remaining Other : "<<QOther-SOther;
           cout<<"\n\n Total Other collection for the day : "<<Total_Other;

           //din ki saari kamai.... total collection
           cout<<"\n\n\n\t\t ===>>Total Collection for the day : "<<Total_Dinner+Total_Other+Total_Drinks+Total_Lunch+Total_rooms+Total_Parking;
           break;
           //Doubts wala case 
           case 8:
           cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
           cout<<"\n\n\n\n\t\t\t Contact our owner : Mr. Harish Prasad";
           cout<<"\n\n\t\t\t Contact number : 7600922448";
           cout<<"\n\n\t\t\t Copy Rights : COPY NINIJA OF THE HIDDEN LEAFE";
           break;
           //case jab koi na samjh ulta sidha input de
           case 9:
           cout<<"\n\n\n\n\t\t\t |________HARRY'S RESORT________|";
            // exit karke for msg print ho jayega
              exit(0);

              default:
                    cout<<"\n ===>>Please select the numbers mentioned !!!!";              
     }
     goto m;

}