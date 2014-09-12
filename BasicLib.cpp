/* 
 * File:   BasicLib.cpp
 * Author: Dylan Eicher
 * 
 * A rather basic but possibly useful data maniuplation library. Streamlined as much as possible
 * for high speed projects.
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
 * 
 * Created on May 19, 2014, 12:01 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include "BasicLib.h"

BasicLib::BasicLib ( ) {

}

int BasicLib::WriteFileArrChar ( string fileName, char dataChunks[], int arrSize ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        for ( int i = 0; i < arrSize; i++ ) {
            outFile << dataChunks[i] << spacerChar;
        }
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileArrDouble ( string fileName, double dataChunks[], int arrSize ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        for ( int i = 0; i < arrSize; i++ ) {
            outFile << dataChunks[i] << spacerChar;
        }
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileArrFloat ( string fileName, float dataChunks[], int arrSize ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        for ( int i = 0; i < arrSize; i++ ) {
            outFile << dataChunks[i] << spacerChar;
        }
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileArrInt ( string fileName, int dataChunks[], int arrSize ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        for ( int i = 0; i < arrSize; i++ ) {
            outFile << dataChunks[i] << spacerChar;
        }
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileArrString ( string fileName, string dataChunks[], int arrSize ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        for ( int i = 0; i < arrSize; i++ ) {
            outFile << dataChunks[i] << spacerChar;
        }
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileChar ( string fileName, char dataChunk ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        outFile << dataChunk << spacerChar;
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileDouble ( string fileName, double dataChunk ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        outFile << dataChunk << spacerChar;
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileFloat ( string fileName, float dataChunk ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        outFile << dataChunk << spacerChar;
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileInt ( string fileName, int dataChunk ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        outFile << dataChunk << spacerChar;
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

int BasicLib::WriteFileString ( string fileName, string dataChunk ) {
    ofstream outFile ( fileName.c_str ( ), ios::app );
    if ( outFile.is_open ( ) ) {
        outFile << dataChunk << spacerChar;
    } else {
        cout << "File failed to open!";
        return 1;
    }
    outFile.close ( );
    return 0;
}

void BasicLib::SawpFloat ( float& initial, float& final ) {
    float temp = initial;
    initial = final;
    final = temp;
}

void BasicLib::SawpString ( string& initial, string& final ) {
    string temp = initial;
    initial = final;
    final = temp;
}

void BasicLib::SwapChar ( char& initial, char& final ) {
    char temp = initial;
    initial = final;
    final = temp;
}

void BasicLib::SwapDouble ( double& initial, double& final ) {
    double temp = initial;
    initial = final;
    final = temp;
}

void BasicLib::SwapInt ( int& initial, int& final ) {
    int temp = initial;
    initial = final;
    final = temp;
}

int BasicLib::ReadFileAll ( string fileName, string type ) {
    ifstream inFile ( fileName.c_str ( ) );
    if ( type == "string" ) {
        if ( inFile.is_open ( ) ) {
            while ( inFile >> grabberString ) {
                stringChunks.push_back ( grabberString );
            }
        } else {
            cout << "File failed to open!";
            return 1;
        }
    } else if ( type == "char" ) {
        if ( inFile.is_open ( ) ) {
            while ( inFile >> grabberChar ) {
                charChunks.push_back ( grabberChar );
            }
        } else {
            cout << "File failed to open!";
            return 1;
        }
    } else if ( type == "float" ) {
        if ( inFile.is_open ( ) ) {
            while ( inFile >> grabberFloat ) {
                floatChunks.push_back ( grabberFloat );
            }
        } else {
            cout << "File failed to open!";
            return 1;
        }
    } else if ( type == "int" ) {
        if ( inFile.is_open ( ) ) {
            while ( inFile >> grabberInt ) {
                intChunks.push_back ( grabberInt );
            }
        } else {
            cout << "File failed to open!";
            return 1;
        }
    } else if ( type == "double" ) {
        if ( inFile.is_open ( ) ) {
            while ( inFile >> grabberDouble ) {
                doubleChunks.push_back ( grabberDouble );
            }
        } else {
            cout << "File failed to open!";
            return 1;
        }
    } else {
        cout << "Not a valid type!";
        return 1;
    }
    return 0;
}

void BasicLib::ROCharChunks ( ) {
    int i = 0;
    while ( i < charChunks.size ( ) ) {
        cout << charChunks[i];
        i++;
    }
}

void BasicLib::RODoubleChunks ( ) {
    int i = 0;
    while ( i < doubleChunks.size ( ) ) {
        cout << doubleChunks[i];
        i++;
    }
}

void BasicLib::ROFloatChunks ( ) {
    int i = 0;
    while ( i < floatChunks.size ( ) ) {
        cout << floatChunks[i];
        i++;
    }
}

void BasicLib::ROIntChunks ( ) {
    int i = 0;
    while ( i < intChunks.size ( ) ) {
        cout << intChunks[i];
        i++;
    }
}

void BasicLib::ROStringChunks ( ) {
    int i = 0;
    while ( i < stringChunks.size ( ) ) {
        cout << stringChunks[i];
        i++;
    }
}

char BasicLib::GetGrabChar ( ) {
    return grabberChar;
}

int BasicLib::GetGrabInt ( ) {
    return grabberInt;
}

double BasicLib::GetGrabDouble ( ) {
    return grabberDouble;
}

float BasicLib::GetGrabFloat ( ) {
    return grabberFloat;
}

string BasicLib::GetGrabString ( ) {
    return grabberString;
}

void BasicLib::SetSpaceChar ( char spacerCharIn ) {
    spacerChar = spacerCharIn;
}

/*Light weight graphing tools to use for data display. Very flexable though.*/

