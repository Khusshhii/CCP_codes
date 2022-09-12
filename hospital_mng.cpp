#include <iostream>
#include <conio.h>
using namespace std;

string p_name,problem, address, date;
int age;

class hospital
{
    string p_name,problem, address, date;
    int age;
    long int number;
public:
    hospital()
    {
        age=0;
        number=0;
    }
    void patient_appoint();
    void doctor_list();
    void payment();
    void hospital_details();
};

class doctor : public hospital
{
public:
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
};

void doctor::one()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}

void doctor::two()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}

void doctor::three()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}

void doctor::four()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}

void doctor::five()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}

void doctor::six()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}

void doctor::seven()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}

void doctor::eight()
{

    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tOkay, Thank You. We will be contacting you in sometime!"<<endl;
}


void hospital :: patient_appoint()
{
    cout<<"\t\t\t\t\t\tPatient Name: ";
    cin.ignore();
    getline(cin, p_name);
    cout<<"\t\t\t\t\t\tPatient Age: ";
    cin>>age;
    cout<<"\t\t\t\t\t\tPatient Problem: ";
    cin.ignore();
    getline(cin, problem);
    cout<<"\t\t\t\t\t\tAddress: ";
    cin.ignore();
    getline(cin, address);
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;
    cout<<"\t\t\t\t\t\tAppoint Date: ";
    cin.ignore();
    getline(cin, date);
    cout<<"\n\t\t\t\t\t\tSuccessfully Booked!"<<endl<<endl;
}

void hospital::doctor_list()
{
    cout<<"t1. Dr.Siraj\t*Eye Specialist"<<endl<<endl;
    cout<<"t2. Dr.Kiran\t\t*Heart Specialist"<<endl<<endl;
    cout<<"t3. Dr.Hugar\t\t*Diabetic Specialist"<<endl<<endl;
    cout<<"t4. Dr.Zia\t\t*Heart Surgent"<<endl<<endl;
    cout<<"t5. Dr.Shetty\t\t*Eye Specialist"<<endl<<endl;
    cout<<"t6. Dr.Rakesh\t\t*Diabetic Specialist"<<endl<<endl;
    cout<<"t7. Dr.Rao\t\t*Medicine Specialist"<<endl<<endl;
    cout<<"t8. Dr.Rkp Singh\t*Medicine Specialist"<<endl<<endl;
}

void hospital::payment()
{
    int amount, number;

    cout<<"\t\t\t\t\t\tPatient Name: "<<p_name<<endl<<endl;
    cout<<"\t\t\t\t\t\tPatient Problem: "<<problem<<endl<<endl;
    cout<<"\t\t\t\t\t\tEnter Amount of treatment: ";
    cin>>amount;
    cout<<endl;
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;

    cout<<"\n\t\t\t\t\t\tPayment Successful, Thank You!"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t"<<p_name<<endl;
    cout<<"\t\t\t\t\t\t------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t|    Patient Name: "<<p_name<<endl;
    cout<<"\t\t\t\t\t\t|    Patient Problem: "<<problem<<endl;
    cout<<"\t\t\t\t\t\t|    Payment Amount: "<<amount<<endl;
    cout<<"\t\t\t\t\t\t|    Mobile: "<<number<<endl;
    cout<<"\n\t\t\t\t\t\t\tThank You!"<<endl;

}

void hospital::hospital_details()
{
    cout<<"\t\t\tHospital is a place where the sick and the injured are taken for treatment."<<endl;
    cout<<"\t\t\tThe doctors and nurses are readily available there for admitting and attending"<<endl;
    cout<<"\t\t\ton their patients. The dedicated teams of doctors and nurses delivers the message"<<endl;
    cout<<"\t\t\tof hope to their patients in the hospitals. All over the world, hospitals are built"<<endl;
    cout<<"\t\t\tto treat and cure thousands of the sick patients. As these hospitals, there are very"<<endl;
    cout<<"\t\t\ttwell-equipped facilities and expert doctors. These hospitals are considered the best"<<endl;
    cout<<"\t\t\tplaces for effective treatment.The doctors and nurses do their work with a dedication"<<endl;
    cout<<"\t\t\tand maintains the pleasant atmosphere of the hospital so that the patients feel"<<endl;
    cout<<"\t\t\tcomfortable and better"<<endl;
}

int main()
{
    int answer, doc, x;
    hospital obj;
    doctor pat;

    do{
        system("cls");
        cout<<"\n\n\t\t\t\t\t\tHospital Management System"<<endl;
        cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
        cout<<"\t\t\t\t\t\t1. Emergency Seat Booking"<<endl<<endl;
        cout<<"\t\t\t\t\t\t2. Make Payment"<<endl<<endl;
        cout<<"\t\t\t\t\t\t3. Doctor List & Appoint"<<endl<<endl;
        cout<<"\t\t\t\t\t\t4. Hospital Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t5. Exit"<<endl<<endl;
        cout<<"\n\t\t\t\t\tSelect An Option from here 1/2/3/4/5: ";
        cin>>answer;
    switch(answer)
    {
        case 1: cout<<"\n\t\t\t\t\t\t1. Doctor Appointment"<<endl;
        cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
        obj.patient_appoint();
        break;
        case 2: cout<<"\n\t\t\t\t\t\t2. Make Payment"<<endl;
        cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
        obj.payment();
        break;
        case 3: cout<<"\n\t\t\t\t\t\t3. Doctor List"<<endl;
        cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
        obj.doctor_list();
        cout<<"\n\t\t\t\t\t\tSelect A Doctor For Appointment: ";
        cin>>doc;
        switch(doc)
        {
            case 1: cout<<"\n\t\t\t\t\t\t1. Dr.Siraj"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.one();
            break;
            case 2: cout<<"\n\t\t\t\t\t\t2. Dr.Kiran"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.two();
            break;
            case 3: cout<<"\n\t\t\t\t\t\t3. Dr.Hugar"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.three();
            break;
            case 4: cout<<"\n\t\t\t\t\t\t4. Dr.Zia"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.four();
            break;
            case 5: cout<<"\n\t\t\t\t\t\t5. Dr.Shetty"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.five();
            break;
            case 6: cout<<"\n\t\t\t\t\t\t6. Dr.Rakesh"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.six();
            break;
            case 7: cout<<"\n\t\t\t\t\t\t7. Dr.Rao"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.seven();
            break;
            case 8: cout<<"\n\t\t\t\t\t\t8. Dr.Rkp Singh"<<endl;
            cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
            pat.eight();
            break;
            default:
                cout<<"Unknown Select! Try Again."<<endl<<endl;
        }
        break;
        case 4: cout<<"\n\t\t\t\t\t\t4. Hospital Details"<<endl;
        cout<<"\t\t\t\t\t\t___________"<<endl<<endl;
        obj.hospital_details();
        break;
        case 5:
            if(answer == 5)
            {
                exit(1);
            }
        default:
            cout<<"\t\t\t\t\t\tTry Again!"<<endl<<endl;
    }
    cout<<"\n\t\t\t\t\tSelect An Option Again: yes or no => ";
    x = getch();

    if(x == 'n' || x == 'N')
    {
        exit(0);
    }
}
while(x == 'y' || x == 'Y');

    getch();
}