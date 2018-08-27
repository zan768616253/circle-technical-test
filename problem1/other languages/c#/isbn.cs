using System;
using System.Linq;

public class Program
{
	private static int calISBN13(string isbn) {
		int sum = 0;
		int[] isbn_arr = isbn.ToCharArray().Select(i => Int32.Parse(i.ToString())).ToArray();
		for (int i = 0; i < isbn_arr.Length; i++) {
			int item = isbn_arr[i] * (i % 2 == 0 ? 1 : 3);
			sum += item;
		}

		return (10 - sum % 10);
	}

	public static void Main()
	{
		int res = calISBN13(978014300723.ToString());
		Console.Write(res);
	}
}