#include <iostream>
#include <string>
using namespace std;
   
 class binary{
    
    string s;
  
    private:
       
       void chk_bin(void); 
    
    public:
       void read(void);
       void one_compliment(void);
       void display(void);
  
  };

  
    void binary :: read(void) 
   {
    cout<<"Enter a binary number. "<<endl;
    cin>>s;

   };

   void binary :: chk_bin(void)
 
{
     for (int i = 0; i < s.length(); i++)
   {
        if (s.at(i)!='0' && s.at(i)!='1')
     { 
      cout<<"Incorrect binary number! "<<endl;
      exit(0);
     }

   }
}
   void binary :: one_compliment(void)
  {
   chk_bin();
   for (int i = 0; i < s.length(); i++)
   {
    if (s.at(i) == '0')
    {
        s.at(i) = '1';
    }
    else{
       s.at(i) = '0'; 
    } 
   }
  }
  
  void binary :: display(void)
  
  {
    cout<<"Displaying your binary number"<<endl;
    for(int i=0; i<s.length(); i++)
    {
      cout<<s.at(i);
    }
     cout<<endl;


  }

 int main(){
  
   binary n;
   n.read();
   n.display();
   n.one_compliment();
   n.display();
   
    return 0;
}