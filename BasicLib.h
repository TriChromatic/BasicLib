/* 
 * File:   BasicLib.h
 * Author: Dylan Eicher
 *
 * Created on May 19, 2014, 12:01 AM
 * 
 * Names where made the least confuseing as possible even if it sacrifices length.
 * 
 * Created by Dylan Eicher for easy data manipulation.
 * 
Licensed to the Apache Software Foundation (ASF) under one
or more contributor license agreements.  See the NOTICE file
distributed with this work for additional information
regarding copyright ownership.  The ASF licenses this file
to you under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance
with the License.  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an
"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, either express or implied.  See the License for the
specific language governing permissions and limitations
under the License.
 */

#ifndef BASICLIB_H
#define	BASICLIB_H

#include <string>
#include <vector>

#include "GridPoint.h"

using namespace std;

class BasicLib {
public:
    BasicLib(); //Data manipulation lib (Presumeably done)
    ~BasicLib(); //Deconstructor deletes all possible pointers
    //Write to file for single data types. Write file lib.
    int WriteFileInt(string fileName, int dataChunk); //Appends a int to a file
    int WriteFileString(string fileName, string dataChunk); //Appends a string to a file
    int WriteFileChar(string fileName, char dataChunk); //Appends a char to a file
    int WriteFileFloat(string fileName, float dataChunk); //Appends a float to a file
    int WriteFileDouble(string fileName, double dataChunk); //Appends a double to a file
    //Write to file for arrays. Write file lib. //Presumeably done
    int WriteFileArrInt(string fileName, int dataChunks[], int arrSize); //Writes an array of ints to a file
    int WriteFileArrString(string fileName, string dataChunks[], int arrSize); //Writes an array of strings to a file
    int WriteFileArrChar(string fileName, char dataChunks[], int arrSize); //Writes an array of chars to a file
    int WriteFileArrFloat(string fileName, float dataChunks[], int arrSize); //Writes an array of floats to a file
    int WriteFileArrDouble(string fileName, double dataChunks[], int arrSize); //Writes an array of doubles to a file
    //Read file lib. Reads in files, lots of cool specifics.
    int ReadFileAll(string fileName, string type); //This attempts to read in a whole file into a seletected data type
    //TO DO
    int ReadFileLines(string fileName, int numLines); //This should read in a file but reads in a certain number of lines
    int ReadFileWords(string fileName, int numWords); //This should read in a file but reads in a certain number of words
    int ReadFileChars(string fileName, int numChars); //This should read in a file but reads in a certain number of chars

    string ReadFileLine(string fileName, int numLine); //This should read a specific line in a file
    string ReadFileWord(string fileName, int numWord); //This should read a specific word in a file
    char ReadFileChar(string fileName, int numChar); //This should read a specific char in a file
    //END
    //Data manipulation (Presumeably done)
    void SwapInt(int& initial, int& final); //Swaps an int
    void SawpString(string& initial, string& final); //Swaps a string
    void SwapChar(char& initial, char& final); //Swaps a char
    void SawpFloat(float& initial, float& final); //Swaps a float
    void SwapDouble(double& initial, double& final); //Swaps a double
    //TO DO
    void ReverseArrayInt(int* array[]); //Reverse an array ints
    void ReverseArrayString(string* array[]); //Reverse an array of strings
    void ReverseArrayChar(char* array[]); //Reverse an array of chars
    void ReverseArrayFloat(float* array[]); //Reverse an array of floats
    void ReverseArrayDouble(double* array[]); //Reverse an array of doubles
    //END
    //Get data (Presumeably done)
    int GetFileArrInt(int arrPos); //Used to get an int in an array at a certain position
    string GetFileArrString(int arrPos); //Used to get an string in an array at a certain position
    char GetSpaceChar(); //Retreives the space char
    int GetGrabInt(); //Retrives the temporary int
    string GetGrabString(); //Retrives the temporary string
    char GetGrabChar(); //Retrives the temporary char
    float GetGrabFloat(); //Retrives the temporary float
    double GetGrabDouble(); //Retives the temporary double
    int GetGridSizeX(); //Retrives the x value for the grid size
    int GetGridSizeY(); //Retrives the y value for the grid size
    //Read out data
    void ROIntChunks(); //Displays the data in intChunks
    void ROStringChunks(); //Displays the data in stringChunks
    void ROFloatChunks(); //Displays the data in floatChunks
    void RODoubleChunks(); //Displays the data in doubleChunks
    void ROCharChunks(); //Displays the data in charChunks
    //Display functions
    //In progress
    int DisplayPoints(); //Displays xy points from a vector within the grid size bounds
    void SetGridSize(int newGridSizeX, int newGridSizeY); //Sets the grid size with an X value and Y value
    void SetPointChar(char newGridChar); //Sets the charicter used to display points on the grid
    void CreatePoint(int newXCord, int newYCord); //Creates a new point in the vector of points
    void ListPoints(); //Lists the value of the points in the vector
    void ListPoint(int pointNum);
    int SearchForPoint(int xCord, int yCord); //Searches for matching x and y cords and returns the first value it finds which represents its position in the vector
    void DisplayPointNum(int xCord, int yCord); //Rather confusing between SearchForPoint and this as this does almost the same thing. Though, instead of returning the value it will display it. This is usefull for handling multiple points with the same x and y values
    void ClearPoints();
    //Setting data
    void SetSpaceChar(char spacerCharIn); //Used to set the spacer character when writing to a file
    void SetArrSize(int newArrSize); //Defunct
    //Misc data calculations...
    int GetFibNum(int n); //Gets the number using the fibanacci sequence

private:
    vector<int> intChunks; //Used when reading in a file with ints
    vector<string> stringChunks; //Used when reading in a file with strings
    vector<char> charChunks; //Used when reading in a file with chars
    vector<float> floatChunks; //Used when reading in a file with floats
    vector<double> doubleChunks; //Used when reading in a file with doubles
    vector<GridPoint*> gridPoints; //A vector containing display points objects. The CreatePoint handles creation.
    int grabberInt; //Used as a temp int but it can be retrived with GetGrabInt
    string grabberString; //Used as a temp string but it can be retrived with GetGrabString
    char grabberChar; //Used as a temp char but it can be retrived with GetGrabChar
    float grabberFloat; //Used as a temp float but it can be retrived with GetGrabFloat
    double grabberDouble; //Used as a temp double but it can be retrived with GetGrabDouble
    int gridSizeX = 6; //Default grid size X
    int gridSizeY = 6; //Default grid size Y
    char gridChar = '*'; //Defualt grid point charicter
    char spacerChar = ' '; //The spacer char is the char used between data when writing to a file
};

#endif	/* BASICLIB_H */
