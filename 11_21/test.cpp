/*
假定word_count是一个string到size_t的map,word是一个string,解释下面循环的作用
*/
while(cin>>word)
{
  ++word_count.insert({word,0}).first->second;
}
//请见11_20