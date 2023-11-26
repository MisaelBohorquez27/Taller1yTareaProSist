#ifndef FUNCIONES_H_
#define  FUNCIONES_H_

struct Producto{
    char nombre[50];
    char categoria[50];
    char marca[50];
    int codigo;
    float precio_compra;
    int inventario;
};


struct RegistroVenta {
  char vendedor[20];
  char fecha[20];
  int precioventa;
  char local[20];
};

struct Bodeguero{
  char username[10];
  char password[10];
};

struct Vendedor {
  char username[10];
  char password[10];
};

struct Admin{
  char username[10];
  char password[10];
};

struct Usuario {
  char nombre[20];
  char rol[20];
  char username[20];
  char password[20];
};


struct Usuario crearUsuario();
void actualizarUsuario(struct Usuario *);
void cargarUsuarios(struct Usuario usuarios[], int *numUsuarios);
void guardarUsuarios(struct Usuario usuarios[], int numUsuarios);

struct Producto registrarProducto();
void disminuirInventario(struct Producto);
struct Bodeguero registrarBodeguero(char[10], char[10]);

struct RegistroVenta vender(struct Producto);
struct Vendedor registrarVendedor(char[10], char[10]);

struct Producto CrearProducto(struct Producto);

void ActualizarProducto(struct Producto);

#endif