using namespace std;


/** @name       Crazy River Ride
 *
 *  @author     Roberto Bonilla Jara
 *  @author     Alex Feng Li
 *  @author     Ernesto Ulate
 *  @author     Pablo Rodriguez
 *
 *  @version    1.0
 *  @date       2015
 */
int main(){
    Jugador *j=new Jugador(static_cast<string>("Roberto"));
    int decremento=-5;
    do{
        cout<< "La vida de " << j->obtenerNombre() << " es: "<< j->obtenerVida() <<endl;
        cout<< "El combustible de " << j->obtenerNombre() << " es: "<< j->obtenerCombustible() <<endl;
        j->modificarVida(decremento);
        j->modificarCombustible(decremento);
    }while(j->obtenerVida()!=0 | j->obtenerCombustible()!=0);

    j->~Jugador();
    cin.get();
    return 0;
};
