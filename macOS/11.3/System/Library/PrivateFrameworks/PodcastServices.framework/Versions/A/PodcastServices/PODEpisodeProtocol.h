/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastServices.framework/Versions/A/PodcastServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSDate;


@protocol PODEpisodeProtocol <PODContentEntityProtocol>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) NSString * longDescription; 
@property (nonatomic,readonly) char isExplicit; 
@property (nonatomic,readonly) NSURL * feedUrl; 
@property (nonatomic,readonly) NSString * externalGuid; 
@property (nonatomic,readonly) char doNotAutoDelete; 
@property (nonatomic,readonly) unsigned long long storeTrackId; 
@property (nonatomic,readonly) unsigned long long byteSize; 
@property (nonatomic,readonly) unsigned long long episodeNumber; 
@property (nonatomic,readonly) unsigned long long seasonNumber; 
@property (nonatomic,readonly) NSURL * mediaDownloadableUrl; 
@property (nonatomic,readonly) NSURL * mediaFileUrl; 
@property (nonatomic,readonly) NSDate * pubDate; 
@property (nonatomic,readonly) NSDate * addedDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSURL * episodePageUrl; 
@property (nonatomic,readonly) id<PODEpisodePlayMetadataProtocol> playMetadata; 
@property (nonatomic,readonly) long long showSyncID; 
@property (nonatomic,readonly) long long contentType; 
@required
-(NSString *)category;
-(double)duration;
-(NSString *)title;
-(long long)contentType;
-(char)isExplicit;
-(NSString *)shortDescription;
-(NSDate *)addedDate;
-(unsigned long long)episodeNumber;
-(unsigned long long)seasonNumber;
-(id<PODEpisodePlayMetadataProtocol>)playMetadata;
-(long long)showSyncID;
-(NSString *)longDescription;
-(char)doNotAutoDelete;
-(NSURL *)feedUrl;
-(NSString *)externalGuid;
-(unsigned long long)storeTrackId;
-(unsigned long long)byteSize;
-(NSURL *)mediaDownloadableUrl;
-(NSURL *)mediaFileUrl;
-(NSDate *)pubDate;
-(NSURL *)episodePageUrl;

@end

