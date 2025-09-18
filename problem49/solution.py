class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        solution = defaultdict(list)
        
        for s in strs:
            count = [0] * 26  # alfabeto

            for c in s:
                count[ord(c) - ordc("a")] += 1

            solution[tuple(count)].append(s)


        return list(solution.values())
