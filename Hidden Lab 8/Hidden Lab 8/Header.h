#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//I wasn't sure if we should write the definitions of all the functions or not but I just prototyped based on the class diagram and wrote the definition for the createAlbum function.
    class Tag
    {
    private:
        int id;
        string name;
        string remarks;

    public:
        //constructors
        Tag();
        Tag(int, string, string);
        //setters
        void setID(int);
        void setName(string);
        void setRemarks(string);
        //getters
        int getID();
        string getName();
        string getRemarks();

    };


    class Photo
    {
    private:
        int id;
        string title;
        string remarks;
        string type;
        string privacy;
    public:
        //constructor
        Photo();
        //setters
        void setID(int);
        void setTitle(string);
        void setRemarks(string);
        void setType(string);
        void setPrivacy(string);
        //getters
        int getID();
        string getTitle();
        string getRemarks();
        string getType();
        string getPrivacy();
    };


    class Album
    {
    private:
        int id;
        string title;
        string remarks;

    public:
        //constructor
        Album();
        Album createAlbum();
        //setters
        void setID(int);
        void setTitle(string);
        void setRemarks(string);
        //getters
        int getID();
        string getTitle();
        string getRemarks();
    };
    //createAlbum function definition
   Album Album::createAlbum()   //creates a new album and sets all the data members for the album and creates a vector of photos which allows photos to be added to the album.
    {
       Album newAlbum;
       vector <Photo> photos;
       newAlbum.setTitle(title);
       newAlbum.setID(id);
       newAlbum.setRemarks(remarks);
       
       return newAlbum;
    }

    class Member
    {
    private:
        int id;
        string name;
        string address;
        string contact;
    public:
        //constructor
        Member();
        //setters
        void setID(int);
        void setName(string);
        void setAddress(string);
        void setContact(string);
        //getters
        int setID();
        string setName();
        string setAddress();
        string setContact();
    };



    class Location
    {
    private:
        int id;
        string name;
        string remarks;
    public:
        //constructor
        Location();
        //setters
        void setID(int);
        void setName(string);
        void setRemarks(string);
        //getters
        int getID();
        string getName();
        string getRemarks();
    };




