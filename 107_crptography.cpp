#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include<sys/stat.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cwchar>
#include <algorithm>
#include <istream>
#include <iterator>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <map>
#include <random>
#include <ostream>
#include <cmath>
#include<fstream>
#include <cstdlib>
#include<bits/stdc++.h>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
using namespace std;
class detail{
  public:
  string pemail;
  string pmobile;
  string ppasscode;
  string prpasscode;
  string publickey;
};
long long int authentication=15122002;
string privatekey="c2cstrong+";
map<int,detail> mp;
long long int id=13022022;
int counter=3;
pair<int,int> primes=make_pair(37,73);
int public_key,private_key;


//function to marking the gcd of the prime numbers

int gcd(int a, int b)
{
    int result = min(a, b); 
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; 
}



// Decryption Processing

string Decryption(string a)
{

  int pfact= primes.first * primes.second;
int fi= (primes.first-1) * (primes.second-1);
int e = 2;

 while (1) {
        if (gcd(e, fi) == 1)
            break;

        e++;
    } 
    public_key = e;

    int d = 2;
    while (1) {
        if ((d * e) % fi == 1)
            break;
        d++;
    }
    private_key = d;

for(int i=0; i<a.size(); i++)
{
  a[i]-=((privatekey.size()-1)+private_key+public_key)+73;
}
return a;

}

//Decryption Is Running On Here......!

string Decryption(string a,string key)
{
  int pfact= primes.first * primes.second;
int fi= (primes.first-1) * (primes.second-1);
int e = 2;

 while (1) {
        if (gcd(e, fi) == 1)
            break;

        e++;
    } 
    public_key = e;

    int d = 2;
    while (1) {
        if ((d * e) % fi == 1)
            break;
        d++;
    }
    private_key = d;

if(key==privatekey.substr(0,privatekey.size()-1))
{
for(int i=0; i<a.size(); i++)
{
  a[i]+=(key.size()+private_key+public_key)+73;
}
return a;
}
else{
  return "";
}
}


//Encryption is based ob public key scienerio of the system 

string Encryption(string a,string key)
{
  int pfact= primes.first * primes.second;
int fi= (primes.first-1) * (primes.second-1);
int e = 2;

 while (1) {
        if (gcd(e, fi) == 1)
            break;

        e++;
    } 
    public_key = e;

    int d = 2;
    while (1) {
        if ((d * e) % fi == 1)
            break;
        d++;
    }
    private_key = d;

if(key==privatekey.substr(0,privatekey.size()-1))
{
for(int i=0; i<a.size(); i++)
{
 a[i]+=(key.size()+private_key+public_key)+73;
}
return a;
}
else{
  return "";
}
}


//Databse Is Loading in our system here!

void section()
{
system("clear");
  cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Wait Your Database Is Running  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
cout<<"\n\n\n";
 system("mkdir /Users/yashrajjain/downloads/M.C.A-Semester-4/Class-Work/Cryptography-Project/Database");
    ofstream databasedb;
  for(auto &it: mp)
  {
       databasedb.open("/Users/yashrajjain/downloads/M.C.A-Semester-4/Class-Work/Cryptography-Project/Database/ids.txt",ios::app);
     if(databasedb.is_open())
     {
      databasedb<<it.first<<"\n";
     }
     databasedb.close();

      databasedb.open("/Users/yashrajjain/downloads/M.C.A-Semester-4/Class-Work/Cryptography-Project/Database/emails.txt",ios::app);
     if(databasedb.is_open())
     {
      databasedb<<it.second.pemail<<"\n";
     }
     databasedb.close();

      databasedb.open("/Users/yashrajjain/downloads/M.C.A-Semester-4/Class-Work/Cryptography-Project/Database/mobile.txt",ios::app);
     if(databasedb.is_open())
     {
      databasedb<<it.second.pmobile<<"\n";
     }
     databasedb.close();

      databasedb.open("/Users/yashrajjain/downloads/M.C.A-Semester-4/Class-Work/Cryptography-Project/Database/pass.txt",ios::app);
     if(databasedb.is_open())
     {
      databasedb<<it.second.ppasscode<<"\n";
     }
     databasedb.close();

    }
    cout<<flush;
    sleep(2);
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Hurray!!! Database Has Been Sectioned   ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    sleep(3);
cout<<"\n\n";
}


