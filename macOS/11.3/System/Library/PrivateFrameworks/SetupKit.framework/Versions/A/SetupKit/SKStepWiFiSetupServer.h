/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/Versions/A/SetupKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CULabelable.h>
#import <libobjc.A.dylib/SKStepable.h>

@protocol OS_dispatch_queue, CUMessaging;
@class NSObject, NSString;

@interface SKStepWiFiSetupServer : NSObject <CULabelable, SKStepable> {

	char _activateCalled;
	char _invalidateCalled;
	char _invalidateDone;
	int _runState;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _skCompletionHandler;
	id<CUMessaging> _skMessaging;

}

@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id skCompletionHandler;                                    //@synthesize skCompletionHandler=_skCompletionHandler - In the implementation block
@property (nonatomic,retain) id<CUMessaging> skMessaging;                             //@synthesize skMessaging=_skMessaging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)skCompletionHandler;
-(void)setSkCompletionHandler:(id)arg1 ;
-(id<CUMessaging>)skMessaging;
-(void)setSkMessaging:(id<CUMessaging>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)activate;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

