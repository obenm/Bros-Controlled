#include <graphics.h>
#include <process.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream.h>
#include <dos.h>

class marioMuevete
{
	public:
		void ini() // metodo para iniciar graficos
		{
			int gdriver=DETECT, gmode, errorcode;
			initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
			errorcode=graphresult();
			if(errorcode != grOk)
			{
				cout<<" ERROR DE GRAFICOS "<<endl;
				getch();
				exit(1);
			}
			setaspectratio(1280, 720);
		} 	// llave de fin de un metodo (inicializacion de graficos

		void Pintar_Fondo()
		{
			setfillstyle(1, 9);
			bar(0, 0, 640, 480);
		}

		void Pintar_Suelo()
		{
			setfillstyle(SOLID_FILL, BROWN);
			bar(0, 400, 640, 480);

			setfillstyle(SOLID_FILL, 7);
			bar(10, 400, 94, 410);
			bar(0, 410, 10, 480);

			bar(115, 400, 144, 410);
			bar(105, 410, 115, 440);
			bar(105, 450, 115, 480);
			bar(105, 450, 144, 460);

			bar(165, 400, 244, 410);
			bar(156, 410, 165, 480);

			bar(265, 400, 305, 410);
			bar(255, 400, 265, 440);
			bar(255, 450, 265, 480);
			bar(255, 450, 305, 460);

			bar(325, 400, 425, 410);
			bar(316, 410, 325, 480);

			bar(435, 400, 475, 410);
			bar(425, 410, 435, 440);
			bar(425, 450, 435, 480);
			bar(425, 450, 475, 460);

			bar(495, 400, 595, 410);
			bar(486, 400, 495, 480);

			bar(605, 400, 640, 410);
			bar(595, 410, 605, 440);
			bar(595, 450, 605, 480);
			bar(595, 450, 640, 460);

			setfillstyle(SOLID_FILL, BLACK);
			bar(95, 400, 105, 480);

			bar(145, 410, 155, 440);
			bar(145, 450, 155, 480);
			bar(115, 440, 145, 450);
			bar(115, 430, 125, 440);

			bar(245, 400, 255, 480);

			bar(305, 410, 315, 440);
			bar(305, 450, 315, 480);
			bar(265, 440, 305, 450);
			bar(265, 430, 275, 440);

			bar(415, 400, 425, 480);

			bar(475, 410, 485, 440);
			bar(475, 450, 485, 480);
			bar(435, 440, 475, 450);
			bar(435, 430, 445, 440),

			bar(585, 400, 595, 480);

			bar(605, 440, 640, 450);
			bar(615, 430, 605, 440);
		}

		void Pintar_Arbusto_Izq()
		{
			// 240 - 400
			setfillstyle(SOLID_FILL, 10);
			bar(0, 240, 20, 250);
			bar(20, 250, 30, 260);
			bar(30, 260, 40, 280);
			bar(40, 280, 50, 290);
			bar(50, 280, 60, 270);
			bar(60, 280, 70, 290);
			bar(70, 290, 80, 320);
			bar(80, 320, 90, 340);
			bar(90, 340, 100, 350);
			bar(100, 340, 110, 330);
			bar(110, 330, 120, 320);
			bar(120, 330, 130, 360);
			bar(130, 360, 140, 370);
			bar(140, 360, 150, 350);
			bar(150, 360, 160, 390);
			bar(150, 390, 140, 480);
			floodfill(20, 300, 10);

			setfillstyle(SOLID_FILL, BLACK);
			bar(0, 240, 20, 250);
			bar(20, 250, 30, 260);
			bar(30, 260, 40, 280);
			bar(40, 280, 50, 290);
			bar(50, 280, 60, 270);
			bar(60, 280, 70, 290);
			bar(70, 290, 80, 320);
			bar(80, 320, 90, 340);
			bar(90, 340, 100, 350);
			bar(100, 340, 110, 330);
			bar(110, 330, 120, 320);
			bar(120, 330, 130, 360);
			bar(130, 360, 140, 370);
			bar(140, 360, 150, 350);
			bar(150, 360, 160, 390);
			bar(150, 390, 140, 480);

			setfillstyle(SOLID_FILL, 2);
			bar(10, 300, 20, 310);
			bar(20, 310, 30, 320);
		}

