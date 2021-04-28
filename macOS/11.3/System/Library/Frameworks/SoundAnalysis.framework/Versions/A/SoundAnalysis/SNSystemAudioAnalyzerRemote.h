/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {

	NSMutableDictionary* _registeredRequests;
	id<SNSystemAudioAnalyzerProtocol> _analyzer;
	/*^block*/id _generator;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)connectionLostError;
-(id)init;
-(void)start;
-(void)stop;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(char)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)_removeRequest:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(id)initWithRemoteAnalyzerGenerator:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_invalidateAnalyzer:(id)arg1 ;
-(void)_invalidateActiveAnalyzer;
-(void)_removeAllRequests;
-(id)_acquireSystemAudioAnalyzer;
-(void)_addRequest:(id)arg1 withObserver:(id)arg2 ;
-(void)invalidateActiveAnalyzer;
@end

