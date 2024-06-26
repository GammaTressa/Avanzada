/*
 * PartidaMultijugador.h
 *
 *  Created on: 2 abr 2024
 *      Author: UnwantedOpinion
 */

#ifndef PARTIDAMULTIJUGADOR_H_
#define PARTIDAMULTIJUGADOR_H_
#include "Partida.h"
#include "Jugador.h"
#include "Videojuego.h"
#include <vector>

class PartidaMultijugador: public Partida {
private:
	bool transmitidaEnVivo;
	vector<string> jugadores;
	Videojuego* videojuego;
public:
	PartidaMultijugador();
	bool getTransmitidaEnVivo();
	void setTransmitidaEnVivo(bool);
	virtual float darTotalHorasParticipantes() override;
	void unirseaPartida(Jugador*);
	int getCantidadTotalJugadores();
	vector<string> getJugadores();
	Videojuego* getVideojuego();
	void setVideojuego(Videojuego*) override;
	virtual ~PartidaMultijugador();
};

#endif /* PARTIDAMULTIJUGADOR_H_ */
