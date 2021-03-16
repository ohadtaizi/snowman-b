#include <iostream>
#include <string>
#include "snowman.hpp"
using namespace std;

string ariel::snowman(long snow){

    string codesnow= std::to_string(snow);
    string snowman;
	long const max = 44444444;
	long const min = 11111111;
	long const hat = 0;
	long const nose = 1;
	long const leftEye = 2;
	long const righteye = 3;
	long const leftarm = 4;
	long const rightarm = 5;
	long const torso  = 6;
	long const base = 7;
	

   


  
      if(snow>max || snow< min) {
    	throw std::range_error("error \n");
    }

    
    switch(codesnow[hat]){

    	case '1':
    	    snowman+="       \n _===_ \n";
    	    break;
    	case '2':
    	    snowman+="  ___  \n ..... \n";
    	    break;
         case '3':
    	    snowman+="   _   \n  /_\\  \n";
    	    break;
    	 case '4':
    	     snowman+="  ___  \n (_*_) \n";
    	     break;
    	 default:
    	     throw std:: invalid_argument( " error");
    }

    
    switch(codesnow[leftarm]){
    	case '2':
    	    snowman+="\\";
    	    break;
    	 case '1':
         case '3':
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }

    snowman += "(";


    switch(codesnow[leftEye]){

    	case '1':
    	    snowman+=".";
    	    break;
    	case '2':
    	    snowman+="o";
    	    break;
         case '3':
    	    snowman+="O";
    	    break;
    	 case '4':
    	     snowman+="-";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }


    switch(codesnow[nose]){

    	case '1':
    	    snowman+=",";
    	    break;
    	case '2':
    	    snowman+=".";
    	    break;
         case '3':
    	    snowman+="_";
    	    break;
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }

    switch(codesnow[righteye]){

    	case '1':
    	    snowman+=".";
    	    break;
    	case '2':
    	    snowman+="o";
    	    break;
         case '3':
    	    snowman+="O";
    	    break;
    	 case '4':
    	     snowman+="-";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }
    snowman += ")";

   
    switch(codesnow[rightarm]){
    	case '2':
    	    snowman+="/";
    	    break;
    	case '1':
        case '3':
    	case '4':
        
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }

    snowman += "\n";


    switch(codesnow[leftarm]){

    	case '1':
    	    snowman+="<";
    	    break;
    	case '2':
    	    snowman+=" ";
    	    break;
         case '3':
    	    snowman+="/";
    	    break;
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }

    snowman += "(";


    switch(codesnow[torso]){

    	case '1':
    	    snowman+=" : ";
    	    break;
    	case '2':
    	    snowman+="] [";
    	    break;
         case '3':
    	    snowman+="> <";
    	    break;
    	 case '4':
    	     snowman+="   ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }

    snowman += ")";
    

    switch(codesnow[rightarm]){

    	case '1':
    	    snowman+=">";
    	    break;
    	case '2':
    	    snowman+=" ";
    	    break;
         case '3':
    	    snowman+="\\";
    	    break;
    	 case '4':
    	     snowman+=" ";
    	     break;
    	  default:
    	     throw std:: invalid_argument( " error");
    }


    
    snowman += "\n (";


     switch(codesnow[base]){

    	case '1':
    	    snowman+=" : ";
    	    break;
    	case '2':
    	    snowman+="\" \"";
    	    break;
         case '3':
    	    snowman+="___";
    	    break;
    	 case '4':
    	     snowman+="   ";
    	     break;
    	  default:
    	     throw std:: invalid_argument(" error");
    }
     snowman += ") ";

    return snowman;
}