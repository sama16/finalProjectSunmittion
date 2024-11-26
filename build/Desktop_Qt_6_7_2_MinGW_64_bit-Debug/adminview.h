
#ifndef ADMINVIEW_H
#define ADMINVIEW_H

#include <QWidget>
#include <QVector>
#include <QString>
#include <QLineEdit>
#include <QListWidget>
#include "welcomeview.h"

class AdminView : public QWidget {
    Q_OBJECT

public:
    explicit AdminView(QWidget *parent = nullptr);
    ~AdminView();

signals:
    void goBackToWelcome();
private:
    void setupUI();



    void loadBooks();
    void saveBooks();
    void loadUsers();
    void saveUsers();
    void loadSeminars();
    void saveSeminars();


   
    QLineEdit *bookTitleInput;
    QLineEdit *bookAuthorInput;
    QStringList bookList; 

    
    QLineEdit *userInput;

    QStringList userList; // Store usernames
    QListWidget *listView;
    //seminar management

    

    QLineEdit *seminarTitleInput;
    QLineEdit *seminarDateInput;
    QStringList seminarList;


    
    void addBook();
    void editBook();
    void deleteBook();

    void addUser();
    void deleteUser();
    void manageUsers();

    void addSeminar();
    void editSeminar();
    void deleteSeminar();
};

#endif // ADMINVIEW_H