		void Pintar_Arbusto_Der()
		{
			// 210 - 400
			setfillstyle(SOLID_FILL, 2);
			bar(590, 210, 640, 220);
			bar(560, 220, 590, 230);
			bar(540, 230, 560, 240);
			bar(530, 240, 540, 250);
			bar(520, 250, 530, 260);
			bar(510, 260, 520, 270);
			bar(500, 270, 510, 280);
			bar(490, 280, 500, 290);
			bar(480, 290, 490, 300);
			bar(470, 300, 480, 310);
			bar(460, 310, 470, 320);
			bar(450, 320, 460, 330);
			bar(440, 330, 450, 340);
			bar(430, 340, 440, 350);
			bar(420, 350, 430, 360);
			bar(410, 360, 420, 370);
			bar(400, 370, 410, 380);
			bar(390, 380, 400, 390);
			bar(380, 390, 390, 480);
			floodfill(500, 300, 2);

			setfillstyle(SOLID_FILL, BLACK);
			bar(590, 210, 640, 220);
			bar(560, 220, 590, 230);
			bar(540, 230, 560, 240);
			bar(530, 240, 540, 250);
			bar(520, 250, 530, 260);
			bar(510, 260, 520, 270);
			bar(500, 270, 510, 280);
			bar(490, 280, 500, 290);
			bar(480, 290, 490, 300);
			bar(470, 300, 480, 310);
			bar(460, 310, 470, 320);
			bar(450, 320, 460, 330);
			bar(440, 330, 450, 340);
			bar(430, 340, 440, 350);
			bar(420, 350, 430, 360);
			bar(410, 360, 420, 370);
			bar(400, 370, 410, 380);
			bar(390, 380, 400, 390);
			bar(380, 390, 390, 480);

			bar(630, 290, 640, 330);
		}

