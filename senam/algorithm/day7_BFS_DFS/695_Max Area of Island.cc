public int maxAreaOfIsland(int[][] grid) {
        if (grid == null || grid.length == 0 || grid[0].length == 0) return 0;
        int M = grid.length;
        int N = grid[0].length;
        boolean[][] visited = new boolean[M][N];
        int res = 0;
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    res = Math.max(res, bfs(grid, visited, i, j));
                }
            }
        }
        return res;
    }

    private int bfs(int[][] grid, boolean[][] visited, int i, int j) {
        Queue<int[]> q = new LinkedList<>();
        q.add(new int[]{i, j});
        visited[i][j] = true;
        int res = 0;
        while (!q.isEmpty()) {
            int[] curr = q.poll();
            res++;
            for (int[] dir: DIRECTIONS) {
                int x = curr[0] + dir[0];
                int y = curr[1] + dir[1];
                if (x < 0 || y < 0 || x >= grid.length || y >= grid[0].length || visited[x][y] || grid[x][y] != 1) continue;
                q.add(new int[]{x, y});
                visited[x][y] = true;
            }
        }
        return res;
    }

// still on debugging process.
// https://massivealgorithms.blogspot.com/2018/05/leetcode-695-max-area-of-island.html