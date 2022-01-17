class Solution {
    public boolean wordPattern(String p, String s) {
        
         int n = p.length();
         String[] a = s.split(" ");
        
        if(n != a.length)
            return false;
        
        Map<Character, String> mp = new HashMap<>();
        Map<String, Boolean> mp2 = new HashMap<>();
        
        for(int i = 0; i<n; i++)
        {
            char c = p.charAt(i);
            if(mp.containsKey(c))
            {
                String str = mp.get(c);   
                if(str.equals(a[i]) == false)
                    return false;
            }
            else{
                
                if(mp2.containsKey(a[i]) == true)
                    return false;
                mp2.put(a[i], true);
                mp.put(c, a[i]);
            }
        }
        return true;
    }
}
