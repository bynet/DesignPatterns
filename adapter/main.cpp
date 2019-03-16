#include <memory>
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <sstream>
#include <ostream>

class String{

    std::string s;
public:
    String( const std::string& s ):s( s ) {

    } 
    
    String to_lower_copy() const {
        return { boost::to_lower_copy(s)} ; 
    }

    std::vector<String> split( std::string delim=" ") {
        std::vector<std::string> parts;

        boost::split( parts , s , boost::is_any_of( delim ) , boost::token_compress_on );

        return std::vector<String>( parts.begin() , parts.end());
        
    }

    size_t length() {
        return s.length();
    }

    friend std::ostream& operator<<(std::ostream& os , const String& p ){
        os << p.s ;
        return os;
    }
};

int main( int argc , char* argv[] ) {

    String s{"I Am A Big String"};

    std::cout << s << std::endl ;
    std::cout << s.to_lower_copy() << std::endl ;
    
    for(auto& w : s.split() ) {
        std::cout << w << " "<<  w.length() << std::endl ;
    }
    
    
  
}
