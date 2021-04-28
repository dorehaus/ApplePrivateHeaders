/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHRecognitionSessionObserver.h>

@protocol OS_dispatch_queue, CHQueryDelegate, CHStrokeProviderVersion;
@class NSObject, CHRecognitionSessionResult, CHRecognitionSession, NSString;

@interface CHQuery : NSObject <CHRecognitionSessionObserver> {

	NSObject*<OS_dispatch_queue> _processingQueue;
	CHRecognitionSessionResult* _currentProcessingSessionResult;
	double _lastProcessedTime;
	char __queryActive;
	id<CHQueryDelegate> _delegate;
	CHRecognitionSession* _recognitionSession;
	id<CHStrokeProviderVersion> _lastProcessedStrokeProviderVersion;
	double _preferredUpdatesInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> processingQueue; 
@property (nonatomic,retain,readonly) NSString * debugName; 
@property (assign,nonatomic) char _queryActive;                                                  //@synthesize _queryActive=__queryActive - In the implementation block
@property (copy) id<CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;                 //@synthesize lastProcessedStrokeProviderVersion=_lastProcessedStrokeProviderVersion - In the implementation block
@property (assign,nonatomic) id<CHQueryDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;                 //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) double preferredUpdatesInterval;                                    //@synthesize preferredUpdatesInterval=_preferredUpdatesInterval - In the implementation block
-(void)dealloc;
-(id)init;
-(id<CHQueryDelegate>)delegate;
-(void)setDelegate:(id<CHQueryDelegate>)arg1 ;
-(void)pause;
-(void)start;
-(NSString *)debugName;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)q_updateQueryResult;
-(id)q_sessionResult;
-(CHRecognitionSession *)recognitionSession;
-(id)strokeIdentifiersForData:(id)arg1 withStrokeProvider:(id)arg2 ;
-(id)encodedStrokeIdentifiers:(id)arg1 withStrokeProvider:(id)arg2 ;
-(void)q_queryResultDidChange;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)setPreferredUpdatesInterval:(double)arg1 ;
-(void)q_setNeedsQueryResultUpdating;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg1 ;
-(double)preferredRecognitionResultUpdatesInterval;
-(char)_queryActive;
-(void)set_queryActive:(char)arg1 ;
-(void)_updateForRecognitionSessionResultChangeIfNeeded;
-(double)preferredUpdatesInterval;
-(void)waitForPendingUpdates;
-(id<CHStrokeProviderVersion>)lastProcessedStrokeProviderVersion;
-(void)setLastProcessedStrokeProviderVersion:(id<CHStrokeProviderVersion>)arg1 ;
@end

