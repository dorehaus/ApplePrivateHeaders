/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SAClassRegistry : NSObject
+(void)initialize;
+(void)registerAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
+(Class)classForAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
+(void)registerClass:(Class)arg1 forAceClassName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
+(id)sharedClassRegistry;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
@end

