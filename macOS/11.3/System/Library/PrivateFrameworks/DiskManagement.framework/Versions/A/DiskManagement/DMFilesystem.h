/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiskManagement.framework/Versions/A/DiskManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiskManagement/DiskManagement-Structs.h>
@interface DMFilesystem : NSObject {

	id _instPriv;

}
+(id)filesystemForPersonality:(id)arg1 ;
+(id)filesystemForType:(id)arg1 considerDisk:(DADiskRef)arg2 ;
+(id)filesystemForIOContent:(id)arg1 ;
+(void)ensureDatabaseAndForceRebuild:(char)arg1 ;
+(char)isCanonicalPersonalityNameEqual:(id)arg1 withInformalName:(id)arg2 ;
+(id)filesystems;
+(id)bootableFilesystems;
+(id)filesystemForLocalizedName:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)bundlePath;
-(id)minimumSize;
-(id)maximumSize;
-(id)formatArguments;
-(char)isValidName:(id)arg1 ;
-(id)filesystemType;
-(char)supportsJournaling;
-(char)supportsResize;
-(id)filesystemPersonality;
-(id)userVisibleName;
-(id)verifyExecutable;
-(id)verifyArguments;
-(id)repairExecutable;
-(id)repairArguments;
-(char)shouldBeUserFormattable;
-(void)hardcodedAttribute:(const char*)arg1 available:(char*)arg2 datum:(unsigned long long*)arg3 ;
-(id)initWithPersonality:(id)arg1 majorType:(id)arg2 locUsrVisName:(id)arg3 locUsrVisCrpName:(id)arg4 personalityDict:(id)arg5 bundlePath:(id)arg6 ;
-(char)bootable;
-(id)encryptedUserVisibleName;
-(id)unlocalizedUserVisibleName;
-(id)unlocalizedEncryptedUserVisibleName;
-(id)contentMask;
-(char)nameSanitizer:(id)arg1 correctedName:(id*)arg2 doToUpper:(char)arg3 illegalChars:(id)arg4 replacementChar:(id)arg5 leadingDotOK:(char)arg6 controlCharsOK:(char)arg7 minChars:(unsigned)arg8 maxChars:(unsigned)arg9 maxBytes:(unsigned)arg10 limitEncoding:(unsigned long long)arg11 ;
-(void)awareNameSanitizer:(id)arg1 allowToUpper:(char)arg2 allowReplace:(char)arg3 isValid:(char*)arg4 correctedName:(id*)arg5 ;
-(char)serverOnly;
-(id)userVisibleNameForLanguage:(id)arg1 ;
-(id)filesystemDictionary;
-(char)isValidName:(id)arg1 correctedName:(id*)arg2 ;
-(id)correctedVolumeNameForName:(id)arg1 ;
-(char)volumeNameIsCasePreserving;
-(char)volumeNameIsCaseSensitive;
-(char)fileObjectsAreCasePreserving;
-(char)fileObjectsAreCaseSensitive;
-(id)liveVerifyArguments;
-(id)percentageVerifyArguments;
-(id)verifyRepairOutputXMLArguments;
-(char)supportsPercentageVerifies;
-(char)supportsXMLVerifies;
-(char)canBeVerified;
-(char)canBeRepaired;
-(id)formatExecutable;
-(char)canBeFormatted;
-(char)canFormatWholeDisk;
-(char)requiresBooterToBoot;
-(char)requiresWholeDiskFormat;
-(char)canHavePermissionsOff;
-(char)supportsLiveVerify;
-(char)supportedByWindows;
-(char)supportedAsFullyFeaturedMacOS;
-(char)supportedAsFullyFeaturedMacOSHFS;
-(char)supportedByCoreStorage;
-(char)supportedByAPFS;
-(void)setVerifyRepairStringLocale:(id)arg1 ;
-(id)localizedVerifyRepairString:(id)arg1 found:(char*)arg2 ;
@end

