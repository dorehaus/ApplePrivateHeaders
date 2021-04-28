/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/PARSessionDelegate.h>
#import <libobjc.A.dylib/WBSParsecSearchSession.h>

@protocol OS_dispatch_queue, WBSParsecSearchSessionDelegate;
@class WBSCompletionQuery, WBSParsecABGroupManager, NSObject, WBSParsecDFeedbackDispatcher, GEOUserSessionEntity, PARSession, NSString;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {

	NSObject*<OS_dispatch_queue> _requestProcessingQueue;
	WBSParsecDFeedbackDispatcher* _feedbackDispatcher;
	GEOUserSessionEntity* _threadUnsafeGEOUserSessionEntity;
	os_unfair_lock_s _geoUserSessionLock;
	char _skipAutoFillDataUpdates;
	double _threadUnsafeUIScale;
	WBSCompletionQuery* _threadUnsafeCurrentQuery;
	WBSParsecABGroupManager* _abGroupManager;
	id<WBSParsecSearchSessionDelegate> _threadUnsafeDelegate;
	PARSession* _threadUnsafeParsecdSession;
	unsigned long long _currentQueryID;

}

@property (assign) unsigned long long currentQueryID;                                           //@synthesize currentQueryID=_currentQueryID - In the implementation block
@property (nonatomic,readonly) char skipAutoFillDataUpdates;                                    //@synthesize skipAutoFillDataUpdates=_skipAutoFillDataUpdates - In the implementation block
@property (nonatomic,retain) PARSession * parsecdSession;                                       //@synthesize threadUnsafeParsecdSession=_threadUnsafeParsecdSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate;                //@synthesize threadUnsafeDelegate=_threadUnsafeDelegate - In the implementation block
@property (nonatomic,retain) WBSCompletionQuery * currentQuery;                                 //@synthesize threadUnsafeCurrentQuery=_threadUnsafeCurrentQuery - In the implementation block
@property (assign,setter=setUIScale:,nonatomic) double uiScale;                                 //@synthesize threadUnsafeUIScale=_threadUnsafeUIScale - In the implementation block
@property (nonatomic,readonly) id<WBSParsecFeedbackDispatcher> feedbackDispatcher; 
@property (nonatomic,readonly) WBSParsecABGroupManager * abGroupManager;                        //@synthesize abGroupManager=_abGroupManager - In the implementation block
@property (getter=isABTestingEnabled,nonatomic,readonly) char abTestingEnabled; 
+(id)sharedPARSession;
+(id)sharedDomainPolicyProvider;
+(id)_sharedSessionConfiguration;
+(void)_parsecEnabledDidChange:(id)arg1 ;
+(void)_updateParsecAvailabilityInSessionConfiguration:(id)arg1 ;
+(void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)sharedCorrectionsProcessor;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(void)setDelegate:(id<WBSParsecSearchSessionDelegate>)arg1 ;
-(double)uiScale;
-(WBSCompletionQuery *)currentQuery;
-(void)setCurrentQuery:(WBSCompletionQuery *)arg1 ;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(unsigned long long)currentQueryID;
-(char)isABTestingEnabled;
-(id<WBSParsecFeedbackDispatcher>)feedbackDispatcher;
-(id)initWithParsecdSession:(id)arg1 skipAutoFillDataUpdates:(char)arg2 ;
-(void)setUIScale:(double)arg1 ;
-(void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1 ;
-(void)_setCurrentQuery:(id)arg1 withKeyboardInputType:(id)arg2 ;
-(WBSParsecABGroupManager *)abGroupManager;
-(char)_isABTestingEnabledOnProcessingQueue;
-(void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4 ;
-(void)setCurrentQueryID:(unsigned long long)arg1 ;
-(void)setParsecdSession:(PARSession *)arg1 ;
-(PARSession *)parsecdSession;
-(char)skipAutoFillDataUpdates;
@end

