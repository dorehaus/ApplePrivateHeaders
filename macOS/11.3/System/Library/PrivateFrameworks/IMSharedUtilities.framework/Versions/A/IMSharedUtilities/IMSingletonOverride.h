/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSingletonOverriding.h>

@class NSString;

@interface IMSingletonOverride : NSObject <IMSingletonOverriding> {

	id _overriddenSingleton;

}

@property (__weak) id overriddenSingleton;                          //@synthesize overriddenSingleton=_overriddenSingleton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)overriddenSingleton;
-(void)setOverriddenSingleton:(id)arg1 ;
-(void)didOverrideSingleton:(id)arg1 ;
-(char)shouldInvokeSelector:(SEL)arg1 onSingleton:(id)arg2 ;
@end

