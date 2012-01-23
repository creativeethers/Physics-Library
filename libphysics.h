
/****************************************
***********CPhysicsLibrary***************
************libphysics.h*****************
*******Copyright(c) Alex Mawla 2012.*****
*********All Rights Reserved.************
*****************************************/

extern float time_velocity (float initial_velocity, float time, float acceleration);

extern float position (float initial_position, float initial_velocity, float time, float acceleration);

extern float position_velocity (float initial_velocity, float acceleration, float initial_position, float final_position);

extern float newt_net_force (float mass, float acceleration);

extern float friction_force (float coeff_of_friction, float normal_force);

extern float centrip_acceleration (float velocity, float radius);

extern float torque (float radius, float force, float theta);

extern float momentum (float mass, float velocity);

extern float energy_kinetic (float mass, float velocity);

extern float newt_power (float force, float velocity, float theta);

extern float period (float frequency);

extern float nuc_energy_freq (float frequency, float Planck);

