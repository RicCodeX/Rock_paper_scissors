import tweepy
import time

# authenticate to Twitter API using your own keys/secrets
consumer_key = "your_consumer_key"
consumer_secret = "your_consumer_secret"
access_token = "your_access_token"
access_token_secret = "your_access_token_secret"

auth = tweepy.OAuthHandler(consumer_key, consumer_secret)
auth.set_access_token(access_token, access_token_secret)

# create API object
api = tweepy.API(auth)

# get input from user on what to tweet
tweet = input("What do you want to tweet? ")

# try to post tweet, and catch any authentication errors
try:
    api.update_status(tweet)
    print("Tweet posted successfully!")
    
# if there's an authentication error, display error message
except tweepy.TweepError as error:
    print("Error posting tweet: " + str(error))

# wait 24 hours before posting the next tweet
time.sleep(86400)
