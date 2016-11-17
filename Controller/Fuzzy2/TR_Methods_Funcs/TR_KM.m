function [ yl, yr ] = TR_KM(FI, CI)

Rnumber = size(FI,1);

% left
for i = 1:1:Rnumber-1
    for j = 1:1:Rnumber-1
        if(CI(j,1)>CI(j+1,1))
            temp = CI(j,1);
            CI(j,1) = CI(j+1,1);
            CI(j+1,1) = temp;
            temp = FI(j,1);
            FI(j,1) = FI(j+1,1);
            FI(j+1,1) = temp;
        end
    end
end

fn = sum(FI')'/2;
if(sum(fn)==0)
    yn=0;
else
    yn = sum(CI(:,1).*fn)/sum(fn);
end
while(1)
    SwitchPointL = 0;
    for i=1:1:Rnumber-1
        if(yn>=CI(i,1))
            if(yn<=CI(i+1,1))
                SwitchPointL = i;
                break;
            end
        end
    end
    for i=1:1:Rnumber
        if(i<=SwitchPointL)
            fn(i) = FI(i,2);
        else
            fn(i) = FI(i,1);
        end
    end
    if(sum(fn)==0)
        ynprime=0;
    else
        ynprime = sum(CI(:,1).*fn)/sum(fn);
    end
    if(abs(yn-ynprime)<10^-3)
        yl = yn;
        L = SwitchPointL;
        break;
    else
        yn=ynprime;
    end
end

% right
for i = 1:1:Rnumber-1
    for j = 1:1:Rnumber-1
        if(CI(j,2)>CI(j+1,2))
            temp = CI(j,2);
            CI(j,2) = CI(j+1,2);
            CI(j+1,2) = temp;
            temp = FI(j,2);
            FI(j,2) = FI(j+1,2);
            FI(j+1,2) = temp;
        end
    end
end

fn = sum(FI')'/2;
if(sum(fn)==0)
    yn=0;
else
    yn = sum(CI(:,2).*fn)/sum(fn);
end

while(1)
    SwitchPointR = 0;
    for i=1:1:Rnumber-1
        if(yn>=CI(i,2))
            if(yn<=CI(i+1,2))
                SwitchPointR = i;
                break;
            end
        end
    end
    for i=1:1:Rnumber
        if(i<=SwitchPointR)
            fn(i) = FI(i,1);
        else
            fn(i) = FI(i,2);
        end
    end
    if(sum(fn)==0)
        yn=0;
    else
        ynprime = sum(CI(:,2).*fn)/sum(fn);
    end
    if(abs(yn-ynprime)<10^-3)
        yr = yn;
        R = SwitchPointR;
        break;
    else
        yn=ynprime;
    end
end
end