		void Pintar_Mario()
		{
			// Bota Izquierda
			setcolor(BLACK);
			line(340, 400, 400, 400);
			line(400, 400, 400, 360);
			line(400, 360, 360, 360);
			line(360, 360, 360, 380);
			line(360, 380, 340, 380);
			line(340, 380, 340, 400);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(380, 370, BLACK);
			bar(390, 390, 400, 400);

			// Bota Derecha
			setcolor(BLACK);
			line(440, 400, 500, 400);
			line(500, 400, 500, 380);
			line(500, 380, 480, 380);
			line(480, 380, 480, 360);
			line(480, 360, 440, 360);
			line(440, 360, 440, 400);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(450, 370, BLACK);

			// Overol
			setcolor(BLUE);
			line(440, 360, 490, 360);
			line(490, 360, 490, 330);
			line(490, 330, 480, 330);
			line(480, 330, 480, 320);
			line(480, 320, 470, 320);
			line(470, 320, 470, 310);
			line(470, 310, 460, 310);
			line(460, 310, 460, 240);
			line(460, 240, 450, 240);
			line(450, 240, 450, 200);
			line(450, 200, 440, 200);
			line(440, 200, 440, 260);
			line(440, 260, 400, 260);
			line(400, 260, 400, 200);
			line(400, 200, 390, 200);
			line(390, 200, 390, 240);
			line(390, 240, 380, 240);
			line(380, 240, 380, 310);
			line(380, 310, 370, 310);
			line(370, 310, 370, 320);
			line(370, 320, 360, 320);
			line(360, 320, 360, 330);
			line(360, 330, 350, 330);
			line(350, 330, 350, 360);
			line(350, 360, 400, 360);
			line(400, 360, 400, 340);
			line(400, 340, 410, 340);
			line(410, 340, 410, 330);
			line(410, 330, 430, 330);
			line(430, 330, 430, 340);
			line(430, 340, 440, 340);
			line(440, 340, 440, 360);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(400, 320, BLUE);

			// Bolsitas Overol
			setfillstyle(SOLID_FILL, YELLOW);
			bar(390, 270, 400, 280);
			bar(440, 270, 450, 280);

			// Camisa Pecho
			setcolor(RED);
			line(400, 260, 440, 260);
			line(440, 260, 440, 200);
			line(440, 200, 400, 200);
			line(400, 200, 400, 260);
			setfillstyle(SOLID_FILL, RED);
			floodfill(420, 230, RED);

			// Camisa Manga Izquierda
			setcolor(RED);
			line(390, 200, 380, 200);
			line(380, 200, 380, 210);
			line(380, 210, 370, 210);
			line(370, 210, 370, 220);
			line(370, 220, 360, 220);
			line(360, 220, 360, 230);
			line(360, 230, 350, 230);
			line(350, 230, 350, 250);
			line(350, 250, 340, 250);
			line(340, 250, 340, 280);
			line(340, 280, 380, 280);
			line(380, 280, 380, 240);
			line(380, 240, 390, 240);
			line(390, 240, 390, 200);
			setfillstyle(SOLID_FILL, RED);
			floodfill(370, 230, RED);

			// Camisa Manga Derecha
			setcolor(RED);
			line(450, 200, 460, 200);
			line(460, 200, 460, 210);
			line(460, 210, 470, 210);
			line(470, 210, 470, 220);
			line(470, 220, 480, 220);
			line(480, 220, 480, 230);
			line(480, 230, 490, 230);
			line(490, 230, 490, 250);
			line(490, 250, 500, 250);
			line(500, 250, 500, 280);
			line(500, 280, 460, 280);
			line(460, 280, 460, 240);
			line(460, 240, 450, 240);
			line(450, 240, 450, 200);
			setfillstyle(SOLID_FILL, RED);
			floodfill(470, 245, RED);

			// Mano Izquierda
			setcolor(6);
			line(340, 280, 380, 280);
			line(380, 280, 380, 310);
			line(380, 310, 370, 310);
			line(370, 310, 370, 320);
			line(370, 320, 350, 320);
			line(350, 320, 350, 300);
			line(350, 300, 340, 300);
			line(340, 300, 340, 280);
			setfillstyle(SOLID_FILL, 6);
			floodfill(360, 300, 6);

			// Mano Derecha
			setcolor(6);
			line(500, 280, 460, 280);
			line(460, 280, 460, 310);
			line(460, 310, 470, 310);
			line(470, 310, 470, 320);
			line(470, 320, 490, 320);
			line(490, 320, 490, 300);
			line(490, 300, 500, 300);
			line(500, 300, 500, 280);
			setfillstyle(SOLID_FILL, 6);
			floodfill(470, 300, 6);

			// Cuadros Dispersos
			// Rojo Cuello
			setfillstyle(SOLID_FILL, RED);
			bar(380, 190, 390, 200);
			setfillstyle(SOLID_FILL, BROWN);
			bar(440, 190, 450, 200);

			// Cara
			setcolor(6);
			line(390, 200, 440, 200);
			line(440, 200, 440, 190);
			line(440, 190, 470, 190);
			line(470, 190, 470, 180);
			line(470, 180, 430, 180);
			line(430, 180, 430, 170);
			line(430, 170, 420, 170);
			line(420, 170, 420, 160);
			line(420, 160, 440, 160);
			line(440, 160, 440, 150);
			line(440, 150, 450, 150);
			line(450, 150, 450, 160);
			line(450, 160, 490, 160);
			line(490, 160, 490, 140);
			line(490, 140, 480, 140);
			line(480, 140, 480, 130);
			line(480, 130, 460, 130);
			line(460, 130, 460, 120);
			line(460, 120, 430, 120);
			line(430, 120, 430, 130);
			line(430, 130, 440, 130);
			line(440, 130, 440, 140);
			line(440, 140, 420, 140);
			line(420, 140, 420, 120);
			line(420, 120, 400, 120);
			line(400, 120, 400, 140);
			line(400, 140, 410, 140);
			line(410, 140, 410, 160);
			line(410, 160, 390, 160);
			line(390, 160, 390, 130);
			line(390, 130, 370, 130);
			line(370, 130, 370, 170);
			line(370, 170, 380, 170);
			line(380, 170, 380, 180);
			line(380, 180, 390, 180);
			line(390, 180, 390, 200);
			setfillstyle(SOLID_FILL, 6);
			floodfill(400, 165, 6);

			// Cabello oreja
			setcolor(BLACK);
			line(370, 120, 400, 120);
			line(400, 120, 400, 140);
			line(400, 140, 410, 140);
			line(410, 140, 410, 160);
			line(410, 160, 390, 160);
			line(390, 160, 390, 130);
			line(390, 130, 370, 130);
			line(370, 130, 370, 120);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(380, 125, BLACK);

			// Cabello atras
			setcolor(BLACK);
			line(370, 130, 360, 130);
			line(360, 130, 360, 150);
			line(360, 150, 350, 150);
			line(350, 150, 350, 180);
			line(350, 180, 370, 180);
			line(370, 180, 370, 190);
			line(370, 190, 390, 190);
			line(390, 190, 390, 180);
			line(390, 180, 380, 180);
			line(380, 180, 380, 170);
			line(380, 170, 370, 170);
			line(370, 170, 370, 130);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(370, 175, BLACK);

			// Ojo
			setcolor(BLACK);
			line(420, 120, 430, 120);
			line(430, 120, 430, 130);
			line(430, 130, 440, 130);
			line(440, 130, 440, 140);
			line(440, 140, 420, 140);
			line(420, 140, 420, 120);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(425, 125, BLACK);

			// Bigote XD
			setcolor(BLACK);
			line(420, 160, 440, 160);
			line(440, 160, 440, 150);
			line(440, 150, 450, 150);
			line(450, 150, 450, 160);
			line(450, 160, 480, 160);
			line(480, 160, 480, 180);
			line(480, 180, 430, 180);
			line(430, 180, 430, 170);
			line(430, 170, 420, 170);
			line(420, 170, 420, 160);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(440, 170, BLACK);

			// Gorra (Rojo)
			setcolor(RED);
			line(370, 120, 480, 120);
			line(480, 120, 480, 110);
			line(480, 110, 450, 110);
			line(450, 110, 450, 80);
			line(450, 80, 400, 80);
			line(400, 80, 400, 90);
			line(400, 90, 380, 90);
			line(380, 90, 380, 100);
			line(380, 100, 370, 100);
			line(370, 100, 370, 120);
			setfillstyle(SOLID_FILL, RED);
			floodfill(405, 105, RED);

			// Gorra (Piel)
			setcolor(6);
			line(450, 110, 430, 110);
			line(430, 110, 430, 100);
			line(430, 100, 440, 100);
			line(440, 100, 440, 90);
			line(440, 90, 450, 90);
			line(450, 90, 450, 110);
			setfillstyle(SOLID_FILL, 6);
			floodfill(445, 100, 6);
		}

