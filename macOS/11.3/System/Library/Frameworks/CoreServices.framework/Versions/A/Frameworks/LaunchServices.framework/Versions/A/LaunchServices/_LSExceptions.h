/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LaunchServices/LaunchServices-Structs.h>
@class NSDictionary;

@interface _LSExceptions : NSObject {

	NSDictionary* _additions;
	NSDictionary* _overrides;
	NSDictionary* _mergeDocumentTypes;
	NSDictionary* _capabilityOverrides;

}
+(void)initialize;
+(id)sharedInstance;
+(void)invalidateSharedInstance;
+(char)allowInternallyBlockedApps;
-(id)init;
-(id)_init;
-(void)applyToInfoDictionary:(id)arg1 ;
-(unsigned)launchOverrideFlagsWithBundleIdentifier:(id)arg1 bundleVersion:(LSVersionNumber)arg2 overrideDictionary:(id*)arg3 ;
-(unsigned)overrideFlagsForCapability:(const PrefsCapabilityInfo*)arg1 withBundleIdentifier:(id)arg2 bundleVersion:(LSVersionNumber)arg3 ;
-(id)exceptionsDictionary:(id)arg1 forIdentifier:(id)arg2 ;
-(id)validateJavaRequirementInAdditions:(id)arg1 forInfoDictionary:(id)arg2 ;
-(char)claim:(id)arg1 intersectsClaim:(id)arg2 ;
-(unsigned)overrideFlagsForCapability:(const PrefsCapabilityInfo*)arg1 withBundleIdentifier:(id)arg2 bundleVersion:(LSVersionNumber)arg3 overrideDictionary:(id*)arg4 ;
-(void)replaceMasterDictionary:(id*)arg1 settingNewValues:(id)arg2 ;
-(char)version:(LSVersionNumber)arg1 matchesOverrideVersion:(id)arg2 ;
-(char)platformMatchesExceptionsDictionary:(id)arg1 ;
@end