//Here Upradation Is Being Processed

void upgradationdb()
{
  ofstream file("updatabase.txt");
    file<<"";
    file.close();

  ofstream databasedb;
  for(auto &it: mp)
  {
       databasedb.open("updatabase.txt",ios::app);
     if(databasedb.is_open())
     {
      databasedb<<it.first<<'\t'<<it.second.pemail<<'\t'<<it.second.pmobile<<'\t'<<it.second.ppasscode<<'\t'<<it.second.publickey<<'\t'<<"\n";
     }
     databasedb.close();
    }
   
      cout<<"\n\n"<<endl;
}


//Credentials Are Uprading Here

void keyuprade()
{
  system("clear");
 cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Do You Want To Upgrade The Key ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
      cout<<"\n\n"<<endl;
      
   cout<<"                            Enter Your y/Y :- ";
   char input;
   cin>>input;

   if(input=='y' || input=='Y')
   {
    cout<<"\n\n"<<endl;
    cout<<"        ------------ Enter New Private Key:- "<<endl;
  
    string newkey;
    cin>>newkey;

    privatekey=newkey;
  
  detail temp;
  temp.publickey= privatekey.substr(0,privatekey.length()-1)+'-';

    for(auto &i:mp)
    {
      i.second.publickey=temp.publickey;
    }
      cout<<"\n\n"<<endl;
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Private Key Upgraded Successfully ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    upgradationdb();
      cout<<"\n\n"<<endl;
   }

}


//Replicating the database

void duplicatedb(vector<int> ids)
{
  ofstream databasedb;
  int count=0;
  for(auto &it: mp)
  {
       databasedb.open("dupdatabase.txt",ios::app);
     if(databasedb.is_open() && it.first==ids[count] && count<ids.size())
     {
      databasedb<<it.first<<'\t'<<it.second.pemail<<'\t'<<it.second.pmobile<<'\t'<<it.second.ppasscode<<'\t'<<it.second.publickey<<'\t'<<"\n";
     }
     count++;
    }
   databasedb.close();
   cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Your Duplicate File Has Been SuccessFully Created ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
      cout<<"\n\n"<<endl;
      sleep(3);
}


// New Modified Database Is Creating Here

void modificationdb()
{
  ofstream file("database.txt");
    file<<"";
    file.close();

  ofstream databasedb;
  for(auto &it: mp)
  {
       databasedb.open("database.txt",ios::app);
     if(databasedb.is_open())
     {
      databasedb<<it.first<<'\t'<<it.second.pemail<<'\t'<<it.second.pmobile<<'\t'<<it.second.ppasscode<<'\t'<<it.second.publickey<<'\t'<<"\n";
     }
     databasedb.close();
    }
   
      cout<<"\n\n"<<endl;
}



//Modification On Credentials Of Authorised User


void modification(int id){
  int loop=0;
  do
  {
   system("clear");
  cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Do You Want To Modify your Credentials ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n"<<endl;
    cout<<"                             1) Email                            "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             2) Mobile Number                            "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             3) Password                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Choose Any Option ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
   cout<<"                            Enter Your Choice:- ";
   int input;
   cin>>input;
   system("clear");
   cout<<"\n\n"<<endl;
   detail temp;
    switch (input)
   {
   case 1 :
    cout<<"                   Your Current Email Is:-  "<<mp[id].pemail<<endl;
    cout<<"\n\n Enter Your New Email:- ";
    cin>>temp.pemail;
    mp[id].pemail=Encryption(temp.pemail,privatekey.substr(0,privatekey.size()-1));
    cout<<"\n\n"<<endl;
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Email Is SuccessFully Modified ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    break;

    case 2 :
     cout<<"                   Your Current Mobile Number Is:-  "<<mp[id].pmobile<<endl;
    cout<<"\n\n Enter Your New Mobile No. ";
    
    cin>>temp.pmobile;
    mp[id].pmobile=Encryption(temp.pmobile,privatekey.substr(0,privatekey.size()-1));
    cout<<"\n\n"<<endl;
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Mobile No. Is SuccessFully Modified ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    break;

    case 3 :
      cout<<"                   Your Current Password Is:-  "<<mp[id].ppasscode<<endl;
    cout<<"\n\n Enter Your New Password:- ";
    
    cin>>temp.ppasscode;
    mp[id].ppasscode=Encryption(temp.ppasscode,privatekey.substr(0,privatekey.size()-1));
    cout<<"\n\n"<<endl;
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Password Is SuccessFully Modified ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    break;

    default:
      cout<<"                   Your All Detail Is Already Saved:-  ";
      cout<<"\n\n"<<endl;
    break;
}
cout<<"\n\n"<<endl;
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Do You Want More Modification Press 1 ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    
    cin>>loop;
  } while (loop==1);

  modificationdb();
}

