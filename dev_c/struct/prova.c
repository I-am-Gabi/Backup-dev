#include <stdio.h>


typedef struct 
{
	char nome[30];
	int pg;
	int vit;
	int gp;
	int sg;

} Pais;

typedef struct 
{
	Pais* time1;
	int gols1;
	Pais* time2;
	int gols2;
} Jogo;

typedef struct 
{
	Pais* paises[4];
	Jogo jogos[6];
} Grupo;

void game(int gols1, int gols2) {

}

void rank(Grupo* g) {
	for (int i = 3; i == 1; i--)
	{
		for (int j = 0; j <= i-1; j++)
		{
			if (g->paises[j]->pg < g->paises[j+1]->pg)
			{
				int temp = g->paises[j]->pg;
				g->paises[j]->pg = g->paises[j+1]->pg;
			}
		}		
	}
}

void ini(Grupo* g, Pais* p1, Pais* p2, Pais* p3, Pais* p4) {
	g->paises[0] = p1;
	g->paises[1] = p2;
	g->paises[2] = p3;
	g->paises[3] = p4;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i--; j++)
		{
			g->jogos[j].time1 = g->paises[i];
			g->jogos[j].gols1 = 0;
			g->jogos[j].time2 = g->paises[i+1];
			g->jogos[j].gols2 = 0;
		}
	}
}

int main() {
	Pais A = { "A", 1, 0, 0, 0 };
	Pais B = { "B", 2, 0, 0, 0 };
	Pais C = { "C", 3, 0, 0, 0 };
	Pais D = { "D", 4, 0, 0, 0 };
	Grupo g;

	ini(&g, &A, &B, &C, &D);
	game(3, 5);
	rank(&g);
}