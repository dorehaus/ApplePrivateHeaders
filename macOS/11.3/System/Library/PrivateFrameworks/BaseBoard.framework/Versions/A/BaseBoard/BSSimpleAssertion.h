/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class BSAtomicSignal, NSObject, NSString;

@interface BSSimpleAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BSAtomicSignal* _invalidated;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _invalidationBlock;
	NSString* _identifier;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(char)isValid;
-(NSString *)reason;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
@end