//Most IMportant Part Of Database Sytem Here IS ALL database is loading in our machine

void opendatabase()
{
  fstream databasedb;
    string final="";
    databasedb.open("database.txt");
 
    if (databasedb.is_open()) { 
        string word;
        int id;
        int last;
        int flag;
        
        while (getline(databasedb, word)) 
        
        { 
          final=word;
          last=0;
         flag=0;
        detail obj1;
          for(int i=0; i<word.size(); i++)
          {
          if(word[i]=='\t' &&flag==0)
              {
           id=stoi( word.substr(last,i-last) );
           last=i+1;
           flag++;
              }

            else if(word[i]=='\t' &&flag==1)
              {
                obj1.pemail=word.substr(last,i-last);
                last =i+1;
                flag++;
              }
              else if(word[i]=='\t' &&flag==2)
              {
              obj1.pmobile=word.substr(last,i-last);
                last =i+1;
                flag++;
              }
              else if(word[i]=='\t' &&flag==3)
              {
                obj1.ppasscode=word.substr(last,i-last);
                last =i+1;
                flag++;
              }
               else if(word[i]=='\t' &&flag==4)
              {
                obj1.publickey=word.substr(last,i-last);
                last =i+1;
                flag++;
              }
            }
            mp[id]=obj1;
            
        }
        }
        
        databasedb.close(); 

if(final!="")
       id=stoi( final.substr(0,final.find('\t')) ) + 1;

}


//Authencity Checking Is Being Processed Here


void database()
{
  system("clear");
 cout<<"|-------------------------------------------------------------|"<<endl;
 cout<<"|------------ Enter Your Private Key For Database ------------|"<<endl;
 cout<<"|-------------------------------------------------------------|"<<endl;
 cout<<"\n\n";
  string key;
  cin>>key;

  if(key!=privatekey)
  {
    cout<<"\n\n";
    cout<<"|        ------------ Unorthorised Access Is Prehebited!!!!! ------------        |"<<endl;
      return;
  }

  for(auto &it:mp)
   {
      cout<<"\nYour Email:- "<< it.second.pemail<<"\nYour Mobile No.:- "<<it.second.pmobile<<"\nYour Password:- "<<it.second.ppasscode<<" ";
    cout<<"\n\n"<<endl;
    getchar();
   }
    getchar();

    system("clear");

    cout<<"\n"<<endl;
    vector<int> ids;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Welcome To The Admin Block ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n"<<endl;
    cout<<"                             1) Remove Key From Database                            "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             2) Detect Key In Database                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             3) Make Copy Of Selected Id                        "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             4) Section-Wise Files                        "<<endl;
    cout<<"\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Choose Any Option ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
   cout<<"                            Enter Your Choice:- ";
   int input;
   cin>>input;
