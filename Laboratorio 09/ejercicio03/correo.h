template <class l,class pal>

class correo {

private:

	l letra;
	pal apellido;

public:

	correo(l letra, pal apellido);

	pal direccionCorreo() {
		pal dir = letra + apellido + "@unsa.edu.pe";

		return dir;
	}
};

template <class l, class pal>
correo<l, pal>::correo(l letra, pal apellido) {
	this->letra = letra;
	this->apellido = apellido;
}

