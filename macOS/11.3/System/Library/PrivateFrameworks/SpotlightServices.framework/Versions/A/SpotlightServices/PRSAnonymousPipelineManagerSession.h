/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/PRSAnonymousPipelineManager.h>

@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager {

	PARSession* _session;

}

@property (nonatomic,retain) PARSession * session;              //@synthesize session=_session - In the implementation block
+(id)sharedManager;
-(id)init;
-(PARSession *)session;
-(void)setSession:(PARSession *)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)setPARSession:(id)arg1 ;
@end
