# DLL

1) Build native cpp source code

2) Then create win 32 console project, without secure code checking

3) Create c# project, and write 

  1. using System.Runtime.InteropServices
  2. [DllImport (" {path} , CallingConvention ... Cdecl) ]
  3. pulic static return_type function_name (#parameter)
  4. then can use
  
  
