#include<iostream>
using namespace std;
int main()
{
    int rm;
    float a,b,c,d,e,f,g,h,i,j;
    
    while(true){
    
    cout<<"Enter currency in Malaysian Ringgit: ";
    cin>>rm;
    
    
    cout<<"\n****Currency Converter****\n";
    cout<<"1. Bangladesh\n";
    cout<<"2. Brunei\n";
    cout<<"3. Nigeria\n";
    cout<<"1. Palestine\n";
    cout<<"5. Saudi Arabia\n";
    cout<<"6. Yemen\n";
    cout<<"7. India\n";
    cout<<"8. Pakistan\n";
    cout<<"9. China\n";
    cout<<"10. USA\n";
    cout<<"11. Exit\n\n";
    
    
    int choice;
    cout<< "Enter the Choice: ";
    cin >> choice;
    cout << "\n";
    
    a = rm*20.45;
    b = rm*0.33;
    c = rm*87.22;
    d = rm*0.85;
    e = rm*0.91;
    f = rm*60.64;
    g = rm*16.72;
    h = rm*38.94;
    i = rm*1.67;
    j = rm*0.24;
    
    if(choice == 1){
        cout<<rm<<" Malaysian Ringgits are equal to "<<a<<" Bangladeshi Taka"<<endl;
    }
    
    if(choice == 2){
        cout<<rm<<" Malaysian Ringgits are equal to "<<b<<" Brunei Dollars"<<endl;
    }
    
    if(choice == 3){
        cout<<rm<<" Malaysian Ringgits are equal to "<<c<<" Nigerian Naira"<<endl;
    }
    
    if(choice == 4){
        cout<<rm<<" Malaysian Ringgits are equal to "<<d<<" Israeli New Shekel"<<endl;
    }
    
    if(choice == 5){
        cout<<rm<<" Malaysian Ringgits are equal to "<<e<<" Saudi Riyal"<<endl;
    }
    if(choice == 6){
        cout<<rm<<" Malaysian Ringgits are equal to "<<f<<" Yemeni Rial"<<endl;
    }
    
    if(choice == 7){
        cout<<rm<<" Malaysian Ringgits are equal to "<<g<<" Indian Rupees"<<endl;
    }
    
    if(choice == 8){
        cout<<rm<<" Malaysian Ringgits are equal to "<<h<<" Pakistani Rupees"<<endl;
    }
    
    if(choice == 9){
        cout<<rm<<" Malaysian Ringgits are equal to "<<i<<" Chinese Yuan"<<endl;
    }
    
    if(choice == 10){
        cout<<rm<<" Malaysian Ringgits are equal to "<<j<<" USD"<<endl;
    }
    
    if(choice == 11){
        return 0;
    }
    
    char ch = 'n';
    cout << "\nDo you wish to continue, [y/n] ? ";
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
        continue;
    else{
        cout << "\nThank you for using the application.\n\n";
        break;
    }
    
}
    
    
    return 0;
}
