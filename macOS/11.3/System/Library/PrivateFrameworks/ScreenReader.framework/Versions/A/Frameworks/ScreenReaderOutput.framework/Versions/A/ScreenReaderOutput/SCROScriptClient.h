/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, SCROConnection, SCRCTargetSelectorTimer, NSObject;

@interface SCROScriptClient : NSObject {

	NSLock* _lock;
	SCROConnection* _connection;
	SCRCTargetSelectorTimer* _timer;
	char _isReady;
	NSObject*<OS_dispatch_queue> __scriptDispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _scriptDispatchQueue;              //@synthesize _scriptDispatchQueue=__scriptDispatchQueue - In the implementation block
+(id)sharedClient;
-(void)dealloc;
-(id)init;
-(char)_isReady;
-(void)handleCallback:(id)arg1 ;
-(id)_lazyConnection;
-(void)_killConnection;
-(NSObject*<OS_dispatch_queue>)_scriptDispatchQueue;
-(char)runScriptFile:(id)arg1 ;
-(void)set_scriptDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

