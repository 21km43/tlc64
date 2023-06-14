main() {
        int a, b, c;
        a = 0;
		b = &a;
        while (a < 10) { 
			a = a + 1;
			c = *b;
			put_int(c);
		}
        return 0;
}