system("clear");
   cout<<"\n\n"<<endl;

    switch(input)
   {
   case 1 :
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Press Y & Give ID-Key To Remove Any Credentials  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    char keypress;
    cin>>keypress;
    if(keypress=='y')
    {
    int idkey;
    cin>>idkey;
    mp.erase(idkey);
    modificationdb();
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ ID-Key Remove Successfully  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    sleep(3);
    cout<<"\n\n"<<endl;
    }
    break;

    case 2 :
   cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Enter ID-Key To Detect  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
  
    int idkey;
    cin>>idkey;
   if(mp.find(idkey)!=mp.end())
   {
    cout<<"\n\n"<<endl;
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ ID-Key Detected Successfully  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    sleep(3);
    cout<<"\n\n"<<endl;
    }
    else{
      cout<<"\n\n"<<endl;
       cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ No Database Found  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    sleep(3);
    cout<<"\n\n"<<endl;
    }
    break;

    case 3 :
    cout<<"\n\n"<<endl;
    
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Enter The ID's (0 For Stop)  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    while(1)
    {
    int c;
    cin>>c;

    if(c==0)
    break;

    ids.push_back(c);
    }
    duplicatedb(ids);
    cout<<"\n\n"<<endl;
    break;

    case 4 :
    cout<<"\n\n"<<endl;
    
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Press 1 For Section-Wise Data Collection   ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
   int input;
   cin>>input;
    if(input==1)
    {
      section();
    }
    cout<<"\n\n"<<endl;
    break;

    default:
    cout<<"\n\n"<<endl;
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Thank You So Much!  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    sleep(3);
    cout<<"\n\n"<<endl;
    break;
}
    
}


// Login Page Is Provide Through Console Of Machine

void loginpage(int id,string publickey)
{
  if(publickey!=mp[id].publickey)
  {
      cout<<"\n\n";
    cout<<"|        ------------ Unorthorised Access Is Prehebited!!!!! ------------        |"<<endl;
      return;
    }

     cout<<"\n\n"<<endl;
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ If You Forgot Your Credentials Press 1  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
  int in;
    cin>>in;
    if(in==1)
    {
         cout<<"\n\n"<<endl;
      cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\nYour Email:- "<<Decryption( mp[id].pemail)<<"\nYour Pass:- "<<Decryption( mp[id].ppasscode)<<"\nYour Mobile:- "<<Decryption( mp[id].pmobile)<<" ";
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    sleep(6);
    }
      system("clear");

       cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Enter The Credentials  ------------        "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;

  detail temp;
  cout<<"\n";
cout<<"                             Enter Your Email:-  "<<endl;

   cin>>temp.pemail;
cout<<"\n\n";
    cout<<"                             Enter Your Mobile No.:-  "<<endl;

   cin>>temp.pmobile;
   cout<<"\n"<<endl;

    cout<<"                             Enter Your Passcode:-  "<<endl;
  
   cin>>temp.ppasscode;
   cout<<"\n"<<endl;
detail original=mp[id];
   if(original.pemail==Decryption(temp.pemail,publickey.substr(0,publickey.size()-1)) && original.pmobile==Decryption(temp.pmobile,publickey.substr(0,publickey.size()-1)) && original.ppasscode==Decryption(temp.ppasscode,publickey.substr(0,publickey.size()-1)))
   {
   cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ You Are SuccessFully Logged In ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;

    modification(id);
   }
   
   else{
      cout<<"\n\n";
    cout<<"|        ------------ Unorthorised Access Is Prehebited!!!!! ------------|"<<endl;
      return;
    }

}


// Registration Page Is Provide Through Console Of Machine

