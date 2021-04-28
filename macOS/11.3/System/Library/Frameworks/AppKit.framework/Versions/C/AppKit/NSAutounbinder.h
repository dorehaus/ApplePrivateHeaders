/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSObject, NSMutableArray;

@interface NSAutounbinder : NSProxy {

	NSObject* _bindingTarget;
	char _isRetainingBindingTarget;
	char _isRecordingBindings;
	NSMutableArray* _bindingsToThisObject;
	NSMutableArray* _observancesOfThisObject;

}
-(void)dealloc;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(char)validateValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)mutableArrayValueForKeyPath:(id)arg1 ;
-(id)mutableSetValueForKeyPath:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 isWeak:(char)arg3 ;
-(id)initWithBindingTarget:(id)arg1 ;
-(id)bindingTarget;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)removeBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)retainBindingTargetAndUnbind;
-(id)_autounbinder;
@end

