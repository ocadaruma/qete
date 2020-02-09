#include<QtWidgets/QApplication>
#include<QLabel>
#include<QPushButton>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QLabel label("hello");
  QPushButton button("end");

  QObject::connect(&button, SIGNAL(clicked()), &app, SLOT(quit()));

  label.show();
  button.show();

  return app.exec();
}