void registration()
{
  label:

  if(counter<0)
  {
     
    cout<<"        ------------ Multiple Wrong Inputs ......... ------------"<<endl;
    cout<<"\n\n";
    cout.flush();
    cout<<"\n";
  cout<<"        ------------ Wait You Are Redirecting To Main Page ......... ------------"<<endl;
     sleep(2);
  return;
  }

  system("clear");

  cout<<"\n";
cout<<"                             Enter Your Email:-  "<<endl;
 string email;
   cin>>email;
   
   cout<<"\n"<<endl;
   if(email[email.size()-4]=='.' || email[email.size()-3]=='.')
   {
      if (email.find("@gmail")== string::npos)
      {
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Not A Valid Email Address ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    counter--;
    cout.flush();
     sleep(2);
    
   goto label;
   }
   }
   else if(email[email.size()-4]!='.' || email[email.size()-3]!='.'){
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Not A Valid Email Address ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    counter--;
     cout<<"\n\n";
    cout.flush();
     sleep(2);
   goto label;
   }
   cout<<"                             Enter Your Mobile No.:-  "<<endl;
 string mobile;
   cin>>mobile;
   cout<<"\n"<<endl;
   if(mobile.size()!=10)
   {
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Not A Valid Mobile Number ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    counter--;
    cout<<"\n\n";
    cout.flush();
  
     sleep(2);
   goto label;
   }
    cout<<"                             Enter Your Passcode:-  "<<endl;
  string passcode;
   cin>>passcode;
   cout<<"\n"<<endl;
  
   if(passcode.size()>=8)
   {
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Not A Valid Passcode ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    counter--;
     cout<<"\n\n";
    cout.flush();
     
     sleep(2);
     
   goto label;
   }
     cout<<"                             Re-Enter Your Passcode:-  "<<endl;
  string rpasscode;
   cin>>rpasscode;
cout<<"\n"<<endl;

   if(rpasscode!=passcode)
   {
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Wrong Password Matching ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    counter--;
   cout<<"\n\n";
    cout.flush();
    
     sleep(2);
   goto label;
   }
   cout<<"\n"<<endl;
    cout<<"                             Preview Your Detail (Press y/Y for Preview):-  "<<endl;
  char preview;
   cin>>preview;
   cout<<"\n"<<endl;
   if(preview=='y'||preview=='Y')
   {
   system("clear");
   cout<<"\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Welcome To The Preview Page ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n"<<endl;
    cout<<"                             1) Email                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             2) Mobile No.                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             3) Passcode                            "<<endl;
    cout<<"\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Choose Any Option ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
   cout<<"                            Enter Your Choice:- ";
   int input;
   cin>>input;
   system("clear");
   cout<<"\n\n"<<endl;
    switch (input)
   {
   case 1 :
    cout<<"                   Yout Email Is Here:-  ";
    cout<<email;
    cout<<"\n\n"<<endl;
    break;

    case 2 :
    cout<<"                   Your Mobile No. Is Here:-  ";
    cout<<mobile;
    cout<<"\n\n"<<endl;
    break;

    case 3 :
      cout<<"                   Your Passcode Is Here:-  ";
      cout<<passcode;
    cout<<"\n\n"<<endl;
    break;

    default:
      cout<<"                   Your All Detail Is Here:-  ";
      cout<<"\n\n"<<endl;
      cout<<"\nYour Email:- "<<email<<"\nYour Pass:- "<<passcode<<"\nYour Mobile:- "<<mobile<<" ";
    cout<<"\n\n"<<endl;
    break;
}
}

  cout<<"                   Your Generated Unique ID:-  "<<id;
  cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Your Registered Detail Is Saved In Our Database With Proper Encrypted Way ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
     string publickey=privatekey.substr(0,privatekey.size()-1)+'-';
    cout<<"\n";
     ofstream databasedb;
    
     databasedb.open("database.txt",ios::app);
     if(databasedb.is_open())
     {
      databasedb<<id<<'\t'<<Encryption(email,privatekey.substr(0,privatekey.size()-1))<<'\t'<<Encryption(mobile,privatekey.substr(0,privatekey.size()-1))<<'\t'<<Encryption(passcode,privatekey.substr(0,privatekey.size()-1))<<'\t'<<publickey<<'\t'<<"\n";
     }
     databasedb.close();

   
    id++;
     sleep(3);
    
      cout<<"\n\n"<<endl;
}


// Serving The Main Login Page Is Provide Through Console Of Machine

void login()
{
  system("clear");
  cout<<"\n"<<endl;
 cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Your Login Page Is Here ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n"<<endl;
system("clear");
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
 cout<<"|------------ Enter Your Id & Public Key For Redirecting To Your Login Page ------------|"<<endl;
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
 cout<<"\n\n";
int id;
cin>>id;
string publickey;
cin>>publickey;
    

    if(mp.find(id)!=mp.end())
    {
      system("clear");
      cout<<"\n\n";
      cout<<"|        ------------ Wait You Are Redirecting ------------|"<<endl;
     
     sleep(3);
      loginpage(id,publickey);
    }

    else{
      cout<<"\n\n";
    cout<<"|        ------------ Unorthorised Access Is Prehebited!!!!! ------------|"<<endl;
      return;
    }
        
}

