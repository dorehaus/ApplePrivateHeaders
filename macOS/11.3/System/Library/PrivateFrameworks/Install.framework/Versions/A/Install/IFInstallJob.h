/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class IFInstallQueue, NSMutableDictionary, IFSessionState, NSNumber, NSMutableSet, NSDate;

@interface IFInstallJob : NSObject {

	IFInstallQueue* _installQueue;
	NSMutableDictionary* _installState;
	IFSessionState* _sessionState;
	NSNumber* _sessionID;
	NSMutableSet* _launchServicesPaths;
	modDirs_t _modDirs;
	int _planFiles;
	int _packageFiles;
	NSDate* _lastMessageSentDate;

}
-(void)dealloc;
-(id)installState;
-(void)setInstallState:(id)arg1 ;
-(id)sessionID;
-(void)setSessionID:(id)arg1 ;
-(id)logDescription;
-(void)addLaunchServicesPath:(id)arg1 ;
-(modDirs_t*)modDirs;
-(void)setPartialProgress:(double)arg1 ;
-(void)sendClientStatusMessage:(id)arg1 ofType:(id)arg2 ;
-(void)sendClientError:(id)arg1 ;
-(void)setPartialProgress:(double)arg1 estimatedTimeRemaining:(double)arg2 ;
-(id)installQueue;
-(id)initWithSession:(id)arg1 withSessionID:(id)arg2 ;
-(void)setInstallQueue:(id)arg1 ;
-(void)addPlanFiles:(int)arg1 ;
-(void)addPackageFiles:(int)arg1 ;
-(void)installJobCompleted:(id)arg1 ;
-(int)numberOfPlanFiles;
-(int)numberOfPackageFiles;
-(void)_sendProgressNotificationWithProgress:(id)arg1 estimatedTimeRemaining:(id)arg2 ;
@end

