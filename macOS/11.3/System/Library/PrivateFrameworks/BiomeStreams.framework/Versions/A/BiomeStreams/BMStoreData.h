/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BMStoreData <NSObject>
@property (nonatomic,readonly) unsigned dataVersion; 
@optional
-(id)json;

@required
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2;
-(id)init;
-(id)serialize;
-(unsigned)dataVersion;

@end

