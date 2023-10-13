public class Solution
{
    public int[] AsteroidCollision(int[] asteroids)
    {
        Stack<int> stack = new Stack<int>();

        foreach (int asteroid in asteroids)
        {
            if (stack.Count == 0 || asteroid > 0)
            {
                stack.Push(asteroid);
            }
            else
            {
                var bothDest = -1;
                while (stack.Count > 0 && stack.Peek() > 0)
                {
                    int rightAsteroid = stack.Pop();
                    int collisionResult = rightAsteroid + asteroid;

                    if (collisionResult == 0)
                    {
                        bothDest = 0;
                        break;
                    }
                    else if (collisionResult > 0)
                    {
                        stack.Push(rightAsteroid);
                        break;
                    }
                }

                if ((stack.Count == 0 || stack.Peek() < 0) && bothDest != 0)
                {
                    stack.Push(asteroid);
                }
            }
        }

        int[] result = new int[stack.Count];
        for (int i = stack.Count - 1; i >= 0; i--)
        {
            result[i] = stack.Pop();
        }

        return result;
    }
}
