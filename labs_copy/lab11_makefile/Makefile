show_trial: jury_functions.o show_trial.o
	g++ jury_functions.o show_trial.o -o show_trial

show_trial.o: show_trial.cpp jury_functions.h
	g++ -c show_trial.cpp 

jury_functions.o: jury_functions.cpp jury_functions.h
	g++ -c jury_functions.cpp

clean:
	rm *.o show_trial
