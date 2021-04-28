/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/Versions/A/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADSegmentDataManager : ADSingleton {

	char _segmentUpdateInProgress;
	NSNumber* _pendingJingleRequestToken;

}

@property (nonatomic,copy) NSNumber * pendingJingleRequestToken;              //@synthesize pendingJingleRequestToken=_pendingJingleRequestToken - In the implementation block
@property (assign,nonatomic) char segmentUpdateInProgress;                    //@synthesize segmentUpdateInProgress=_segmentUpdateInProgress - In the implementation block
@property (nonatomic,readonly) char segmentRetrievalInProgress; 
+(id)sharedInstance;
-(void)retrieveSegmentData:(id)arg1 forceSegments:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendSegmentDataToAdPlatforms:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)pendingJingleRequestToken;
-(void)setPendingJingleRequestToken:(NSNumber *)arg1 ;
-(char)segmentRetrievalInProgress;
-(void)retrieveSegmentData:(id)arg1 forceSegments:(char)arg2 ignoreTimestamps:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)shouldSendSegmentRequest:(id)arg1 ignoreTimestamps:(char)arg2 ;
-(void)handleJingleSegmentResponse:(id)arg1 activeRecord:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)checkTokenAndDSID:(id)arg1 ;
-(void)handleSuccessfulJingleSegmentResponse:(id)arg1 dsidRecord:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)verifyGenderInSegmentData:(id)arg1 ;
-(char)segmentUpdateInProgress;
-(char)shouldSendSegmentDataToAdPlatforms:(id)arg1 ;
-(void)populateAccountTypeFields:(id)arg1 ;
-(void)handleSegmentUpdateResponse:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)retrieveSegmentDataIgnoringTimestamps:(id)arg1 forceSegments:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSegmentUpdateInProgress:(char)arg1 ;
@end

