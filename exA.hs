import Control.Monad (replicateM)
import Data.List (foldl')

-- Function to solve a single test case
solveTestCase :: Int -> Int -> String -> String
solveTestCase n k s = go s k 0
    where
        go str moves idx
            | moves == 0 || idx >= n = str
            | otherwise =
                    let (prefix, rest) = splitAt idx str
                            (zeros, rest') = span (== '0') rest
                            zeroCount = length zeros
                            moveCount = min zeroCount moves
                            newPrefix = prefix ++ replicate moveCount '0'
                            newRest = drop moveCount zeros ++ rest'
                    in go (newPrefix ++ newRest) (moves - moveCount) (idx + 1)

-- Main function to handle input and output
main :: IO ()
main = do
        q <- readLn
        testCases <- replicateM q $ do
                [n, k] <- map read . words <$> getLine
                s <- getLine
                return (n, k, s)
        let results = map (\(n, k, s) -> solveTestCase n k s) testCases
        mapM_ putStrLn results