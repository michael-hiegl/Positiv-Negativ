//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Positiv Negativ	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 30.11.2021 18:52:07
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Variable = 0;



	//Code
	printf("Zahl eingeben\n");
	scanf("%i", &i_Variable);

	if (i_Variable > 0)
	{
		printf("Die Zahl ist positiv\n");
	}

	else if (i_Variable == 0)
	{
		printf("Weder positiv noch negativ");
	}

	else
	{
		printf("Die Zahl ist negativ");
	}



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}