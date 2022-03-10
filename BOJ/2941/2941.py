msg = input()

msg = msg.replace("c=","c");
msg = msg.replace("c-","c");
msg = msg.replace("dz=","d");
msg = msg.replace("d-","d");
msg = msg.replace("lj","l");
msg = msg.replace("nj","n");
msg = msg.replace("s=","s");
msg = msg.replace("z=","z");

print(len(msg))
