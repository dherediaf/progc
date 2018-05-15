#include "md-simul.h"

void initial_conditions(Particle & body)
{
  body.Rz = 3.0;
  body.Rx = 1.0;
  body.Ry = 1.0;
  body.Vy = 1.5;
  body.Vx = 4.9;
  body.Vz = 8.0;

  body.rad = 0.235;
  body.mass = 0.29698;
}

void compute_force(Particle & body)
{
  // reset force
  body.Fx = body.Fy = body.Fz = 0.0;

  // gravitational force
  body.Fz += body.mass*G;

// LOS DELTAS PUEDEN CAMBIAR, YA QUE SE SUPONE QUE LA ESFERA ESTA EN UNA CAJA CERRADA //

  // force with ground
  double delta = body.rad - body.Rz;
  if (delta >= 0) {
    body.Fz += K*delta;
    body.Fz -= 1.9876*body.Vz;
  }
  
  //force with wall x=4
  double delta2 = body.rad -(4.0 - body.Rx);
  if (delta2 >= 0) {
    body.Fx -= K*delta2;
    body.Fx += 1.9876*body.Vx;
  }
  
  //force with another wall y=5
  double delta3 = body.rad -(5.0 - body.Ry);
  if (delta3 >= 0) {
    body.Fy -= K*delta3;
    body.Fy += 1.9876*body.Vy;
  }

  //force with another wall y=0
  double delta4 = body.rad -(body.Ry - 0.0);
  if (delta4 >= 0) {
    body.Fy += K*delta4;
    body.Fy -= 1.9876*body.Vy;
  }

  //force with another wall x=0
  double delta5 = body.rad -(body.Rx - 0.0);
  if (delta5 >= 0) {
    body.Fx += K*delta5;
    body.Fx -= 1.9876*body.Vx;
  }

  //force with wall z=5
  double delta6 = body.rad -(5.0 - body.Rz);
  if (delta6 >= 0) {
    body.Fz -= K*delta6;
    body.Fz += 1.9876*body.Vz;
  }

  
  
}

void start_integration(Particle & body, const double & dt)
{
  body.Vx -= body.Fx*dt/(2*body.mass);
  body.Vy -= body.Fy*dt/(2*body.mass);
  body.Vz -= body.Fz*dt/(2*body.mass);
}

  void time_integration(Particle & body, const double & dt)
{
  // leap-frog
  body.Vx += body.Fx*dt/(body.mass);
  body.Vy += body.Fy*dt/(body.mass);
  body.Vz += body.Fz*dt/(body.mass);
  body.Rx += body.Vx*dt; 
  body.Ry += body.Vy*dt; 
  body.Rz += body.Vz*dt; 
}

void print(Particle & body, double time)
{
  std::cout << time << "  " 
            << body.Rx << "  "
            << body.Ry << "  "
            << body.Rz << "  "
            << body.Vx << "  "
            << body.Vy << "  "
            << body.Vz << "  "
            << "\n";
}
