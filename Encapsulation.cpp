#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<stdio.h>

using namespace std;


class YTChannel   // this is a class definition of YTChannel // this in an example of Encapsulation
{
    private:
        string channelName;
        string channelOwner;
        string ChannelType;
        unsigned int channelSubscriberCount;
        vector <string> VideoUplods;

    public:
        YTChannel(string name, string owner, string type) // this is a constructor of this class
        {
            channelName = name;
            channelOwner = owner;
            ChannelType = type;
            channelSubscriberCount = 0;
        }

        void GetChannelINFO() // this is a class method for getting info about the channel
        {
            cout << "Channel Name: " << channelName << endl;
            cout << "Channel Owner: " << channelOwner << endl;
            cout << "Channel Type: " << ChannelType << endl;
            cout << "Channel Subscriber Count: " <<channelSubscriberCount << endl;
            cout << "Uploaded Videos Titles: " ;            

            auto it = VideoUplods.begin();
            while(it != VideoUplods.end())
            {
                if(it != VideoUplods.begin()) printf("\t\t\t");
                cout << *it << endl;
                ++it;
            }
        }

        void ModifyChannelName(string name) // this method is for modifying the channel name
        {
            channelName = name;
        }
        void ModifyChannelOwner(string owner) // this method is for modifying the channel owner
        {
            channelOwner = owner;
        }

        void Subscribe() // this is a class method for subscribing to the channel
        {
            channelSubscriberCount++;
        }
        void Unsubscribe() // this is a class method for unsubscribing to the channel
        {
            channelSubscriberCount -= (channelSubscriberCount > 0);
        }
        
        void UploadVideo(string title) // this is a class method for listing newly uploaded video to the channel
        {
            VideoUplods.push_back(title);
        }
        void DeleteVideo(string title) // this is a class method for deleting a video from the channel
        {
            auto it = find(VideoUplods.begin(), VideoUplods.end(), title);
            if(it != VideoUplods.end())
            {
                VideoUplods.erase(it);
            }
            else cout << "No such video found in the channel. Please enter correct Title\n";
        }
};




int main()
{
    YTChannel Channel_1("Code_with_You", "Raj", "Programming");

    Channel_1.UploadVideo("OOP in CPP");
    Channel_1.UploadVideo("Data Structures in CPP");

    Channel_1.Unsubscribe();
    Channel_1.Subscribe();
    Channel_1.Unsubscribe();
    Channel_1.Subscribe();
    Channel_1.Subscribe();
    Channel_1.Subscribe();
    Channel_1.Unsubscribe();
    Channel_1.Subscribe();

    Channel_1.GetChannelINFO();
}