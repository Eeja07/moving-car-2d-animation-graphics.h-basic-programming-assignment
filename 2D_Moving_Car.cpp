#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    char path[] = "";
    int width = 1050;
    int height = 800;
    float kecilin = 0.5;

    initgraph(&gd, &gm, path);
    initwindow(width, height);

    int carWidth = 90 * kecilin;
    int carX = 550;             
    float wheelRotation = 0;     

    while (!kbhit()) 
    {
        cleardevice();

        wheelRotation += 5; 
        arc(carX + 250 * kecilin, 600 * kecilin, wheelRotation, wheelRotation + 130, 60 * kecilin);
        arc(carX + 750 * kecilin, 600 * kecilin, wheelRotation, wheelRotation + 130, 60 * kecilin);

        circle(carX + 250 * kecilin, 600 * kecilin, 75 * kecilin); //ban kiri (carX +1)
        circle(carX + 250 * kecilin, 600 * kecilin, 50 * kecilin); //ban kiri (carX +2)
        circle(carX + 250 * kecilin, 600 * kecilin, 40 * kecilin); //ban kiri (carX +3)
        circle(carX + 250 * kecilin, 600 * kecilin, 15 * kecilin); //ban kiri (carX +4)
        arc(carX + 250 * kecilin, 600 * kecilin, 0 * kecilin, 180, 100 * kecilin); //tutup ban kiri
        line(carX + 150 * kecilin, 590 * kecilin, carX + 175 * kecilin, 590 * kecilin); //garis horizontal ban kiri (carX + kiri )
        line(carX + 325 * kecilin, 590 * kecilin, carX + 350 * kecilin, 590 * kecilin); //garis horizontal ban kiri (carX + kanan )

        circle(carX + 750 * kecilin, 600 * kecilin, 75 * kecilin); //ban kanan (carX +1)
        circle(carX + 750 * kecilin, 600 * kecilin, 50 * kecilin); //ban kanan (carX +2)
        circle(carX + 750 * kecilin, 600 * kecilin, 40 * kecilin); //ban kanan (carX +3)
        circle(carX + 750 * kecilin, 600 * kecilin, 15 * kecilin); //ban kanan (carX +4)
        arc(carX + 750 * kecilin, 600 * kecilin, 0 * kecilin, 180, 100 * kecilin); //tutup ban kanan
        line(carX + 650 * kecilin, 590 * kecilin, carX + 675 * kecilin, 590 * kecilin); //garis horizontal ban kanan (carX + kiri )
        line(carX + 825 * kecilin, 590 * kecilin, carX + 850 * kecilin, 590 * kecilin); //garis horizontal ban kanan (carX + kanan )

        line(carX + 350 * kecilin, 600 * kecilin, carX + 650 * kecilin, 600 * kecilin); //garis horizontal tutup ban kiri dan kanan (carX + rangka bawah )
        line(carX + 135 * kecilin, 600 * kecilin, carX + 150 * kecilin, 600 * kecilin); //garis horizontal tutup ban kiri (carX + rangka bawah )
        line(carX + 850 * kecilin, 600 * kecilin, carX + 880 * kecilin, 600 * kecilin); //garis horizontal tutup ban kanan (carX + rangka bawah )

        line(carX + 105 * kecilin, 450 * kecilin, carX + 105 * kecilin, 570 * kecilin); //garis vertikal kiri ban kiri (carX + rangka tengah )
        arc(carX + 305 * kecilin, 795 * kecilin, 90, 120, 400 * kecilin); //tutup kap mobil (carX + rangka tengah )
        line(carX + 305 * kecilin, 395 * kecilin, carX + 750 * kecilin, 395 * kecilin); //garis horizontal bawah kaca (carX + rangka tengah )
        arc(carX + 750 * kecilin, 570 * kecilin, 0, 90, 175 * kecilin); //tutup bagasi mobil (carX + rangka tengah )

        line(carX + 305 * kecilin, 395 * kecilin, carX + 400 * kecilin, 250 * kecilin); //garis miring keatas (carX + rangka atas )
        line(carX + 400 * kecilin, 250 * kecilin, carX + 675 * kecilin, 250 * kecilin); //garis horizontal (carX + rangka atas )
        line(carX + 675 * kecilin, 250 * kecilin, carX + 750 * kecilin, 395 * kecilin); //garis miring kebawah (carX + rangka atas )
        line(carX + 355 * kecilin, 355 * kecilin, carX + 410 * kecilin, 275 * kecilin); //garis miring keatas bagian dalam (carX + rangka atas ) 
        line(carX + 410 * kecilin, 275 * kecilin, carX + 665 * kecilin, 275 * kecilin); //garis horizontal bagian dalam (carX + rangka atas ) 
        line(carX + 665 * kecilin, 275 * kecilin, carX + 725 * kecilin, 395 * kecilin); //garis miring kebawah bagian dalam (carX + rangka atas )
        line(carX + 535 * kecilin, 275 * kecilin, carX + 535 * kecilin, 395 * kecilin); //garis vertikal bagian dalam (carX + rangka atas ) kiri
        line(carX + 565 * kecilin, 275 * kecilin, carX + 565 * kecilin, 395 * kecilin); //garis vertikal bagian dalam (carX + rangka atas ) tengah
        line(carX + 550 * kecilin, 275 * kecilin, carX + 550 * kecilin, 395 * kecilin); //garis vertikal bagian dalam (carX + rangka atas ) kanan

        rectangle(carX + 90 * kecilin, 570 * kecilin, carX + 135 * kecilin, 610 * kecilin); //kotak ban kiri
        rectangle(carX + 90 * kecilin, 475 * kecilin, carX + 105 * kecilin, 525 * kecilin); //kotak lampu depan mobil
        rectangle(carX + 330 * kecilin, 355 * kecilin, carX + 355 * kecilin, 415 * kecilin); //kotak spion mobil
        rectangle(carX + 490 * kecilin, 415 * kecilin, carX + 535 * kecilin, 425 * kecilin); //kotak handle pintu mobil
        rectangle(carX + 880 * kecilin, 570 * kecilin, carX + 945 * kecilin, 610 * kecilin); //kotak ban kanan
        
        carX -= 5; 
        delay(50);
        if (carX + carWidth <= -500)
            carX = width; 
    }

    getch();
    closegraph();
    return 0;
}
