/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManager.h>

@class NSArray, NSString;

@interface SafariWebExtensionPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManager> {

	NSArray* _preferences;

}

@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(id)preferences;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)preferenceOnlyShowsConfiguredSites:(id)arg1 ;
-(id)localizedWarningTextForPreference:(id)arg1 ;
-(void)getDomainsAllowedToRemoveForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_extensionStateDidChange:(id)arg1 ;
-(void)_setValue:(id)arg1 ofMatchPattern:(id)arg2 forExtension:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

