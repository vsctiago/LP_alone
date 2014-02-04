/* 
 * File:   Menu.h
 * Author: Psycku
 *
 * Created on 3 de Fevereiro de 2014, 15:48
 */

#ifndef MENU_H
#define	MENU_H

#include "Utils.h"

#define MSG_OPTION "Option: "
#define MSG_MENU "---MAIN MENU--- %c"
#define MSG_MENU_CLIENT "1. Client menu. %c"
#define MSG_MENU_VEHICLE "2. Vehicle menu. %c"
#define MSG_MENU_RENT "3. Rent menu. %c"
#define MSG_MENU_DELIVERY "4. Delivery menu. %c"
#define MSG_MENU_EXIT "5. Exit. %c"
#define MSG_CLIENT_MENU "--CLIENT MENU-- %c"
#define MSG_CLIENT_MENU_ADD "1. Add Client. %c"
#define MSG_CLIENT_MENU_MODIFY "2. Modify Client. %c"
#define MSG_CLIENT_MENU_REMOVE "3. Remove Client. %c"
#define MSG_CLIENT_MENU_LIST "4. List Clients. %c"
#define MSG_CLIENT_MODIFY_MENU "-Client Modify Menu. %c"
#define MSG_CLIENT_MODIFY_NAME "1. Modify name. %c"
#define MSG_CLIENT_MODIFY_ADDRESS "2. Modify Address. %c"
#define MSG_CLIENT_MODIFY_PHONE "3. Modify phone. %c"
#define MSG_CLIENT_MODIFY_BIRTHDAY "4. Modify birthday. %c"
#define MSG_CLIENT_MODIFY_SIGNUPDATE "5. Modify signup date. %c"
#define MSG_CLIENT_MODIFY_ADDRESS_MENU "-Modify Address. %c"
#define MSG_CLIENT_MODIFY_STREET "1. Modify street. %c"
#define MSG_CLIENT_MODIFY_NUMBER "2. Modify number. %c"
#define MSG_CLIENT_MODIFY_POSTALCODE "3. Modify postalcode. %c"
#define MSG_CLIENT_MODIFY_CITY "4. Modify city. %c"
#define MSG_MENU_ERROR "Option invalid. %c"
#define MSG_ID_DOESNT_EXIST_ERROR "ID doesn't exist. %c"
#define MSG_VEHICLE_MENU "--VEHICLE MENU-- %c"
#define MSG_VEHICLE_MENU_ADD "1. Add Vehicle. %c"
#define MSG_VEHICLE_MENU_MODIFY "2. Modify Vehicle. %c"
#define MSG_VEHICLE_MENU_REMOVE "3. Remove Vehicle. %c"
#define MSG_VEHICLE_MENU_LIST "4. List Vehicle. %c"
#define MSG_VEHICLE_MODIFY_MENU "-Vehicle Modify Menu. %c"
#define MSG_VEHICLE_MODIFY_REGISTRATION "1. Modify registration. %c"
#define MSG_VEHICLE_MODIFY_VEHICLENAME "2. Modify vehicle brand and model. %c"
#define MSG_VEHICLE_MODIFY_CARTYPE "3. Modify car type. %c"
#define MSG_VEHICLE_MODIFY_VEHICLECHARS "4. Modify vehicle characteristics. %c"
#define MSG_VEHICLE_MODIFY_CURRENTSTATE "5. Modify current state. %c"
#define MSG_VEHICLE_MODIFY_VEHICLECHARS_MENU "-Modify vehicle characteristics. %c"
#define MSG_VEHICLE_MODIFY_DISPLACEMENT "1. Modify engine displacement. %c"
#define MSG_VEHICLE_MODIFY_HP "2. Modify HorsePower. %c"
#define MSG_VEHICLE_MODIFY_FUEL "3. Modify fuel type. %c"
#define MSG_VEHICLE_MODIFY_SEATS "4. Modify seats. %c"


void Menu();

void ClientMenu();

void ModifyMenu();

void AddressModifyMenu();

void VehicleMenu();

void VehicleModifyMenu();

void VehicleCharsModifyMenu();


#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* MENU_H */

