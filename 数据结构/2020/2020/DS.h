#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdarg.h>
namespace DS
{
	namespace List
	{
		#define  Maxsize 50
		typedef unsigned int Length;
		typedef unsigned int Size;
		typedef int ElemType;
		typedef ElemType* ElemTypePtr;

		typedef struct SqList
		{
			ElemType data[Maxsize];
			Length length;

			SqList()
			{
				memset(data, 0, sizeof(data));
				length = 0;
			}
			SqList(ElemTypePtr D,const Size& size)
			{
				memcpy(data,D,sizeof(D)*size);
				length = size;
			}
			~SqList()
			{
				memset(data, 0, sizeof(data));
				length = 0;
			}
			//打印列表
			void Print()
			{
				std::cout << "列表元素依次为: ";
				for (Length i = 0; i < length; ++i)
				{
					std::cout << data[i] << "  ";
				}
				std::cout << "长度为：" << length;
				std::cout << std::endl;
			}
			//格式化打印列表
			void Printf(const char* format, ...)
			{
// 				if (NULL == format)
// 					return;
// 				char strInfo[1000] = { 0 };
// 				va_list arg_ptr = NULL;
// 				va_start(arg_ptr, format);
// 				vsprintf(strInfo, format, arg_ptr);
// 				va_end(arg_ptr);
// 				fputs(strInfo, stdout);

				va_list ap;
				char *p, *sval;
				int ival;
				double dval;

				va_start(ap, format);
				for (p = ap; *p; p++) {
					if (*p != '%') {
						putchar(*p);
						continue;
					}
					switch (*++p) {
					case 'd':
						ival = va_arg(ap, int);
						printf("%d", ival);
						break;
					case 'f':
						dval = va_arg(ap, double);
						printf("%f", dval);
						break;
					case 's':
						for (sval = va_arg(ap, char *); *sval; sval++)
							putchar(*sval);
						break;
					default:
						putchar(*p);
						break;
					}
				}
				va_end(ap);
				for (Length i = 0; i < length; ++i)
				{
					std::cout << data[i] << "  ";
				}
				std::cout << "长度为：" << length;
				std::cout << std::endl;
			}
			inline bool Empty()
			{
				return length == 0;
			}
			
		}SqList,*SqList;
	}
}
