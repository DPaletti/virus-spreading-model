#ifndef VIRUS_SPREADING_MODEL_INPUTPARSER_H
#define VIRUS_SPREADING_MODEL_INPUTPARSER_H
#include <string>
#include "rapidjson/document.h"
#include <list>

/**
 * Used to parse the config file containing the inputs. Leverages the rapidJson library.
 */
class InputParser {
public:
    InputParser(const std::string& file_path);
    int getIndividualsNumber();
    int getInfectedNumber();
    std::pair<float, float> getWorldSize();
    std::list<std::pair<float, float>> getCountries();
    float getVelocity();
    float getMaximumSpreadingDistance();
    float getTimeStep();
    int getDays();
private:
    rapidjson::Document document;



};


#endif //VIRUS_SPREADING_MODEL_INPUTPARSER_H
