#include "Arduino.h"
#include "gs.h"
#include "gs_gv.h"
#include "gs_parse.h"
#include "gs_send.h"
#include "gs_mapping.h"


void parse_cmd()
{

}


void send_error(uint8_t error_type)
{
    Serial.print("ER:");

    switch(error_type){
        case TIMEOUT:
            Serial.print("TO");
            break;
        
        case BADCHAR:
            Serial.print("BC");
            break;

        case BADVAL:
            Serial.print("IV");
            break;
    }

    Serial.println();
    Serial.flush();
}