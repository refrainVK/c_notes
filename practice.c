//    int array[6] = {0, 1, 2, 3, 4};
//
//    printf("        array = %p\n", array);
//    printf("       &array = %p\n", &array);
//    printf("    array + 1 = %p\n", array + 1);
//    // printf("    array + 1 = %d\n", *(array + 123));
//    printf("&array[0] + 1 = %p\n", &array[0] + 1);
//    printf("   &array + 1 = %p\n", &array + 1);
//
//    printf("\n");
//
//    printf(" sizeof(array) = %lu\n", sizeof(array));
//    printf("sizeof(&array) = %lu\n", sizeof(&array));
//
//    printf("\n");
//
//    char charArr[100] = "abcd";
//    int intArr[3] = {1, 2, 3};
//    printf("%s\n", charArr);
//
//    int *ptrArr[4];
//
//    for (int i = 0; i < 3; i++) {
//        ptrArr[i] = &intArr[i]; /* 赋值为整数的地址 */
//    }
//    printf("%p\n", ptrArr[0]);
//    for (int i = 0; i < 3; i++) {
//        printf("Value of intArr[%d] = %d\n", i, *ptrArr[i]);
//    }
//
//    struct {
//        int a;
//        char b;
//        double c;
//    } s1;
//
//    s1.a = 1;
//    s1.b = 'a';
//    s1.c = 1.1;
//
//
//    struct Books {
//        char title[50];
//        char author[50];
//        char subject[100];
//        int book_id;
//    } book;
//
//    strncpy(book.title, "hello", 100);
//
//    int a = 42;
//    int b = 78;
//    swap(&a, &b);
//    printf("%d %d\n", a, b);
//    printf("Hello, World!\n");
//
//
//    convert_to_hexadecimal(42);
//    printf("\n");
//    printf("%d\n", convert_to_binary(42));
//    return 0;