int BasicLib::DisplayPoints ( ) {
    //In progress. Also my code is having existential problems :/
    int y = gridSizeY - 1;
    bool iAmALie;
    while ( y < gridSizeY && y > -gridSizeY ) {
        for ( int x = -gridSizeX + 1; x < gridSizeX && x > -gridSizeX; x++ ) {
            for ( int i = 0; i < gridPoints.size ( ); i++ ) {
                if ( gridPoints[i]->WhoAmI ( x, y ) == true ) {
                    cout << gridChar;
                    iAmALie = false;
                    break;
                } else {
                    iAmALie = true;
                } //Else
            }//For
            if ( iAmALie == true ) {
                cout << spacerChar;
            }//If
        }//For
        cout << endl;
        y--;
    }//While
    return 0; //Lets us know where good! Usually this would be void but sometimes its a bit weird so people debugging might appreciate it.
}

void BasicLib::DisplayPointNum ( int xCord, int yCord ) {
    for ( int i = 0; i < gridPoints.size ( ); i++ ) {
        if ( gridPoints[i]->WhoAmI ( xCord, yCord ) == true ) {
            cout << i << endl;
        }
    }
}

int BasicLib::SearchForPoint ( int xCord, int yCord ) {
    for ( int i = 0; i < gridPoints.size ( ); i++ ) {
        if ( gridPoints[i]->WhoAmI ( xCord, yCord ) == true ) {
            return i;
        }
    }
}

void BasicLib::ListPoints ( ) {
    for ( int i = 0; i < gridPoints.size ( ); i++ ) {
        cout << gridPoints[i]->GetX ( ) << spacerChar << gridPoints[i]->GetY ( ) << endl;
    }
}

void BasicLib::ListPoint ( int pointNum ) {
    cout << gridPoints[pointNum]->GetX ( ) << spacerChar << gridPoints[pointNum]->GetY ( ) << endl;
}

void BasicLib::ClearPoints ( ) {
    /*
     *Here we try to be extra safe by deleteing all the pointers
     *THEN calling the clear function just as a double check.
     */
    for ( int i = 0; i < gridPoints.size ( ); i++ ) {
        delete gridPoints[i];
    }
    gridPoints.clear ( );
}

void BasicLib::SetGridSize ( int newGridSizeX, int newGridSizeY ) {
    gridSizeX = newGridSizeX;
    gridSizeY = newGridSizeY;
}

int BasicLib::GetGridSizeX ( ) {
    return gridSizeX;
}

int BasicLib::GetGridSizeY ( ) {
    return gridSizeY;
}

void BasicLib::SetPointChar ( char newGridChar ) {
    gridChar = newGridChar;
}

void BasicLib::CreatePoint ( int newXCord, int newYCord ) {
    gridPoints.push_back ( new GridPoint ( newXCord, newYCord ) );
}

int BasicLib::GetFibNum ( int n ) {
    if ( 1 == n || 2 == n ) {
        return 1;
    } else {

        return GetFibNum ( n - 1 ) + GetFibNum ( n - 2 );
    }
}

BasicLib::~BasicLib ( ) {
    for ( int i = 0; i < gridPoints.size ( ); i++ ) {
        delete gridPoints[i];
    }
}
