#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "HTML.h"
#include "SSID.h"
#include "ledmatrix.h"

ESP8266WebServer server(80); //server init, port 80

void serial_print_matrix(){
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            if(matrix[row][column] == 1){
                Serial.print("X");                
            }else{
                Serial.print(" ");
            }
        }
        Serial.println("");
    }
}

void handleRoot(){
    server.send ( 200, "text/html", INDEX_HTML);
}

void handleNotFound() {
    //redirect to root "/"
    server.sendHeader("Location", String("/"), true);
    server.send ( 302, "text/plain", "");
    //server.send ( 404, "text/plain", "ERROR 404: Tas re perdido wacho" );
}

void handleMatrix(){
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            String aux= String(row) + "-" + String(column);
            matrix[row][column] = server.arg(aux)=="1"?1:0;
        }
    }
    serial_print_matrix();   
    //redirect to root "/"
    server.sendHeader("Location", String("/"), true);
    server.send ( 302, "text/plain", "");
}
void handleArgs(){
    String phrase = server.arg("chars");
    Serial.print("Caracteres pasados: ");
    Serial.println(phrase);
    char aux[4];
    phrase.toCharArray(aux, 4);
    //ledmatrix_set_str(aux);
    serial_print_matrix(); 
    //redirect to root "/"
    server.sendHeader("Location", String("/"), true);
    server.send ( 302, "text/plain", "");
}

void setup() {
    Serial.begin(115200);

    Serial.print("Connecting to ");
    Serial.println(SSID);
    WiFi.begin(SSID, PASSWORD);

    while (WiFi.status() != WL_CONNECTED) {
        delay(200);
        Serial.print(".");
    }
    Serial.println("\nConnected!");

    // Usually 192.168.0.26
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());

    //roots
    server.on("/",handleRoot);
    server.on("/chars",handleArgs);
    server.on("/matrix",handleMatrix);
    server.onNotFound(handleNotFound);
    server.begin(); //start webserver
}
 
 void loop (){
    server.handleClient();
}