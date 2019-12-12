#ifndef _FANCY_FNCTS
#define _FANCY_FNCTS

#include <Rcpp.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int fancy_increment(int i){
  srand (time(NULL));
  return i + (rand() % 10 + 1); // increment by a random number between 1 and 10
}

void fancy_increment_container(Rcpp::NumericVector more_i){
  srand (time(NULL));
  for(auto &i : more_i)
    i += (rand() % 10 + 1);
}

class FancyObject{
  private:
    int min, max;
  
  public:
    FancyObject():min(1),max(10)
    {
      srand(time(NULL));
    }
    FancyObject(int min, int max):min(min), max(max)
    {  
      srand(time(NULL));
    }
    int random_increment(int nr)
    {
      return nr + (rand() % max + min);
    }
    
    int get_min(){return min;}
    void set_min(int new_min){min=new_min;}
    
    int get_max(){return max;}
    void set_max(int new_max){max=new_max;}
  
};

#endif
