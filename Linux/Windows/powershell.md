[powershell](aka.ms/powershell)
[download Powershell](aka.ms/Get-Powershell)
===
- Everything is an Object
* cmdlet [verb-noun]===[Verb-Noun]    # noun always singlaur
	+ cd -> cd\ -> set-location c:/
	+ ls -> dir -> get-childitem
	+ pwd -> get
	+ mkdir -> md -> 
	+ echo -> echo -> write-output
	+ clear -> cls -> clear-host
	+ cat -> type -> get-content
	+ cp -> copy -> copy-item
	+ alias -> -> get-alias |>gal
	+ get-alias -defination get-process
	+ gal pwd
	+ gal g*
	+ man -> help -> get-help
		+ update-help -force
		+ save-help
		+ get-help *service*
		+ get-help get-service -detailed
		+ get-help get-service -example
		+ get-help get-service -full
		+ get-help get-service -online
		+ get-help get-service -showWindow
		+ get-help about-*
		+ get-help -category asdasf
		+ get-verb | measure # measure is an aliass for meature-object







	** Windows Native Commands
	+ ping 1.1.1.1
	+ notepad
	+ calc
	+ mspaint
	+ ipconfig /all
	+ 
	+ 
	+ 
	+ statement separetor ;
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ get-childitem | format-table  # defualt
		+ get-childitem | format-table -property @(name, countLine)
	+ get-childitem | format-list

	+ get-childitem | out-file
	+ get-childitem | export-csv
	+ get-childitem | export-clixml
	+ get-childitem | export-html


	+ import-csv
		+ $students = import-csv -path "studenyts-degrees.csv" 
		+ $students = $students | foreach { $_.math = [int]$_.math } 
		+ $students = $students | foreach { $_.english = [int]$_.english }
		+ foreach { $_.math } | measure -average
		+ foreach { $_.english } | measure -average
	+ import-xml
	+ import-json
	+ 
	+ ConvertTo-xml
	+ ConvertTo-html
	+ ConvertTo-Json
	+ 


	+ get-childitem | where { $_.extension -eq ".txt" }
	+ get-childitem | where { $_.name -eq "file.txt" }
	+ get-process | where { $_.CPU -gt 20 } | measure 
	+ get-process | where { $_.CPU -gt 20 } | sort { $_.id }
	+ get-process | forEach { $_.id -gt 4000 } | foreach { $_.CPU } | measure -average -sum
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 


	+ Object
		+ properties 
		+ NoteProperties
		+ Methods


		+ gettype()
		+ gettype().getProperties()
		+ gettype().getNoteProperties()
		+ gettype().getMethods()


	+ get-members
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ 
	+ get-service
	+ get-process
	+ get-comamnd
	+ 
	+ 
	+


	+ Icollection
		+ @()	# Array
		+ @{}	# HashTable
			+ .add()
			+ .getEnumerator() | measure
			+ [psCustomObject]@{}




* Scripting
	+ .ps1 Extention
	+ set-executionPolicy unrestricted
	+ ./script.ps1

```powershell
write-output "Enter First Number:"
$num1 = [int](read-host)
# $num1.getType()
write-output "Enter Second Number:"
$num2 = [int](read-host)

write-output "$num1 + $num2 = $($num1 + $num2)"
```

```powershell
$arr = @(Sabry, 23)
$ht = @{name = Sabry; Age = 23}
```


```powershell
$files = get-childitems

$files | forEach-object
{ 
	$numOfLines = (get-content $_).length()
	$_ | add-member -notepropertymembers @{ lineCount = $numOfLines }
}

$files | format-table -property @('name', 'lineCount')

```




- Microfoft Virtual Academy
- JumpStart
- Microsoft Ignite