		void Mover_Mario()
		{
			int imagetam = imagesize(340, 400, 500, 80);
			void *imagen = malloc(imagetam);
			getimage(340, 400, 500, 80, imagen);
			setfillstyle(1, 9);
			bar(340, 400, 500, 80);
			for(int i=0; i<20; i++)
			{
				putimage(10+(i*15), 80, imagen, COPY_PUT);
				delay(500);
				setfillstyle(1, 9);
				bar(10+(i*15), 80, 500+(i*15), 400);
			}
		}

		void Mover_Mario_Teclas()
		{
			int imagetam = imagesize(340, 400, 500, 80);
			void *imagen = malloc(imagetam);
			getimage(340, 400, 500, 80, imagen);
			setfillstyle(1, 9);
			bar(340, 400, 500, 80);
			int tecla, posx = 0;
			do
			{
				tecla = getch();
				switch(tecla)
				{
					case 'd': case 'D':

						setfillstyle(1, 9);
						bar(10+(posx*15), 80, 500+(posx*15), 400);
						posx++;
						putimage(10+(posx*15), 80, imagen, COPY_PUT);
						break;

					case 'a': case 'A':
						setfillstyle(1, 9);
						bar(10+(posx*15), 80, 500+(posx*15), 400);
						posx--;
						putimage(10+(posx*15), 80, imagen, COPY_PUT);
						break;
				}
			}while(tecla != 27);
		}
};

void main()
{
	marioMuevete m;
	m.ini();
	cleardevice();
	m.Pintar_Fondo();
	//m.Pintar_Arbusto_Izq();
	//m.Pintar_Arbusto_Der();
	m.Pintar_Suelo();
	m.Pintar_Mario();
	//m.Mover_Mario();
	m.Mover_Mario_Teclas();
	getch();
}