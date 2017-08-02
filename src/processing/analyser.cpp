
#include "analyser.hpp"
using namespace std;

int analyse(const char * input, const char * output){

    string   line;
    ofstream writer;

    ifstream reader( input );
    writer.open( output );

    if (!reader.is_open()) {
        cerr << "Unable to open file\n";
        writer.close();
        return -1;
    } else {
        AnalyticsIndicator* ai = new AnalyticsIndicator();
        while ( getline (reader, line) ) {

            double number;
            try {
                number = stod(line);
            } catch (const std::invalid_argument&) {
                cerr << "Input file contains invalid data\n";
                reader.close();
                writer.close();
                return -1;
            }
            ai->next(number);
            writer << ai->get();
        }
    }
    reader.close();
    writer.close();
    return 0;
}