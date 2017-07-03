# DLL

1) Build native cpp source code

2) Then create win 32 console project, without secure code checking

3) Create c# project, and write 
  _1. using System.Runtime.InteropServices
  _2. [DllImport (" {path} , CallingConvention ... Cdecl) ]
  _3. pulic static return_type function_name (#parameter)
  _4. then can use
  
  
