/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/Install-Structs.h>
#import <Install/IFDocument.h>

@class NSString, PFPackage, NSLock, NSMutableDictionary, NSError, NSMutableArray, NSDictionary, NSArray;

@interface IFPKGDerivedDocument : IFDocument {

	NSString* title;
	PFPackage* basePackage;
	NSLock* lock;
	char allowsBackRev;
	char rootVolumeOnly;
	char legacyPackage;
	char failedArchitectureCheck;
	NSMutableDictionary* uiSelectionCache;
	char _documentReadAndValidationHaveBeenPerformed;
	char _validationResult;
	NSError* _validationError;
	NSMutableArray* _searchModules;
	NSDictionary* installableCheckResults;
	NSArray* _preferredLocs;
	NSArray* _otherLocs;
	NSMutableDictionary* pfPackages;
	int _minTrustLevel;
	int _evaluatedTrustLevel;
	NSArray* _certificateChain;
	SecTrustRef _trustRef;
	NSString* _path;

}
-(void)dealloc;
-(id)package;
-(id)initWithPath:(id)arg1 ;
-(id)title;
-(void)setMinimumRequiredTrustLevel:(int)arg1 ;
-(char)getData:(id*)arg1 andMIMEType:(id*)arg2 forResourceNamed:(id)arg3 forLanguage:(id)arg4 error:(id*)arg5 ;
-(id)certificateIdentity;
-(id)searchDefinitions;
-(id)sortedPackageLocations;
-(id)packagesForLocation:(id)arg1 fromSet:(id)arg2 ;
-(id)objectForOptionNamed:(id)arg1 ;
-(int)trustLevelReturningCertificateChain:(id*)arg1 ;
-(id)copyChoiceTreeWithScripts:(id*)arg1 andChoiceList:(id*)arg2 forTarget:(id)arg3 ;
-(char)hasInsecureChecks;
-(id)errorForPackage:(id)arg1 onTarget:(id)arg2 withCustomizationController:(id)arg3 ;
-(char)readAndValidateDocumentReturningError:(id*)arg1 ;
-(id)installableCheckResults;
-(void)clearInstallationCheckResults;
-(id)languagesAvailableForResource:(id)arg1 ;
-(int)trustLevelReturningTrustRef:(_SecTrust*)arg1 ;
-(int)minimumRequiredTrustLevel;
-(char)evaluateTrust;
-(void)addPackage:(id)arg1 ;
-(char)getData:(id*)arg1 andMIMEType:(id*)arg2 forResourceNamed:(id)arg3 forLanguage:(id)arg4 ;
-(void)clearPackages:(id)arg1 ;
-(id)_PFPackageForPackage:(id)arg1 ;
-(void)_buildPackageCacheObjects;
-(void)_pfTranslationForIFKey:(id)arg1 outType:(id*)arg2 outPFName:(id*)arg3 ;
-(id)_findResourceForName:(id)arg1 requestedLoc:(id)arg2 fallback:(char)arg3 ;
-(id)_packageForPFPackage:(id)arg1 ;
-(void)_addSelectedMetapackages:(id)arg1 fromPackage:(id)arg2 ;
-(void)_packagesForLocation:(id)arg1 fromSet:(id)arg2 withPackage:(id)arg3 intoList:(id)arg4 ;
-(id)_buildPackageCacheObjectForPackage:(id)arg1 atPath:(id)arg2 withParentSelection:(id)arg3 ;
-(const char*)authorizationStringForLevel:(int)arg1 ;
-(id)choiceForPackage:(id)arg1 onTarget:(id)arg2 withScriptString:(id)arg3 ;
-(char)_iTunesPackage:(id)arg1 shouldBeDisabledOnTarget:(id)arg2 ;
-(void)addChoiceChildrenForPackage:(id)arg1 toChoiceNode:(id)arg2 onTarget:(id)arg3 withScriptString:(id)arg4 ;
-(void)_buildScriptsForPackage:(id)arg1 partOfChoice:(id)arg2 intoString:(id)arg3 ;
-(void)_iLife04HackToQuitiTunesHelperIfiTunesIsntRunning;
-(id)_hackForBundleSoftwareRequirementsWithPackage:(id)arg1 withCurrentError:(id)arg2 onTarget:(id)arg3 ;
-(void)_preRequirementRunCompatibilityHacksForPackage:(id)arg1 onTarget:(id)arg2 ;
-(id)_postRequirementRunCompatibilityHacksForPackage:(id)arg1 onTarget:(id)arg2 withCurrentError:(id)arg3 ;
-(id)_receiptVersionCheckOnTarget:(id)arg1 ;
@end
