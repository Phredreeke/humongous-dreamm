// script to make an ini file so the game thinks it's installed

script[makecfg]:
    code = [[[$(CRLF)
    if (!file_exists("$$(rootpath)\\WINDOWS\\hegames.ini"))
    {    
    if (file_exists("$$(rootpath)\\hegames\\PuttRace.(b)"))
      {

      file_save("$$(rootpath)\\WINDOWS\\hegames.ini", "`h:0D 0A 5B 50 55 54 54 52 41 43 45 5D 0D 0A 53 68 6F 77 53 74 61 72 74 75 70 41 67 61 69 6E 3D 31 0D 0A 44 49 53 4B 32 46 49 4C 45 3D 63 3A 5C 68 65 67 61 6D 65 73 5C 50 75 74 74 52 61 63 65 2E 28 62 29 0D 0A");
      }
    }
    ]]]
end


