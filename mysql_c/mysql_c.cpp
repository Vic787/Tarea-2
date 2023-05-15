// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <mysql.h>
#include <iostream>

using namespace std;

int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "20021104Vic", "db_empresa", 3306, NULL, 0);
    if (conectar) {
        cout << "Conexion exitosa..." << endl;
    }
    else {
        cout << "Error en la conexion..." << endl;
    }
    system("Pause");
    return 0;
}

