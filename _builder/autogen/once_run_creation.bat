; should be called once
; preventing accidancly run
goto exit

; _call_ _FolderName_ _Namespace_ _ClassName_
call create sorting Sorting BubbleSort
call create sorting Sorting TimSort

:exit
