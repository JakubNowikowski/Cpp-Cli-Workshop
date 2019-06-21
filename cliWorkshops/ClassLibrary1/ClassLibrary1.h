#pragma once

using namespace System;
using namespace cli;
using namespace System::Text;

namespace CliNamespace {
	class UnmanagedClass {
	public:
		void insertion_sort(int a[], int n) {
			for (int i = 1; i < n; i++)
			{
				int insert = a[i];
				int j = i - 1;
				while (j > 0 && a[j] > insert)
				{
					a[j + 1] = a[j];
					j = j - 1;
				}
				a[j + 1] = insert;
			}
		}
	};

	public ref class ManagedClass {
	private:
		UnmanagedClass *uc;
	public:
		ManagedClass() {
			uc = new UnmanagedClass();
		}
		void insertion_sort(array<int>^ a) { // handler
			//auto sb = gcnew StringBuilder(); //c# object
			pin_ptr<int> p = &a[0];
			uc->insertion_sort(p, a->Length);
		}
		~ManagedClass() {
			delete uc;
		}

	};

}
