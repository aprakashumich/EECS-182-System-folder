def walktogoal(distance):
    if (distance == 0):
        print "Reached goal";
        return;
    else:
        print "Take one step";
        print "distance = ", distance;
        walktogoal(distance-1);
    

def buggywalk(distance):
    print "Take one step";
    print "distance = ", distance;
    buggywalk(distance-1);
