#ifndef SPHERENAMESPACE_H
#define SPHERENAMESPACE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

namespace SphereNameSpace {
	class Sphere {
		protected:
			double radius, volume;
			//Protected variables that will be passed down to derived classes
			
		public:
			Sphere (){
				radius = 1;
			}//Default Constructor
			
			Sphere (double r){
				radius = r;
			}//Parameterised Constructor
			
			//Getter and Setters
			double getRadius (){
				return radius;
			}//Returns radius to console
			
			void setRadius (double r){
				radius = r;
			}//Sets radius to the value the user inputs
			
			void calcVolume (){
				volume = (1.3333333333) * 3.14 * (radius * radius * radius);//N.B Had to put 1.3333333333 instead of 4/3 because I was getting a different number for the volume than I should
			}//Calculates the volume of the sphere
			
			virtual void display (){
				cout << fixed << showpoint << setprecision(2);
				cout << "Radius: " << radius << endl;
				cout << "Volume: " << volume << endl;
			}//Displays the radius and volume of the sphere
			
			~Sphere (){
				cout << "Sphere is being deconstructed... \nDone!" << endl;
			}//Deconstructor
	};//Sphere Class
	
	class Ball : public Sphere{
		protected:
			string name;
			//Protected variables that will be passed down to derived classes
			
		public:
			Ball () : Sphere(){
				setName("");
			}//Default Constructor
			
			Ball (double r, string n) : Sphere (r){
				name = n;
			}//Parameterised Constructor
			
			//Getters and Setters
			string getName (){
				return name;
			}//Returns name of the Ball
			
			void setName (string n){
				name = n;
			}//Sets the name of the Ball to what the user inputs
			
			void reset (double r, string n){
				radius = r;
				name = n;
			}//Sets the radius and name of the ball to another set of values
			
			void display (){
				cout << name << " Statistics" << endl;
				Sphere :: display();
			}//Overrides the display() method from Sphere Class
			
			~Ball (){
				cout << "Ball is being deconstructed... \nDone!" << endl;
			}//Deconstructer
	};//Ball Class
	
	class Balloon : public Ball{
		public:
			Balloon () : Ball(){
			}//Default Constructor
			
			Balloon (double r, string n) : Ball (r, n){
			}//Parameterised Constructor
			
			~Balloon (){
				cout << "Ballon is being deconstructed... \nDone!" << endl;
			}//Deconstructor
	};//Balloon Class
}//Namespace for the Classes Sphere, Ball and Balloon
#endif//Creates Header File
