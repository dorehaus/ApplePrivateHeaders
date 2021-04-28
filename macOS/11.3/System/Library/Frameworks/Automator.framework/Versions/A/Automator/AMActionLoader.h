/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AMActionLoader : NSObject
+(id)sharedActionLoader;
+(id)displayNameAtPathWithCaching:(id)arg1 ;
+(id)coreTypesBundle;
-(id)actionWithURL:(id)arg1 error:(id*)arg2 ;
-(id)definitionForActionWithBundle:(id)arg1 ;
-(id)bundleForActionWithPropertyList:(id)arg1 ;
-(void)generateLocalizedApplicationNamesForDefinition:(id)arg1 fromBundle:(id)arg2 ;
-(void)generateLocalizedCategoryNamesForDefinition:(id)arg1 fromBundle:(id)arg2 ;
-(void)generateLocalizedKeywordsForDefinition:(id)arg1 fromBundle:(id)arg2 ;
-(id)resolvedIconURLForActionBundle:(id)arg1 ;
-(id)bundleForActionWithURL:(id)arg1 error:(id*)arg2 ;
-(id)actionWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)loadedBundleForActionWithBundleIdentifier:(id)arg1 ;
-(char)_bundleRequiresOutOfProcessActionLoader:(id)arg1 ;
-(char)_bundleRequiresOutOfProcessActionLoaderForCurrentProcess:(id)arg1 ;
-(char)_bundleRequiresOutOfProcessLoaderForAppleSignedProcess:(id)arg1 ;
-(char)_validateBundle:(id)arg1 error:(id*)arg2 ;
-(char)_loadBundleIfNeeded:(id)arg1 returningClass:(Class*)arg2 shouldLoadASOCScripts:(char*)arg3 error:(id*)arg4 ;
-(char)blacklistAllowsLoadingOfActionWithIdentifier:(id)arg1 ;
-(Class)classForActionWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)validateWarningActionsForAction:(id)arg1 ;
-(id)validationErrorsForActionResourcesWithAction:(id)arg1 ;
-(id)actionWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)validateFileResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2 ;
-(id)validateApplicationResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2 ;
-(id)validateLicenseResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2 ;
-(id)validateActionResourcesForAction:(id)arg1 withResourceDictionary:(id)arg2 ;
-(char)bundleShouldBeTreatedAsThirdParty:(id)arg1 ;
-(char)_appleSignedBundleRequiresOutOfProcessLoaderForNonLoaderProcess:(id)arg1 ;
-(char)_bundleRequiresOutOfProcessLoaderForNonLoaderProcess:(id)arg1 ;
-(id)cachingDictionaryForActionBundle:(id)arg1 ;
-(id)actionWithPropertyList:(id)arg1 error:(id*)arg2 ;
@end

