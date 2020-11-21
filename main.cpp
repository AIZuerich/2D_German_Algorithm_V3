#include <iostream>
#include <map>
#include <string>


std::string matrix1[5][5];
std::string yes = "yes";
std::string no = "no";
std::string inp;

int counter = 0;

int main() {

  
  std::map<int, std::string> matrix2;

  
  matrix2.insert(std::pair<int, std::string> (0,"Start\n"));
  matrix2.insert(std::pair<int, std::string> (1,"Are you using a prepostion?\n"));
  matrix2.insert(std::pair<int, std::string> (2,"Is it the SUBJECT of the sentence?\nExample:The MAN buys a dog?\n"));
  matrix2.insert(std::pair<int, std::string> (3,"Is it after 'sein' (the verb to be)?\nE.g.: The dog is a PUPPY.\n")); 
  matrix2.insert(std::pair<int, std::string> (4,"Is it the INDIRECT OBJECT?\nAre you translating the idea of 'to' or 'for'\n"));
  matrix2.insert(std::pair<int, std::string> (5,"Is it the DIRECT OBJECT?\nE.g.: The man buys a Dog\n"));
  matrix2.insert(std::pair<int, std::string> (6,"Are you showing possession??\nE.g.: That is my MOTHER'S room.\n")); 
  
  matrix2.insert(std::pair<int, std::string> (-1,"NOMINATIVE:\n\nm. [der/ein]\nf. [die/eine]\nnt. [des/ein]\npl. [dir/meine]\n"));
  matrix2.insert(std::pair<int, std::string> (-2,"NOMINATIVE:\n\nm. [der/ein]\nf. [die/eine]\nnt. [des/ein]\npl. [dir/meine]\n"));
  matrix2.insert(std::pair<int, std::string> (-3,"DATIVE:\n\nm. [dem/einem]\nf. [der/einer]\nnt. [dem/einem]\npl. [den/meinen]\n")); 
  matrix2.insert(std::pair<int, std::string> (-4,"DATIVE:\n\nm. [dem/einem]\nf. [der/einer]\nnt. [dem/einem]\npl. [den/meinen]\n"));
  matrix2.insert(std::pair<int, std::string> (-5,"ACCUSATIVE:\n\nm. [den/einen]\nf. [die/eine]\nnt. [das/ein]\npl. [die/meine]\n"));
  matrix2.insert(std::pair<int, std::string> (-6,"GENITIVE:\n\nm. [des/eines]\nf. [der/einer]\nnt. [des/eines]\npl. [der/meiner]\n"));


  matrix2.insert(std::pair<int, std::string> (7,"Are you using 'aus, bei, mit, nach, seit, von, zu or gegenüber'?\n"));
  matrix2.insert(std::pair<int, std::string> (8,"Are you using \n'an, auf, hinter , in, neben, über, vor or zwischen?\n"));
  matrix2.insert(std::pair<int, std::string> (9,"Are you using 'bis, durch, für, gegen, wider, ohne, um or entlang'?\n")); 
  matrix2.insert(std::pair<int, std::string> (10,"Are you using 'trotz, während, wegen or innerhalb'?\n"));
  
  matrix2.insert(std::pair<int, std::string> (-7,"DATIVE:\n\nm. [dem/einem]\nf. [der/einer]\nnt. [dem/einem]\npl. [den/meinen]\n"));
  matrix2.insert(std::pair<int, std::string> (-8,"Is movement from A to B indicated?\n"));
  matrix2.insert(std::pair<int, std::string> (-9,"IF yes: ACCUSATIVE:\n\nm. [den/einen]\nf. [die/eine]\nnt. [das/ein]\npl. [die/meine]\n\nIF NO:DATIVE:\n\nm. [dem/einem]\nf. [der/einer]\nnt. [dem/einem]\npl. [den/meinen]\n"));
  matrix2.insert(std::pair<int, std::string> (-10,"ACCUSATIVE:\n\nm. [den/einen]\nf. [die/eine]\nnt. [das/ein]\npl. [die/meine]\n"));
  matrix2.insert(std::pair<int, std::string> (-11,"GENITIVE:\n\nm. [des/eines]\nf. [der/einer]\nnt. [des/eines]\npl. [der/meiner]\n"));


  for(int i=1; i<10;i++){

      if(counter==0){
      std::cout<<matrix2[i];
      counter++;
      }

      std::cin >> inp;
      
      if(inp==yes&&i==1){
        counter = 7;
      }
      
      if(counter<7){
      if(i==6&&inp==no){
          std::cout<<matrix2[-6];
        }
      if(inp==no){
        std::cout<<matrix2[i+1];
      }else{
        if(inp==yes){
            std::cout<<matrix2[-i];
          }
          std::cout<<i;
        }
      }else{
        if(counter==7){
        std::cout<<matrix2[counter];
        counter = counter+1;
        }else{
      if(inp==no){
        std::cout<<matrix2[counter];
        counter = counter+1;
      }else{
        if(inp==yes){
            std::cout<<matrix2[-counter];
            counter = counter+1;
          }
          }
      if(counter==11){
           std::cout<<matrix2[-11];
        }
        }
        std::cout<<counter;
      }

        
      




      
      
    
    
    
  
    
    
    
    
  





}

return 0;}


