/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSUI/MMScriptInterface.h>

@class NSMutableArray, NSArray;

@interface _MMCompoundScriptInterface : MMScriptInterface {

	NSMutableArray* _stagedInterfaces;
	NSArray* _unstagedInvocations;

}
+(id)_compoundInterface;
-(id)_initWithProtocol:(id)arg1 ;
-(id)_nameForSelector:(SEL)arg1 ;
-(char)_cachingEnabledForSelector:(SEL)arg1 ;
-(void)setName:(id)arg1 forSelector:(SEL)arg2 ;
-(void)_addInterface:(id)arg1 ;
-(id)interfaceByAddingInterface:(id)arg1 ;
-(unsigned long long)_numberOfMethodsSatisfyingRequired:(char)arg1 instance:(char)arg2 ;
-(id)_invocationsForMethodsSatisfyingRequired:(char)arg1 instance:(char)arg2 ;
-(void)setCachingEnabled:(char)arg1 forSelector:(SEL)arg2 ;
-(void)_addCompoundInterface:(id)arg1 ;
-(void)_stageInterface:(id)arg1 ;
-(void)_addUnstagedInvocationsFromInterface:(id)arg1 satisfyingRequired:(char)arg2 instance:(char)arg3 ;
-(void)_unstageInterface:(id)arg1 ;
-(id)_unstagedInvocationsSatisfyingRequired:(char)arg1 instance:(char)arg2 ;
-(void)_enumerateAllMethodsForProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_unstageAllInterfaces;
-(void)_enumerateMethodsForProtocol:(id)arg1 satisfyingRequired:(char)arg2 instance:(char)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

