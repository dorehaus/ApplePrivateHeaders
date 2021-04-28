/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject {

	NSDictionary* _bagRadioDictionary;

}

@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) long long getTracksDPInfoKBSyncCount; 
@property (nonatomic,readonly) long long maxSupportedProtocolVersion; 
@property (getter=isContinueListeningAvailable,nonatomic,readonly) char continueListeningAvailable; 
@property (nonatomic,readonly) long long continueListeningMaxQueueSizeInRequest; 
@property (nonatomic,readonly) long long continueListeningMaxUpcomingTracksSizeToMaintain; 
@property (nonatomic,readonly) long long continueListeningLoadStationThreshold; 
-(NSURL *)baseURL;
-(id)initWithBagRadioDictionary:(id)arg1 ;
-(long long)getTracksDPInfoKBSyncCount;
-(long long)maxSupportedProtocolVersion;
-(char)isContinueListeningAvailable;
-(long long)continueListeningMaxQueueSizeInRequest;
-(long long)continueListeningMaxUpcomingTracksSizeToMaintain;
-(long long)continueListeningLoadStationThreshold;
-(char)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2 ;
-(id)urlForBagRadioKey:(id)arg1 ;
@end

