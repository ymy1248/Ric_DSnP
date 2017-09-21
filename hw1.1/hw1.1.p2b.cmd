nl -n ln hw1.1.p2.log | sed 's/ /:/' | grep -v '   Darr (nothing)' | grep 'Output Transition Time' | sort -nt: -k3 > hw1.1.p2b.lo

nl -n ln hw1.1.p2.log: can only use nl, because cat can't aline left.
sed 's/ /:/': replace the first space with ':'
grep -v '  Darr (nothing)': filter out '  Darr (nothing)'
grep 'Output Transition Time': find line contains 'Output Transition Time'
sort -nt: -k3: use ':' to cut block, -k3 means use the third block
> hw1.1.p2b.lo: redirect to hw1.1.p2b.lo file
