#include<stdio.h>
#include"system.h"
int main()
{
        int n = 7;
	    while (n)
		    {
				printf("------------------------------\n");
					printf("-   欢迎来到图书馆管理系统!  -\n");
						printf("------------------------------\n");
							printf("    1、添加图书\n");
								printf("    2、查询图书\n");
									printf("    3、修改图书\n");
										printf("    4、删除图书\n");
											printf("    5、显示图书\n");
												printf("    6、统计信息\n");
													printf("    输入 0 退出\n");
													     
													     scanf("%d",&n);

													             if (n == 1)
															             add ();
														             else if (n == 2)
																          inquiry();
															             else if (n == 3)
																	             change ();
																             else if (n == 4)
																		             Delete ();
																	             else if (n == 5)
																			             display ();
																		             else if (n == 6)
																				             count();

																			         printf("继续访问请输入7,退出请输入0\n");
																				     scanf("%d",&n);
																				         }
	        return 0;
}
