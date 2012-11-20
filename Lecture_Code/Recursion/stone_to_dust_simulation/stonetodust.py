def turn_stone_into_dust(stone):
    if (isdust(stone)):
       print "We got a dust piece! Nothing more to do on the piece!";
       return;
    else:
       (piece1, piece2) = strike_hammer(stone);
       turn_stone_into_dust(piece1);
       turn_stone_into_dust(piece2);

def isdust(stone):
    # Stones of size 1 or smaller are considered to be dust
    if (stone <= 1):
        return True;
    else:
        return False;


def strike_hammer(stone):
    print "Striking hammer on a stone of size:", stone;
    # Divide stone into two smaller pieces.
    piece1 = stone / 2;
    piece2 = stone - piece1;
    print "Created stones of size:", piece1, "and", piece2;
    return (piece1, piece2);

def main():
    # Turn a stone of volume 7 units into dust.
    turn_stone_into_dust(7);

main();
