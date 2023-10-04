#ifndef MENUPACIENTE_H
#define MENUPACIENTE_H

#include "ArchivoPaciente.h"

class menuPaciente {
    private:
        std::string opc;
        ArchivoPaciente miArchivoPaciente;

    public:
        menuPaciente();
        ~menuPaciente();

        void setOpc(std::string valorOpc);
        std::string getOpc();

        void menu();
        void agregar();
        void eliminar();
        void buscar();
        void importarArchivo();
};

#endif