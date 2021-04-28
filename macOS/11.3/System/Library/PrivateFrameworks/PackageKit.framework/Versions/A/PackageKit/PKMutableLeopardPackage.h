/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKMutablePackage.h>

@interface PKMutableLeopardPackage : PKMutablePackage
+(id)_bundleAttributeDictionaryForComponent:(id)arg1 ;
+(id)_intendedPayloadEncodingForMinimumOSVersion:(id)arg1 ;
+(id)_intendedPayloadEncodingForPackageInfo:(id)arg1 ;
-(void)_setComponents:(id)arg1 ;
-(void)_setPayloadRoot:(id)arg1 ;
-(void)_setBaselinePayloadRoot:(id)arg1 ;
-(void)_setMapBaselineNamesUsingBlock:(/*^block*/id)arg1 ;
-(void)_setScriptRoot:(id)arg1 ;
-(void)_setMaskExpressions:(id)arg1 ;
-(void)_setModifyOwnershipUsingBlock:(/*^block*/id)arg1 ;
-(void)_setModifyModeUsingBlock:(/*^block*/id)arg1 ;
-(id)_effectivePayloadRoot;
-(char)_writeBomToFile:(id)arg1 error:(id*)arg2 modifyOwnershipUsingBlock:(/*^block*/id)arg3 modifyModeUsingBlock:(/*^block*/id)arg4 ;
-(char)_writePayloadToFile:(id)arg1 usingBom:(id)arg2 tempDir:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(char)_writeScriptsToFile:(id)arg1 error:(id*)arg2 ;
-(void)_updatePackageInfoWithComponents;
-(void)setModifyModeUsingBlock:(/*^block*/id)arg1 ;
-(void)_setStaticObsoleteFiles:(id)arg1 ;
-(void)_setStaticObsoleteDirectories:(id)arg1 ;
-(void)_staticObsoleteFilesOrRecursiveDirectories:(id)arg1 ;
-(id)_generateBomPathToRealPathDictionaryWithDestinationPath:(id)arg1 ;
-(void)_adjustOwnershipOnPath:(id)arg1 inBom:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_adjustModeOnPath:(id)arg1 inBom:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)_createUpdatePayloadAtPath:(id)arg1 fromBaseline:(id)arg2 toNew:(id)arg3 currentPrefix:(id)arg4 currentComponent:(id)arg5 componentMap:(id)arg6 tempDir:(id)arg7 totalPayloadSize:(unsigned long long*)arg8 didCreate:(char*)arg9 error:(id*)arg10 ;
-(char)_writeRoot:(id)arg1 toCompressedCPIO:(id)arg2 usingBom:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)setComponents:(id)arg1 ;
-(void)setMaskExpressions:(id)arg1 ;
-(void)setPayloadRoot:(id)arg1 ;
-(void)setScriptRoot:(id)arg1 ;
-(void)setModifyOwnershipUsingBlock:(/*^block*/id)arg1 ;
-(void)setBaselinePayloadRoot:(id)arg1 ;
-(char)_writeToArchive:(id)arg1 atPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)setMapBaselineNamesUsingBlock:(/*^block*/id)arg1 ;
@end

