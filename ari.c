string ari(string s)
{
int i;
float char = 0.000000;
float words = 0.000000;
float sentence = 0.000000;
for(i = 0;s[i] != '\0'; i++)
{
if(isalnum(s[i]))
{
++char;
}
}
for(i = 0;s[i] != '\0'; i++)
{
if(s[i] == '.' || s[i] == '?' || s[i] == '!')
{
++sentence;
}
}
for(i = 0;s[i] != '\0'; i++)
{
if(s[i] == ' ')
{
++words;
}
}

float result;
result = (4.71 * char/words) + (0.5 * words/sentence) - 21.43;
int x;
 string w;
 x = ceil(result);
 if(x == 1)
 {
 w = "Kindergarden";
 return w;
 }
if(x == 2)
 {
 w = "First/Second Grade";
 return w;
 } 
 if(x == 3)
 {
 w = "Third Grade";
 return w;
 }
 if(x == 4)
 {
 w = "Fourth Grade";
 return w;
 }
 if(x == 5)
 {
 w = "Fifth Grade";
 return w;
 }
 if(x == 6)
 {
 w = "Sixth Grade";
 return w;
 }
 if(x == 7)
 {
 w = "Seventh Grade";
 return w;
 }
 if(x == 8)
 {
 w = "Eighth Grade";
 return w;
 }
 if(x == 9)
 {
 w = "Ninth Grade";
 return w;
 }
 if(x == 10)
 {
 w = "Tenth Grade";
 return w;
 }
 if(x == 11)
 {
 w = "Eleventh Grade";
 return w;
 }
 if(x == 12)
 {
 w = "Twelfth Grade";
 return w;
 }
 if(x == 13)
 {
 w = "College Student";
 return w;
 }
 if(x == 14)
 {
 w = "Professor";
 return w;
 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
