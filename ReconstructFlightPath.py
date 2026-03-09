class Solution:
    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        dic = defaultdict(list)
        for ticket in sorted(tickets)[::-1]:
            source, destination = ticket
            dic[source].append(destination)

        stack = ["JFK"]
        res = []
        while stack:
            node = stack[-1]
            if not dic[node]:
                res.append(stack.pop())
            else :
                stack.append(dic[node].pop())

        return res[::-1]
