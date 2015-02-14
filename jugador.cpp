using namespace std;

/** @brief Declaracion da la clase jugador
 *
 * Crea el jugador, la cual albergara un entero entre 1 y 100
 */
class Jugador{
    string nombre;                                  //Nombre del jugador
    unsigned short int vida;                        //valor de la vida
    unsigned short int combustible;                 //valor del combustible
    short int velocidad;                            //valor de la velocidad

    public:
        Jugador(string);                            //Constructor
        ~Jugador();                                 //Destructor
        void modificarVida(int&);                   //Modifica la vida con una referencia
        unsigned short int obtenerVida();           //Retorna la vida
        bool revisarVida();                         //Revisa que la vida sea mayor a 0
        void modificarCombustible(int&);            //Modifica el combustible con una referencia
        unsigned short int obtenerCombustible();    //Retorna el combustible
        bool revisarCombustible();                  //Revisa que el combustible sea mayor a 0
        string obtenerNombre();                     //Retorna el nombre del jugador
};

/** @brief Construye al jugador
 *
 * @param string &n, el nombre del jugador
 */
Jugador::Jugador(string n){
    nombre=n;           //Toma el nombre del parametro
    vida=100;           //Inicia con la vida completa
    combustible=100;    //Inicia con el combustible completo
    velocidad=100;      //Valor de la velocidad
};

/** @brief Destruye
 *
 */
Jugador::~Jugador(){};

/** @brief Modifica el valor de la vida segun una referencia
 *
 * @param unsigned short int&
 */
void Jugador::modificarVida(int &a){
    vida+=a;                                    //Cambia el valor
    if(vida>100){                               //Revisa que no se pase del maximo
        vida=100;                               //Si se pasa asigna el valor maximo
    }else if(vida<=0){                          //Revisa que no este muerto
        cout<< nombre << " ha muerto" <<endl;
    };
};

/** @brief Devuelve el valor de la vida
 *
 * @return unsigned short int
 */
unsigned short int Jugador::obtenerVida(){
    return vida;        //Devuelve la vida
 };

/** @brief Revisa que el jugador siga con vida
 *
 * @return bool
 */
bool Jugador::revisarVida(){
    return vida>0;      //Devuelve true si y solo si el jugador sigue vivo
 };

/** @brief Modifica el valor del combustible segun una referencia
 *
 * @param unsigned short int&
 */
void Jugador::modificarCombustible(int &a){
    combustible+=a;                 //Aumenta combustible
    if(combustible>100){            //Revisa que no se pase del maximo
        combustible=100;            //Si se pasa asigna el maximo
    }else if(combustible<=0){       //Revisa que tenga combustible
        cout<< nombre << " no tiene combustible" <<endl;
    };
};

/** @brief Devuelve el valor del combustible
 *
 * @return unsigned short int
 */
unsigned short int Jugador::obtenerCombustible(){
    return combustible;         //Devuelve el combustible
 };

/** @brief Revisa que el jugador siga con combustible
 *
 * @return bool
 */
bool Jugador::revisarCombustible(){
    return combustible>0;       //Devuelve true si tiene combustible
 };

/** @brief Retorna el nombre del jugador
 *
 * @return string
 */
string Jugador::obtenerNombre(){
    return nombre;              //Devuelve el nombre
 };
