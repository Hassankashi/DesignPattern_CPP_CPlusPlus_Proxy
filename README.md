# MATLAB Code Musculoskeletal Modelintegrated Iterative Learning Control (MMILC) #

Musculoskeletal model accelerates the self-learning of iterative learning control (ILC) to accomplish repetitive joint movements.


## How To Run The Code ##
In order to run the code, open **run_ilc.m** and then run it in matlab or octave environment.

## Datset ##
The data comes from six subject from article ***Artificially induced joint movement control with musculoskeletal
model-integrated iterative learning algorithm***.
Such as:
* Mass Gravitational Length [Nm/rad] `mgl = [7.56 9.05 8.81 10.02 8.50 9.01];`
* Elastic Coefficient [Nm/rad]       `lambda =[ 2.72 2.20 1.98 3.01 2.52 3.60]; `
* Angualr Velocity [rad]			 `Theta0= [0.30 0.30 0.02 -0.05 -0.02 0.09];`
* Viscosity [Nms/rad]  				 `Mu =[ 0.27 0.18 0.19 0.23 0.19 0.26];`
* Inertia of shank [kgm2] 		     `J =[0.265 0.298 0.274 0.360 0.291 0.277];`		
* pw_threshold						 `pw_threshold=[200 180 150 180 200 220];`
* pw_saturation 					 `pw_saturation=[500 500 500 500 500 500];`	

## Functions ##
There are two functions to research ilc method as follows:

### ILC ###
It is working on subjects data.
The desired is: `Desired=@(t)20*sin(((5*pi*t)/16)-(pi/2))+20;`


### ILC_IndividualA ###
It is working on subjects A.

### Error ###
RMSE will be calculated as follow:  `r=sqrt(sum((qactual(:)-qdesired(:)).^2)/numel(qactual));`Musculoskeletal Modelintegrated Iterative Learning Control (MMILC) 

Musculoskeletal model accelerates the self-learning of iterative learning control (ILC)
to accomplish repetitive joint movements.

## How To Run The Code ##
In order to run the code, open **run_ilc.m** and then run it in matlab or octave environment.

## Datset ##
The data comes from six subject from article **Artificially induced joint movement control with musculoskeletal
model-integrated iterative learning algorithm**.
Such as:
* Mass Gravitational Length [Nm/rad] `mgl = [7.56 9.05 8.81 10.02 8.50 9.01];`
* Elastic Coefficient [Nm/rad]       `lambda =[ 2.72 2.20 1.98 3.01 2.52 3.60]; `
* Angualr Velocity [rad]			 `Theta0= [0.30 0.30 0.02 -0.05 -0.02 0.09];`
* Viscosity [Nms/rad]  				 `Mu =[ 0.27 0.18 0.19 0.23 0.19 0.26];`
* Inertia of shank [kgm2] 		     `J =[0.265 0.298 0.274 0.360 0.291 0.277];`		
* pw_threshold						 `pw_threshold=[200 180 150 180 200 220];`
* pw_saturation 					 `pw_saturation=[500 500 500 500 500 500];`	

## Functions ##
There are two functions to research ilc method as follows:

### ILC ###
It is working on subjects data.
The desired is: `Desired=@(t)20*sin(((5*pi*t)/16)-(pi/2))+20;`
*pulse width sequence calculated by the musculoskeletal model
*pw_thereshold: if p(t)<=0
*p(t)(pwsat − pwthr ) + pwthr if: 0<p(t)<1
*pwsat if  p(t)>=1

There are some coefficient to help us to reach the answer:

* kp and kd => are both PID Parameteres
* u_k+1(t) = uk(t) + kp(Theta_d(t) - Theta(t)) + kd(Theta_prim_d(t) - Theta_prim(t))
* u0(t) = pw(t)
	

### ILC_IndividualA ###
It is working on subjects A.

### Error ###
RMSE will be calculated as follow:  `r=sqrt(sum((qactual(:)-qdesired(:)).^2)/numel(qactual));`
