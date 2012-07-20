L = 75e-6;
Ra = 6.25;
Rb = 34.1;
Ca = 800e-6;
Cb = 146.6e-6;
vin = 1.5;

A1 = [0,0,0;0,-1/(Ra*Ca),0;0,0,-1/(Rb*Cb)]
A2 = [0,-1/L,0;1/Ca,-1/(Ra*Ca),0;0,0,-1/(Rb*Cb)]
A3 = [0,0,-1/L;0,-1/(Ra*Ca),0;1/Cb,0,-1/(Rb*Cb)]

b = [vin/L;0;0]

a1 = [0,0,0;0,-200,0;0,0,-200.037607070129]'
a2 = [0,-1250,0;13333.3333333333,-200,0;0,0,-200.037607070129]'
a3 = [0,0,-6821.2824010914;0,-200,0;13333.3333333333,0,-200.037607070129]'