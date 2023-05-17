
intersection() {
difference() {
    sphere(r=10);
    translate([12,0,0])
        sphere(r=10);

    translate([0, -12, 0]) {
        sphere(r=10);
    }
}

union() {
translate([0, 0, 5]) {
    sphere(r=10);
}
translate([10, 0, 5]) {
    sphere(r=10);
}
}
}