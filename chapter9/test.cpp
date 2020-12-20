#include <stack>
using std::stack;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	    auto& expr = "This is (Mooophy(awesome)((((wooooooooo))))) and (ocxs) over";
	        auto repl = '#';
		    auto seen = 0;

		        stack<char> stk;

			    for (auto c : expr) {
				            stk.push(c);
					            if (c == '(') ++seen;   // open
						            if (seen && c == ')') { // pop elements down to the stack
								                while (stk.top() != '(') stk.pop();
										            stk.pop();      // including the open parenthesis
										            stk.push(repl); // push a value indicate it was replaced
											                --seen;         // close
													        }
							        }

			        // Test
				//     string output;
				//         for (; !stk.empty(); stk.pop()) output.insert(output.begin(), stk.top());
				//             cout << output << endl; // "This is # and # over"
				//             }
}
