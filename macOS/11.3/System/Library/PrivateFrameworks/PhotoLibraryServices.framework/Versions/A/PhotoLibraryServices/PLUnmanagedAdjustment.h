/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString, NSDate, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject

@property (nonatomic,retain) NSNumber * adjustmentBaseImageFormat; 
@property (nonatomic,retain) NSString * adjustmentFormatIdentifier; 
@property (nonatomic,retain) NSString * adjustmentFormatVersion; 
@property (nonatomic,retain) NSDate * adjustmentTimestamp; 
@property (nonatomic,retain) NSString * editorLocalizedName; 
@property (nonatomic,retain) NSString * otherAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * similarToOriginalAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
@property (assign,nonatomic) unsigned adjustmentRenderTypes; 
+(id)entityName;
+(id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1 ;
+(id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2 ;
+(id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2 ;
+(id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id*)arg4 ;
-(void)awakeFromInsert;
-(void)willSave;
-(char)supportsCloudUpload;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(char)isSyncableChange;
@end

