function set-shortcut {

param ( [string]$SourceLnk, [string]$DestinationPath )

    $WshShell = New-Object -comObject WScript.Shell

    $Shortcut = $WshShell.CreateShortcut($SourceLnk)

    $Shortcut.TargetPath = $DestinationPath

    $Shortcut.Save()

    }

set-shortcut "~\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\bgpl.ps1.lnk" "~\Documents\Adobe\Common\BTX\bgpl.ps1"
