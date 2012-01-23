
/****************************************
***********CPhysicsLibrary***************
************libphysics.c*****************
*******Copyright(c) Alex Mawla 2012.*****
*********All Rights Reserved.************
*****************************************/

#include <stdio.h>
#include "libphysics.h"
#include <math.h>

float time_velocity (float initial_velocity, float time, float acceleration)
{
    float final_velocity;
    final_velocity=initial_velocity+ acceleration * time;
    return final_velocity;
}


float position (float initial_position, float initial_velocity, float time, float acceleration)
{
    float final_position;
    final_position=(initial_position + (initial_velocity*time) + (0.5*acceleration*time*time));
    return final_position;
}

float position_velocity (float initial_velocity, float acceleration, float initial_position, float final_position)
{
    float final_velocity;
    final_velocity=sqrtf(((initial_velocity*initial_velocity)+ (2*acceleration*(final_position-initial_position))));
    return final_velocity;
}

float newt_net_force (float mass, float acceleration)
{
    float force;
    force= mass * acceleration;
    return force;
}

float friction_force (float coeff_of_friction, float normal_force)
{
    float force_of_friction;
    force_of_friction=coeff_of_friction*normal_force;
    return force_of_friction;
}

float centrip_acceleration (float velocity, float radius)
{
    float acceleration;
    acceleration= (velocity*velocity)/radius;
    return acceleration;
}

float torque (float radius, float force, float theta)
{
    float torq;
    torq=radius*force * sinf(theta);
    return torq;
}

float momentum (float mass, float velocity)
{
    float m;
    m=mass*velocity;
    return m;
}

float energy_kinetic (float mass, float velocity)
{
    float kinetic_energy;
    kinetic_energy=0.5*mass*velocity*velocity;
    return kinetic_energy;
}


float newt_power (float force, float velocity, float theta)
{
    float p;
    p=force*velocity*cosf(theta);
    return p;
}

float period (float frequency)
{
    float p;
    p=1/frequency;
    return p;
}

float nuc_energy_freq (float frequency, float Planck)
{
    float energy;
    energy=Planck*frequency;
    return energy;
}






