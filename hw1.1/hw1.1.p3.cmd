vim ./hw1.1.p3.dat
gg
" go to the start of file
qj
" record MACRO in j
/Name
" search for Name
dtU
" delete untill 'U'
J
" join the next line
3dt'space'
" do 3 times delete till space
J
" join the next line
2dt'space'
" do 2 times delete till space
q
" end recording MACRO
:%normal @j
" do j MACRO untill end of the file
q
" quit search result
:w ./hw1.1.p3.log
" save and quit

