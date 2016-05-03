//Miguel Darío Magaña Heredia
//Alejandro Hernández Cortes
//Saúl Fabián Torres González
                                      //Programming solutions Project
#include <iostream>
#include <string>
#include <fstream>
using std:: endl;
using std:: cout;
using std:: cin;
using std::string;
using std::ifstream;
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"  /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


int main (){
  string line, sample;
  string des, conv;
  int banda1, banda2, banda3, banda4;
  long double val_resistencia;
  long double  b3, b4, tolerancia;
  cout<< BLUE <<" \n Proyecto Final: Solución de Problemas de Programación"<< RESET <<endl;
  cout << RED <<"Miguel Darío Magaña"<<endl;
  cout <<"Alejandro Hernández Cortes"<<endl;
  cout <<"Saúl Fabián Torres Gonzáles\n\n\n"<< RESET<<endl;
  cout << WHITE << "Bienvenido al programa\n\n"  << endl;
  cout<<"       Este programa permite calcular el valor de una resistencia"<<endl;
  cout<<"       Mediante los colores que teclees<<\n"<<endl;
  cout<<"       Para ver los colores es necesario que escribas el nombre del archivo"<< RESET <<endl;
  std::cout << RED <<"                         (colores.txt)" << RESET <<endl;
  cin>>sample;
  ifstream myfile (sample.c_str());
  if (myfile.is_open())
  {
  while (getline (myfile,line))
  {
    cout<< CYAN <<line<<RESET<<'\n';
  }
  myfile.close();
  cout << WHITE << "Introduce el valor de la primer banda" << RESET <<endl;
  cin >> banda1;
  cout << WHITE << "Introduce el valor de la segunda banda" << RESET <<endl;
  cin >> banda2;
  cout << WHITE << "Introduce el valor de la tercer banda(Multiplicador)" << RESET << endl;
  cin >> banda3;
  cout << WHITE << "Introduce el valor de la cuarta banda(Tolerancia)" << RESET << endl;
  cin >> banda4;
  switch (banda1) {
    case 1:
    banda1=0;
    break;
    case 2:
    banda1=10;
    break;
    case 3:
    banda1=20;
    break;
    case 4:
    banda1=30;
    break;
    case 5:
    banda1=40;
    break;
    case 6:
    banda1=50;
    break;
    case 7:
    banda1=60;
    break;
    case 8:
    banda1=70;
    break;
    case 9:
    banda1=80;
    break;
    case 10:
    banda1=90;
    break;
  }
  switch (banda2) {
    case 1:
    banda2=0;
    break;
    case 2:
    banda2=1;
    break;
    case 3:
    banda2=2;
    break;
    case 4:
    banda2=3;
    break;
    case 5:
    banda2=4;
    break;
    case 6:
    banda2=5;
    break;
    case 7:
    banda2=6;
    break;
    case 8:
    banda2=7;
    break;
    case 9:
    banda2=8;
    break;
    case 10:
    banda2=9;
    break;
  }
  switch (banda3) {
    case 1: //negro
    b3=1;
    break;
    case 2: //marron
    b3=10;
    break;
    case 3: //rojo
    b3=100;
    break;
    case 4: //naranja
    b3=1000;
    break;
    case 5: //amarillo
    b3=10000;
    break;
    case 6: //verde
    b3=100000;
    break;
    case 7: //azul
    b3=1000000;
    break;
    case 8: //violeta
    b3=10000000;
    break;
    case 9: //gris
    b3=100000000;
    break;
    case 10: //blanco
    b3=1000000000;
    break;
    case 11: //oro
    b3=0.1; //Convertir a int *
    break;
    case 12: //plata
    b3=0.01; //Convertir a int *
    break;
  }
  switch (banda4) {
    case 1:
    b4=0.05;
    break;
    case 2:
    b4=.1;
    break;
    case 3:
    b4=.01;
    break;
    case 4:
    b4=.02;
    break;
    case 5:
    b4=0.005;
    break;
    case 6:
    b4=0.0025;
    break;
    case 7:
    b4=0.001;
    break;
    case 8:
    b4=0.0005;
    break;
  }
  val_resistencia = (banda1+banda2)*b3;
  tolerancia = val_resistencia*b4;
  cout<< YELLOW << "El valor de la resistencia es: "<<val_resistencia<<" "<<"Ohms"<< RESET <<endl;
  cout << BLUE << "El valor de la tolerancia es: "<<tolerancia<<" "<<"Ohms"<< RESET <<endl;
  cout << WHITE << "¿Quieres convertir las unidades a kOhms o MOhms? ¿si o no?"<< RESET <<endl;
  cin >> des;
  if(des=="si")
  {
    cout << WHITE <<"A kOhms(tecléa k) o MOhms(teclea m)?"<< RESET <<endl;
    cin >> conv;
    if(conv=="k")
    {
      val_resistencia= (val_resistencia/1000);
    cout << YELLOW << "El nuevo valor de la resistencia es de"<<" "<<val_resistencia<<" "<<"kOhms"<< RESET <<endl;
    tolerancia = val_resistencia*b4;
    cout << BLUE << "El nuevo valor de la tolerancia es: "<<tolerancia<<" "<<"kOhms"<< RESET <<endl;

  }
      else
      {
        val_resistencia= (val_resistencia/1000000);
      cout << YELLOW << "El nuevo valor de la resistencia es de"<<" "<<val_resistencia<<" "<<"MOhms"<< RESET <<endl;
      tolerancia = val_resistencia*b4;
      cout << BLUE << "El nuevo valor de la tolerancia es: "<<tolerancia<<" "<<"MOhms"<< RESET <<endl;

    }
  }
        else
        {
          cout<< WHITE <<"Perfecto, no hay problema"<< RESET <<endl;
        }
  }
  else
  {
  cout<<WHITE <<"Verifica que si hayas escrito correctamente el nombre, vuélvelo a intentar"<< RESET <<endl;
}
return 0;
}
