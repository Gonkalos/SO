#ifndef SERVIDOR_H
#define SERVIDOR_H

#include "tarefa.h"

#define MAX_TAREFAS 1024

#define FIFO_FD "myfifo"
#define TERMINADAS_FD "terminadas"
#define OUTPUT_FD "output"

void showTarefasEmExecucao();
void showTarefasTerminadas();
void executarTarefa(Tarefa *t);

#endif