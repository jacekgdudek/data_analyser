
#include <iostream>
#include <string>
#include <sstream>

/*
    AnalyticsIndicator 
        Keeps track of the analysed data during the processing.
        Current state can be accessed through get function.
        New number should be entered using next().
 */
class AnalyticsIndicator {
public:

    /*
        AnalyticsIndicator 
            Initializes the metrics
        params:
        returns:
     */
    AnalyticsIndicator(){
        this->count = 0;
        this->sum = 0;
        this->average = 0;
    };
    /*
        next 
            Updates the running values of metrics based on the new input
        params:
            input  - double - number used for analytics
        returns:
            void

     */
    void next(double input);
    /*
        get 
            Acquires comma-seperated line of metrics
        params:
        returns:
            std::string - Comma-seperated line of metrics

     */
    std::string get();

private:
    /*
        count
            Identifier of the metric as a count from the beginning of analytics process
     */
    double count;
    /*
        sum
            Sum of all the input numbers so far
     */
    double sum;
    /*
        average
            Average of all the input numbers so far
     */
    double average;
};