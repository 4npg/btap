uses crt;
const 
    max = 30;
var x: array[1..max] of Integer;
    n,i:Integer;
begin
        clrscr;
        readln(n);
        fillchar(x,SizeOf(x),0);
        repeat
            for i:= 1 to n do
                write(x[i]);
                writeln();
            i:=n;
            while(i>0) and (x[i]=1)do Dec(i);
            if i>0 then
                begin
                    x[i]:=1;
                    fillchar(x[i+1],(n-i)*SizeOf(x[1]),0);
                end;
        until i =0;
end.

