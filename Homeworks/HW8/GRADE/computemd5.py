import md5
import sys

if __name__ == "__main__":
    argv = sys.argv;
    filename = argv[1];
    f = open(filename);
    content = f.read();
    content = content.strip();
    f.close();
    md = md5.new();
    md.update(content);
    print md.hexdigest();


