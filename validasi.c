#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include "warna.c"
#define h_besar input >= 'A' && input <= 'Z'
#define h_kecil input >= 'a' && input <= 'z'
#define angka input >= '0' && input <= '9'


void *validuse(char *user)
{
    char input;
    char tampung[8] = {};
    char indeks = 0;

    while( (input = getch()) != 13  &&  indeks < 8)
    {
        if(indeks == 0 && h_besar)
        {
            printf("%c", input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(indeks > 0 && h_kecil)
        {
            printf("%c", input);
            tampung[indeks] = input;
            indeks++;

        }
        else if(input == 8 && indeks !=0)
        {
            printf("\b \b");
            tampung[indeks - 1] = '\0';
            indeks--;
        }
    }
    tampung[indeks] = '\0';
    strcpy(user,tampung);
}

void *validpass(char *pass)
{
    char input ;
    char tampung[6] = {};
    char indeks = 0;

    while( (input = getch()) != 13  &&  indeks < 6)
    {
        if(indeks < 6  && angka  &&  input != 32)
        {
            printf("*", input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0)
        {
            printf("\b \b");
            tampung[indeks - 1] = '\0';
            indeks--;
        }
    }

    tampung[indeks] = '\0';
    strcpy(pass, tampung);
}

void *valid_nama(char *nama)
{
    char input;
    char tampung[40] = {};
    int indeks = 0;

    while((input = getch()) && input != 13)
    {
        if (indeks < 40 && (h_besar && (indeks == 0 || tampung[indeks - 1] == 32) ||
                            (h_kecil && tampung[indeks - 1] != ' ') && indeks != 0 ||
                            (input == ' ' && indeks > 0 && tampung[indeks - 1] != ' ')))
        {
            printf("%c", input);
            tampung[indeks++] = input;
        }
        else if (input == 8 && indeks > 0)
        {
            printf("\b \b");
            tampung[--indeks] = '\0';
        }
        else if (input == 13)
        {
            tampung[indeks] = '\0';
            indeks = 0;
            break;
        }
    }
    tampung[indeks] = '\0';
    strcpy(nama,tampung);
}

void *valno_hp(char *no_hp)
{
    char input;
    char tampung[13] = {};
    int indeks = 0;
    while((input = getch()) != 13  && indeks < 13 && input != 0)
    {
        if(indeks < 13 && angka && (indeks == 0 && input == '0') ||
                          (indeks == 1 && input == '8'|| 
                          (indeks == 2 && ( input >= '1' && input <= '9' && (input != '4' && input != '6') ) )||
                          (indeks >= 3 && indeks <= 13  && angka) ))
        {
            printf("%c", input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0)
        {
            printf("\b \b");
            tampung[indeks - 1] = '\0';
            indeks--;
        }
    }
        tampung[indeks] = '\0';
        strcpy(no_hp,tampung);
}

void *valjenis_kelamin( char *gender)
{
    char input;
    char tampung[10];
    int indeks = 0;
    while((input = getch()) != 13 || indeks < 1){
        if(indeks == 0 && (input == 'L' || input == 'P' || input == 'l' || input == 'p')){
            printf("%c",input);
            tampung[indeks] = input;
            indeks++;
            if(input == 'P' || input == 'p')
            {
                printf("erempuan");
            }
            else if(input == 'L' || input == 'l')
            {
                printf("aki-laki");
            }
        }
        else if(input == 8 && indeks != 0){
            printf("\b \b");
            tampung[indeks - 1] = '\0';
            indeks--;
        }
    }
        tampung[indeks] = '\0';
        strcpy(gender,tampung); 
}

void *valusia(char *usia)
{
    char input;
    char tampung[100] = {};
    int indeks = 0;
    while((input = getch()) != 13 || indeks < 1){
        if(indeks < 2 && (input >= '1' && input <= '9' || input == '0' && indeks != 0)){
            printf("%c",input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0){
            printf("\b \b");
            indeks--;
            tampung[indeks] = '\0';
        }
    }
    tampung[indeks] = '\0';
    strcpy(usia,tampung);
}

void *valnik(char *nik)
{
    char inp;
    int index=0;
    while((inp=getch())!= 13 || nik[index-1] == ' ' || index < 16){
        if(inp == '3' & index == 0 || inp == '2' && index == 1 || inp == '1' && index == 2 || inp == '2' && index == 3 ||
        (inp >= '0' && inp <= '9') && index > 3 && index < 16
        ){
        printf("%c", inp);
        nik[index]=inp;
        index++;
        }else if(inp == 8 && index != 0){
            printf("\b \b");
            --index;
            nik[index]='\0';
        }
    }
}

void *val_keluhan(char *keluhan)
{
    char input;
    char tampung[100]= {};
    int indeks = 0;

    while( (input = getch()) != 13 )
    {
        if (indeks < 40 && (h_besar && (indeks == 0 || tampung[indeks - 1] == 32) ||
                            (h_kecil && tampung[indeks - 1] != ' ') && indeks != 0 ||
                            (input == ' ' && indeks > 0 && tampung[indeks - 1] != ' ')))
        {
            printf("%c",input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0)
        {
            printf("\b \b");
            tampung[indeks - 1] = '\0';
            indeks--;
        }
    }
    strcpy(keluhan,tampung);
}

void *validok(char *dokter)
{
    char input;
    char tampung[50] = {};
    int indeks = 0; 

    while((input = getch()) != 13)
    {
        if (indeks < 40 && (h_besar && (indeks == 0 || tampung[indeks - 1] == 32) ||
                            (h_kecil && tampung[indeks - 1] != ' ') && indeks != 0 ||
                            (input == ' ' && indeks > 0 && tampung[indeks - 1] != ' ')))
        {
            printf("%c", input);
            tampung[indeks++] = input;
        }
     
        else if(input == 8 && indeks != 0)
        {
            printf("\b \b");
            tampung[indeks - 1] = '\0';
            indeks--;
        }
    }
    strcpy(dokter,tampung);
}

void *val_Alamat(char *alamat){
    char input;
    char tampung[100] = {};
    int indeks = 0;
    while((input = getch()) && input != 13 || indeks < 8 || tampung[indeks-1] == 32)
    {
        if(indeks < 24 && input != 13 && ((input >= 'a' && input <= 'z' && indeks != 0 && input != tampung[indeks -1] ) && tampung[indeks-1] != ' '
            || input >= 'A' && input <= 'Z' && input != tampung[indeks - 1] && (indeks == 0 || tampung[indeks-1] == ' ') 
            || input == 32 && indeks > 2 && tampung[indeks-1] != input  ))
        {
            printf("%c",input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0){
            printf("\b \b");
            tampung[indeks] = '\0';
            indeks--;
        }
    }
     strcpy(alamat,tampung);
}

void *valspesialis( char *spesialis)
{
    char inputan;
    char tampung[100] = {};
    int indeks = 0;

    while((inputan = getch()) && inputan != 13 || indeks < 8 || tampung[indeks-1] == 32)
    {
        if(indeks < 24 && inputan != 13 && ((inputan >= 'a' && inputan <= 'z' && indeks != 0 && inputan != tampung[indeks -1] ) && tampung[indeks-1] != ' '
            || inputan >= 'A' && inputan <= 'Z' && inputan != tampung[indeks - 1] && (indeks == 0 || tampung[indeks-1] == ' ') 
            || inputan == 32 && indeks > 2 && tampung[indeks-1] != inputan  ))
        {
            printf("%c",inputan);
            tampung[indeks] = inputan;
            indeks++;
        }
        else if(inputan == 8 && indeks != 0){
            printf("\b \b");
            tampung[indeks] = '\0';
            indeks--;
        }
    }
     strcpy(spesialis,tampung);
}

int pilih_menu(int x, int y)
{
    int pilih;
    char input ;
    char tampung[100] = {};
    int indeks = 0;
    while((input = getch()) != 13  ||  indeks < 1)
    {
        if(indeks < 1 && (input >= '0'  &&  input <= '4'))
        {
            koordinat(x + indeks, y);
            printf("%c", input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0)
        {
            printf("\b \b");
            indeks--;
            tampung[indeks] = '\0';
        }
    }

    return pilih = atoi(tampung);
}

int pilih_3(int x, int y)
{
    int pilih;
    char input ;
    char tampung[100] = {};
    int indeks = 0;
    while((input = getch()) != 13  ||  indeks < 1)
    {
        if(indeks < 1 && (input >= '0'  &&  input <= '3'))
        {
            koordinat(x + indeks, y);
            printf("%c", input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0)
        {
            printf("\b \b");
            indeks--;
            tampung[indeks] = '\0';
        }
    }

    return pilih = atoi(tampung);
}

int pilih_2(int x, int y)
{
    int pilih;
    char input ;
    char tampung[100] = {};
    int indeks = 0;
    while((input = getch()) != 13  ||  indeks < 1)
    {
        if(indeks < 1 && (input >= '0'  &&  input <= '2'))
        {
            koordinat(x + indeks, y);
            printf("%c", input);
            tampung[indeks] = input;
            indeks++;
        }
        else if(input == 8 && indeks != 0)
        {
            printf("\b \b");
            indeks--;
            tampung[indeks] = '\0';
        }
    }

    return pilih = atoi(tampung);
}

