#include <memory>
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <sstream>

class String{

    std::string s;
    public:
    String( const std::string& s ):s( s ) {

    } 
    
    String to_lower_copy() const {
        return { boost::to_lower_copy(s)} ; 
    }

    vector<String> split( std::string delim=" ") {
        std::vector<std::string> parts;

        boost::split( parts , s , boost::is_any_of( delim ) , boost::token_compress_on );

        return std::vector<String>( parts.begin() , parts.end());
        
    }

    size_t length() {
        return s.length();
    }

};

int main( int argc , char* argv[] ) {

    String s{"Benim Adim Kamil"};

    
    
  
}
