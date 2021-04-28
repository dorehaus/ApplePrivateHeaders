/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MDSPathFilterGenerator, NSMutableSet, NSSet;

@interface TMPathFilterGenerator : NSObject {

	unsigned _baseRuleSet;
	NSString* _mountPoint;
	MDSPathFilterGenerator* _baseFilterGenerator;
	MDSPathFilterGenerator* _customExclusionsFilterGenerator;
	NSMutableSet* _stickyExclusionPaths;

}

@property (readonly) unsigned baseRuleSet;                      //@synthesize baseRuleSet=_baseRuleSet - In the implementation block
@property (readonly) NSString * mountPoint;                     //@synthesize mountPoint=_mountPoint - In the implementation block
@property (readonly) NSSet * stickyExclusionPaths;              //@synthesize stickyExclusionPaths=_stickyExclusionPaths - In the implementation block
+(id)_extensionMapForRuleSet:(unsigned)arg1 ;
-(NSString *)mountPoint;
-(unsigned)baseRuleSet;
-(NSSet *)stickyExclusionPaths;
-(id)initWithBaseRuleSet:(unsigned)arg1 forMountPoint:(id)arg2 ;
-(void)addStickyExclusionForPath:(id)arg1 ;
-(void)addExclusionForPath:(id)arg1 ;
-(void)addRulesForUserHome:(id)arg1 ;
-(void)addUserLibraryMailRealm:(id)arg1 ;
-(id)copyBasePathFilter;
-(id)copyCustomExclusionsPathFilter;
-(id)_copyCompiledFilterGenerator:(id)arg1 ;
-(char)_canExcludePath:(id)arg1 ;
-(id)_rerootPath:(id)arg1 ;
-(void)_addCustomExclusionForPath:(id)arg1 ;
-(id)_customExclusionsFilterGenerator;
@end
