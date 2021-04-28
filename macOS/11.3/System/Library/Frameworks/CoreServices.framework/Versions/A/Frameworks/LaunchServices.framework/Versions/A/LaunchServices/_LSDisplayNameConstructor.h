/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LaunchServices/LaunchServices-Structs.h>
@class NSString;

@interface _LSDisplayNameConstructor : NSObject {

	NSString* _originalName;
	NSString* _baseName;
	NSString* _extension;
	NSString* _secondaryExtension;
	unsigned _wantsHiddenExtension : 1;
	unsigned _isFolder : 1;
	unsigned _isApplication : 1;
	unsigned _hadNonASCIICharacter : 1;
	unsigned _hadColonInFSName : 1;
	unsigned _hadBiDiControlCharacter : 1;
	unsigned _hadForbiddenCharacter : 1;
	unsigned _hadCompoundConfusable : 1;
	unsigned _hadExactConfusable : 1;
	unsigned _secondaryExtensionHadNonASCIICharacter : 1;
	unsigned _hasForcedExtension : 1;

}
+(id)displayNameConstructorsWithContext:(LSContext*)arg1 bundle:(unsigned)arg2 bundleClass:(const unsigned*)arg3 node:(id)arg4 error:(id*)arg5 ;
+(id)displayNameConstructorWithContext:(LSContext*)arg1 bundle:(unsigned)arg2 bundleClass:(const unsigned*)arg3 node:(id)arg4 preferredLocalizations:(id)arg5 error:(id*)arg6 ;
+(id)suffixForRemoteXCTests;
+(void)setSuffixForRemoteXCTests:(id)arg1 ;
+(id)displayNameConstructorWithContextIfNeeded:(Context*)arg1 bundle:(unsigned)arg2 bundleClass:(const unsigned*)arg3 node:(id)arg4 preferredLocalizations:(id)arg5 error:(id*)arg6 ;
+(id)displayNameConstructorsWithContextIfNeeded:(Context*)arg1 bundle:(unsigned)arg2 bundleClass:(const unsigned*)arg3 node:(id)arg4 error:(id*)arg5 ;
+(id)concatenateBaseName:(id)arg1 andExtension:(id)arg2 ;
+(id)displayNameConstructorWithContext:(LSContext*)arg1 node:(id)arg2 error:(id*)arg3 ;
+(id)displayNameConstructorsWithContext:(LSContext*)arg1 node:(id)arg2 error:(id*)arg3 ;
+(id)displayNameConstructorWithContextIfNeeded:(Context*)arg1 node:(id)arg2 error:(id*)arg3 ;
+(id)displayNameConstructorsWithContextIfNeeded:(Context*)arg1 node:(id)arg2 error:(id*)arg3 ;
+(char)showAllExtensions;
+(void)setShowAllExtensions:(char)arg1 ;
+(void)getExtensionRange:(NSRange*)arg1 secondaryExtensionRange:(NSRange*)arg2 fromFileName:(id)arg3 considerConfusables:(char)arg4 ;
-(id)init;
-(id)unlocalizedNameWithContext:(LSContext*)arg1 ;
-(id)unlocalizedNameWithContextIfNeeded:(Context*)arg1 asIfShowingAllExtensions:(id)arg2 ;
-(char)showExtensionWithContextIfNeeded:(Context*)arg1 asIfShowingAllExtensions:(id)arg2 ;
-(id)combineBaseName:(id)arg1 extension:(id)arg2 ;
-(void)getTransformedBaseName:(id*)arg1 extension:(id*)arg2 needsBiDiControlCharacters:(char)arg3 ;
-(id)unlocalizedNameWithContext:(LSContext*)arg1 asIfShowingAllExtensions:(id)arg2 ;
-(id)unlocalizedNameWithContextIfNeeded:(Context*)arg1 ;
-(void)getUnlocalizedBaseName:(id*)arg1 extension:(id*)arg2 requiresAdditionalBiDiControlCharacters:(char*)arg3 ;
-(id)initWithContextIfNeeded:(Context*)arg1 node:(id)arg2 isDirectory:(char)arg3 bundleClass:(const unsigned*)arg4 desiredDisplayName:(id)arg5 treatAsFSName:(char)arg6 ;
-(char)mayHideExtensionWithContextIfNeeded:(Context*)arg1 ;
-(char)canSetExtensionHiddenWithContext:(LSContext*)arg1 ;
-(void)initNodeBitsWithContextIfNeeded:(Context*)arg1 node:(id)arg2 isDirectory:(char)arg3 bundleClass:(const unsigned*)arg4 ;
-(void)initContentBitsWithDisplayName:(id)arg1 treatAsFSName:(char)arg2 ;
-(void)initNamePartsWithDisplayName:(id)arg1 ;
-(id)addApplicationExtensionIfMissingFromDisplayName:(id)arg1 ;
-(id)cleanSecondaryExtension:(id)arg1 ;
-(id)insertNameComponentBiDiControlCharacters:(id)arg1 ;
-(id)insertCompleteNameBiDiControlCharacters:(id)arg1 ;
-(id)transformBeforeCombining:(id)arg1 needsBiDiControlCharacters:(char*)arg2 ;
-(char)isStringNaturallyRTL:(id)arg1 ;
-(char)wantsHiddenExtension;
@end

