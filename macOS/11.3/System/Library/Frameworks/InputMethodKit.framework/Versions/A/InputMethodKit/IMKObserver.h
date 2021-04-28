/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString, NSOperationQueue;

@interface IMKObserver : NSObject {

	NSObject* _observedObject;
	NSString* _observedKeyPath;
	NSOperationQueue* _queue;
	/*^block*/id _observerBlock;

}

@property (__weak) NSObject * observedObject;                                //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) id observerBlock;                        //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * observedKeyPath;              //@synthesize observedKeyPath=_observedKeyPath - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) char isObserving; 
-(void)endObservation;
-(id)initWithObservedObject:(id)arg1 observedKeyPath:(id)arg2 queue:(id)arg3 observerBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSOperationQueue *)queue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject *)observedObject;
-(id)observerBlock;
-(char)isObserving;
-(NSString *)observedKeyPath;
-(void)setObservedObject:(NSObject *)arg1 ;
@end

