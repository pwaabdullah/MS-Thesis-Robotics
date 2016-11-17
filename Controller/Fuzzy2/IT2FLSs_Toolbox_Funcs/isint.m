function bout=isint(x)
bout=~( isempty(x) || ~isa(x,'double') || (round(x)~=x)  );