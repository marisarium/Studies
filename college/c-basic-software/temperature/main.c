#include <stdio.h>
//temperature sensor loop
int main(){
    float temperature = 0;
    float set_temperature = 70;
    int fire = 100;
    int alarm = 0;
    while (1)
    {
        if(temperature>set_temperature)
        {
            fire = 10;
            alarm = 1;
        }
        else
        {
            fire = 100;
            alarm = 0;
        }
    }
    return 0;
}

/*other example of loop in nature: water cycles ->
while(sun){
    evaporation();
    condensation();
    precipitation();
}*/