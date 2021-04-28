/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBTopStoriesConfig, NSDictionary, NSString;

@interface FCTopStoriesConfiguration : NSObject <NSCopying> {

	NTPBTopStoriesConfig* _pbConfig;
	NSDictionary* _configDict;
	char _promotingEnabled;
	NSString* _channelID;
	NSDictionary* _styleConfigurations;
	long long _storyTypeTimeout;

}

@property (getter=isPromotingEnabled,nonatomic,readonly) char promotingEnabled;              //@synthesize promotingEnabled=_promotingEnabled - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                                         //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) NSDictionary * styleConfigurations;                           //@synthesize styleConfigurations=_styleConfigurations - In the implementation block
@property (nonatomic,readonly) long long storyTypeTimeout;                                   //@synthesize storyTypeTimeout=_storyTypeTimeout - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)channelID;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSDictionary *)styleConfigurations;
-(long long)storyTypeTimeout;
-(id)initWithPBTopStoriesConfig:(id)arg1 ;
-(char)isPromotingEnabled;
@end
