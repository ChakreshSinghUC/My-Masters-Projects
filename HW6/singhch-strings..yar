rule exerule
{
    strings:
	$s1 = "Applogs.txt"
	$s2 = "money"
	$s3 = "Future already retrieved"
	$s4 = "malware"
	$s5 = "AIMClient"
	$s6 = "Broken promise"
	$s7 = "Promise already satisfied"
        $my_hex_string1 = { 75 73 61 6F 6E }
	$my_hex_string2 = { 6D 61 6C }
	$my_hex_string3 = { 77 61 72 65 }
    condition:
	all of them      
}
