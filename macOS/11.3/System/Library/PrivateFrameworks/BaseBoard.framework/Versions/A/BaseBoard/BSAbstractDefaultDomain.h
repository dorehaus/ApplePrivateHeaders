/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSMutableSet, NSMutableDictionary;

@interface BSAbstractDefaultDomain : NSObject {

	NSUserDefaults* _userDefaults;
	char _boundDefaults;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableSet* _observerQueue_observers;
	NSMutableDictionary* _defaultKeyToDefaultValue;

}
+(void)initialize;
+(char)__useDynamicMethodResolution;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)_store;
-(id)_initWithDomain:(id)arg1 ;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4 ;
-(void)_bindAndRegisterDefaults;
-(id)_initWithDefaults:(id)arg1 ;
-(id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 ;
-(void)synchronizeDefaults;
-(id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)resetAllDefaults;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 ;
-(void)_setUserDefaults:(id)arg1 ;
@end
