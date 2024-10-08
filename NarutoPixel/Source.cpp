#include <GL/glut.h>

// Función para inicializar los parámetros básicos de OpenGL
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);  // Establece el fondo en blanco
    glMatrixMode(GL_PROJECTION);       // Cambia a la matriz de proyección
    gluOrtho2D(0.0, 640.0, 0.0, 480.0); // Establece una proyección ortogonal
}

// Función para dibujar un píxel
void drawPixel(int x, int y, float r, float g, float b) {
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    glVertex2i(x * 20, y * 20);
    glVertex2i(x * 20 + 20, y * 20);
    glVertex2i(x * 20 + 20, y * 20 + 20);
    glVertex2i(x * 20, y * 20 + 20);
    glEnd();
}

// Función para dibujar a Naruto en estilo pixelado
void drawNaruto() {
    // Píxeles de Naruto basados en la imagen

    // Amarillo del cabello
    drawPixel(7, 17, 1.0, 0.8, 0.0); // Amarillo
    drawPixel(8, 17, 1.0, 0.8, 0.0);
    drawPixel(9, 17, 1.0, 0.8, 0.0);
    drawPixel(10, 17, 1.0, 0.8, 0.0);
    drawPixel(6, 16, 1.0, 0.8, 0.0);
    drawPixel(7, 16, 1.0, 0.8, 0.0);
    drawPixel(8, 16, 1.0, 0.8, 0.0);
    drawPixel(9, 16, 1.0, 0.8, 0.0);
    drawPixel(10, 16, 1.0, 0.8, 0.0);
    drawPixel(11, 16, 1.0, 0.8, 0.0);
    drawPixel(5, 15, 1.0, 0.8, 0.0);
    drawPixel(6, 15, 1.0, 0.8, 0.0);
    drawPixel(7, 15, 1.0, 0.8, 0.0);
    drawPixel(8, 15, 1.0, 0.8, 0.0);
    drawPixel(9, 15, 1.0, 0.8, 0.0);
    drawPixel(10, 15, 1.0, 0.8, 0.0);
    drawPixel(11, 15, 1.0, 0.8, 0.0);
    drawPixel(12, 15, 1.0, 0.8, 0.0);

    // Parte superior de la banda negra
    drawPixel(5, 14, 0.0, 0.0, 0.0); // Negro
    drawPixel(6, 14, 0.0, 0.0, 0.0);
    drawPixel(7, 14, 0.0, 0.0, 0.0);
    drawPixel(8, 14, 0.0, 0.0, 0.0);
    drawPixel(9, 14, 0.0, 0.0, 0.0);
    drawPixel(10, 14, 0.0, 0.0, 0.0);
    drawPixel(11, 14, 0.0, 0.0, 0.0);
    drawPixel(12, 14, 0.0, 0.0, 0.0);

    // Detalle gris de la banda ninja
    drawPixel(7, 13, 0.5, 0.5, 0.5); // Gris
    drawPixel(8, 13, 0.5, 0.5, 0.5);
    drawPixel(9, 13, 0.5, 0.5, 0.5);
    drawPixel(10, 13, 0.5, 0.5, 0.5);

    // Ojos
    drawPixel(6, 12, 0.0, 0.0, 0.0); // Negro
    drawPixel(11, 12, 0.0, 0.0, 0.0);

    // Resto de la cara (color piel)
    drawPixel(7, 12, 1.0, 0.8, 0.6); // Piel
    drawPixel(8, 12, 1.0, 0.8, 0.6);
    drawPixel(9, 12, 1.0, 0.8, 0.6);
    drawPixel(10, 12, 1.0, 0.8, 0.6);
    drawPixel(7, 11, 1.0, 0.8, 0.6);
    drawPixel(8, 11, 1.0, 0.8, 0.6);
    drawPixel(9, 11, 1.0, 0.8, 0.6);
    drawPixel(10, 11, 1.0, 0.8, 0.6);

    // Cuerpo (parte negra)
    drawPixel(6, 10, 0.0, 0.0, 0.0); // Negro
    drawPixel(7, 10, 0.0, 0.0, 0.0);
    drawPixel(8, 10, 1.0, 0.4, 0.0); // Naranja
    drawPixel(9, 10, 1.0, 0.4, 0.0);
    drawPixel(10, 10, 0.0, 0.0, 0.0);
    drawPixel(11, 10, 0.0, 0.0, 0.0);
    drawPixel(7, 9, 1.0, 0.4, 0.0); // Naranja
    drawPixel(8, 9, 1.0, 0.4, 0.0);
    drawPixel(9, 9, 1.0, 0.4, 0.0);
    drawPixel(10, 9, 1.0, 0.4, 0.0);

    // Piernas y pies
    drawPixel(7, 8, 0.0, 0.0, 0.0); // Negro
    drawPixel(8, 8, 0.0, 0.0, 0.0);
    drawPixel(9, 8, 0.0, 0.0, 0.0);
    drawPixel(10, 8, 0.0, 0.0, 0.0);
    drawPixel(7, 7, 0.0, 0.0, 0.0);
    drawPixel(10, 7, 0.0, 0.0, 0.0);
}

// Función para representar el contenido en la ventana de OpenGL
void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // Limpia la pantalla

    drawNaruto(); // Dibuja a Naruto en estilo pixelado

    glFlush(); // Fuerza el renderizado de los comandos de dibujo
}

// Función principal
int main(int argc, char** argv) {
    glutInit(&argc, argv);                        // Inicializa GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  // Usa un buffer de color simple con RGB
    glutInitWindowSize(640, 480);                 // Tamaño de la ventana
    glutInitWindowPosition(100, 100);             // Posición de la ventana
    glutCreateWindow("Naruto Pixel Art");         // Crea la ventana con el título
    init();                                       // Llama a la función de inicialización
    glutDisplayFunc(display);                     // Establece la función de display
    glutMainLoop();                               // Inicia el bucle principal de GLUT
    return 0;
}