// Private Key Page Is Provide Through Console Of Machine

void prkey()
{
    system("clear");
    long long int id;
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
 cout<<"|----------- Enter Your Authentication Code For Our Systems Private Key -----------|"<<endl;
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
 cout<<"\n";
 cin>>id;
 cout<<"\n\n";

if(id==authentication)
{
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
 cout<<"|        ------------ Our System's Private Key Is:- "<<privatekey<<endl;
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
cout<<"\n\n";
}
else{
      cout<<"\n\n";
    cout<<"|------------ !!!!! Not A Valid Authentication Code !!!!! ------------|"<<endl;
      return;
    }
getchar();
sleep(3);
 keyuprade();
 sleep(3);
}

// Public Key Page Is Provide Through Console Of Machine

void pkey()
{
    system("clear");
    int id;
    string emailid;
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
 cout<<"|        ------------ Enter Your Id  & Email For Your Public Key ------------|"<<endl;
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
  cout<<"\n";
  cin>>id;
  cin>>emailid;
 cout<<"\n\n";
 if(mp.find(id)!=mp.end() && mp[id].pemail==Decryption(emailid,privatekey.substr(0,privatekey.size()-1)) )
{
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
 cout<<"|        ------------ Your Public Key Is:- "<<mp[id].publickey<<endl;
 cout<<"|----------------------------------------------------------------------------------|"<<endl;
}
 else{
      cout<<"\n\n";
    cout<<"|        ------------ !!!!! Not A Valid ID !!!!! ------------|"<<endl;
      return;
    }
    getchar();
sleep(2);
}


//Main Function Is Running Here....

int main()
{
  label:
  system("clear");
  opendatabase();
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Welcome To The Encrypted Security System ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n";
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n"<<endl;
    cout<<"                             1) Registration                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             2) Login                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             3) Private-Key                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             4) Public-Key                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             5) Admin-Block                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Choose Any Option ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
   cout<<"                            Enter Your Choice:- ";
   int input;
   cin>>input;
   cout<<"\n\n"<<endl;

   switch (input)
   {
   case 1 :
    cout<<"        ------------ Yout Registeration Page Is Here ------------"<<endl;
    cout<<"\n\n"<<endl;
    registration();
    break;
    case 2 :
    cout<<"        ------------ Your Login Page Is Here ------------"<<endl;
    cout<<"\n\n"<<endl;
    login();
    break;
    case 3 :
    cout<<"        ------------ Know About Your Private-Key ------------"<<endl;
    cout<<"\n\n"<<endl;
    prkey();
    break;
    case 4 :
    cout<<"        ------------ Know About Your Public-Key ------------"<<endl;
    cout<<"\n\n"<<endl;
    pkey();
    break;
    case 5 :
    cout<<"        ------------ All Database Is Here ------------"<<endl;
    cout<<"\n\n"<<endl;
    database();
    break;
   
   default:
    cout<<"        ------------ Your Registration Page Is Here ------------"<<endl;
    cout<<"\n\n"<<endl;
    registration();
    break;
   }
 cout<<"\n\n";
  cout<<"        ------------ Wait System Is Loading......... ------------"<<endl;
     cout.flush(); 
     sleep(3);
cout<<"\n\n"<<endl;
system("clear");
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Do You Want To Use Other Services ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n"<<endl;
    cout<<"                             1) Type Yes/yes For Other Services                             "<<endl;
    cout<<"\n"<<endl;
    cout<<"                             2) Type No/no For Exit                           "<<endl;
    cout<<"\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
     cout<<"\n\n"<<endl;
     cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Choose Any Option ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
   cout<<"                            Enter Your Choice:-  ";
    string new1;
    cin>>new1;
system("clear");
    if(new1=="yes" || new1=="Yes" )
    goto label;

else{
cout<<"\n\n"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"        ------------ Thanks You So Much For Using Our Service ------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n"<<endl;
}
// modificationdb();
    return 0;
}