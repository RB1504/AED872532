using namespace std;

/** @brief Clase municion, madre de las balas
 *
 * Servira de base para las subclases
 */
class Municion{
    unsigned short int perjuicio;                                   //Dano causado si se es impactado
    int retraso;                                                    //Tiempo entre disparos
    public:
        Municion();                                                 //Constructor
        Municion(unsigned short int&, int);                         //Constructor
        ~Municion();                                                //Destructor
        unsigned short int obtenerPerjuicio();                      //Devuelve el dano que genera
        unsigned short int obtenerRetraso();                        //Devuelve el retraso entre disparos
};

/** @brief Constructor sin parametros
 *
 */
Municion::Municion(){};

/** @brief Constructor
 *
 * @param unsigned short int &p, es el perjuicio generado al impactar
 */
Municion::Municion(unsigned short int &p, int r){
    perjuicio=p;            //Asigna el perjuicio generado
    retraso=r;              //Asigna el retraso
};

/** @brief Destructor
 *
 */
Municion::~Municion(){};

/** @brief Retorna el perjuicio generado
 *
 * @return unsigned short int
 */
unsigned short int Municion::obtenerPerjuicio(){
    return perjuicio;       //Devuelve el perjuicio
};

/** @brief Retorna el retraso
 *
 * @return unsigned short int
 */
unsigned short int Municion::obtenerRetraso(){
    return retraso;       //Devuelve el retraso
};





/******************************************************************/
/******************************************************************/
/** @brief Municion Basica
 *
 * Dispara en linea recta con tiempo entre tiros
 */
class MunicionBasica: public Municion{
    public:
        MunicionBasica(unsigned short int&);    //Constructor
        ~MunicionBasica();                      //Destructor
};

/** @brief Constructor
 *
 * @param unsigned short int &p, es el perjuicio generado al impactar
 */
MunicionBasica::MunicionBasica(unsigned short int &p){
    Municion(p,5);                  //Llama al constructor de la superclase
};

/** @brief Destructor
 *
 */
MunicionBasica::~MunicionBasica(){};





/******************************************************************/
/******************************************************************/
/** @brief Municion Pro
 *
 * Dispara en linea recta con tiros seguidos
 */
class MunicionPro: public Municion{
    public:
        MunicionPro(unsigned short int&);                   //Constructor
        ~MunicionPro();                                     //Destructor
};

/** @brief Constructor
 *
 * @param unsigned short int &p, es el perjuicio generado al impactar
 */
MunicionPro::MunicionPro(unsigned short int &p){
    Municion(p,0);                  //Llama al constructor de la superclase
};

/** @brief Destructor
 *
 */
MunicionPro::~MunicionPro(){};





/******************************************************************/
/******************************************************************/
/** @brief Municion de Difusion
 *
 * Dispara 5 veces a 36 grados de la nave
 */
class MunicionDifusion: public Municion{
    public:
        MunicionDifusion(unsigned short int&);                  //Constructor
        ~MunicionDifusion();                                    //Destructor
};

/** @brief Constructor
 *
 * @param unsigned short int &p, es el perjuicio generado al impactar
 */
MunicionDifusion::MunicionDifusion(unsigned short int &p){
    Municion(p,0);                  //Llama al constructor de la superclase
};

/** @brief Destructor
 *
 */
MunicionDifusion::~MunicionDifusion(){};





/******************************************************************/
/******************************************************************/
/** @brief Declaracion da la clase jugador
 *
 * Destruye todo y aturde a los demas jugadores
 */
class MunicionMayhem: public Municion{
    public:
        MunicionMayhem(unsigned short int&);        //Constructor
        ~MunicionMayhem();                          //Destructor
};

/** @brief Constructor
 *
 * @param unsigned short int &p, es el perjuicio generado al impactar
 */
MunicionMayhem::MunicionMayhem(unsigned short int &p){
    Municion(p,0);                  //Llama al constructor de la superclase
};

/** @brief Destructor
 *
 */
MunicionMayhem::~MunicionMayhem(){};
