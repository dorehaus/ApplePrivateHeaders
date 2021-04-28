/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Intents/Intents-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface INBundleAccessManager : NSObject {

	SCD_Struct_IN3 _stats;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _securityScopedURLs;
	NSMutableSet* _accessibleBundleIDs;

}

@property (nonatomic,readonly) NSMutableDictionary * securityScopedURLs;              //@synthesize securityScopedURLs=_securityScopedURLs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * accessibleBundleIDs;                    //@synthesize accessibleBundleIDs=_accessibleBundleIDs - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_stats;
-(id)grantForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)grantForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_grantForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)securityScopedURLs;
-(NSMutableSet *)accessibleBundleIDs;
@end

