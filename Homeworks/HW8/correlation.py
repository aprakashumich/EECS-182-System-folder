# Import the Python interface to the R programming language
# R is often used for plotting and statistical analysis. You
# may use it your statistics courses.

from rpy import r

'''
Data to be plotted and analyzed. Simply put it in two lists. Here, 19 years corresponds to an income of $125,000, 20 years corresponds to $100,000, etc. Some years repeat because, for example, there is data for three people with 16 years of
education and they could have different salaries.
'''
education_years = [19,20,16,16,18,12,14,12,16,17];
income = [125000,100000,40000, 35000, 41000, 29000, 35000, 24000, 50000, 60000];

# do the scatter plot
# Specify the output picture size and format.
print "Writing output graph to file: scatterplot.png"
print "To view it in Linux, you can use the File Browser and double-click."
print "For command-line viewing, use the gthumb image viewer as follows:"
print "% gthumb scatterplot.png"

r.png("scatterplot.png", width=400, height=350);
# Draw the plot. xlim and ylim specify the range for the axis. We
# prefer to keep the graph origin at 0,0.
r.plot(x=education_years, y=income, xlab="Education Years", ylab = "Income",
       main = "Scatter Plot with Least Squares Fit");

# Compute the least-square fit object between education_years and income.
leastsquarefit = r.lsfit(education_years, income);

#print "leastsquarefit = ", leastsquarefit; # for debugging.

# Compute the slope of the line and the y-intercept from the least-square
# fit object.
gradient = leastsquarefit['coefficients']['X'];
yintercept = leastsquarefit['coefficients']['Intercept'];

# Now plot the least square fit line.
r.abline(a=yintercept, b=gradient, col="red");
# Now turn off the graphics device. This is a R operation to "close"
# the graph.
r.dev_off();
