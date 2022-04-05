//
// Created by sarel on 05/04/2022.
//

#ifndef HW1_COVID_SARSCOV2_H
#define HW1_COVID_SARSCOV2_H


class SarsCov2 {
public:
    void update_probability(string target) = 0;
    void idividual_update() = 0;
    void group_update() = 0;

};


#endif //HW1_COVID_SARSCOV2_H
