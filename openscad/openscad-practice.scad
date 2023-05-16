/*
Goal
Creating a tooth brush and tip stand
*/
// $fa = 1;
// $fs = 0.4;

brush_bot_rad = 5;
brush_bot_dep = 8;

handle_bot_rad = 10;
handle_bot_dep = 8;

base_rad = 40;
base_dep = 5;

translate([15,15,brush_bot_dep])
    cylinder(r=brush_bot_rad, h=brush_bot_dep, center=true);

translate([-15,15,brush_bot_dep])
    cylinder(r=brush_bot_rad, h=brush_bot_dep, center=true);
    
translate([0,-20,handle_bot_dep])
    cylinder(r=handle_bot_rad, h=handle_bot_dep, center=true);

cylinder(r=base_rad, h=base_dep, center=true);



// dim1 = [100,80,20];
// x = 20;
// rad1 = 50;



// cube(size=dim1, center=true);

// translate([0, 0, 20])
//     cube(size=[x, 80, 20], center=true);

// translate([0, 0, 200]) 
//     rotate([90, 0, 50]) 
//     cylinder(r=20, h=100, center=true);

