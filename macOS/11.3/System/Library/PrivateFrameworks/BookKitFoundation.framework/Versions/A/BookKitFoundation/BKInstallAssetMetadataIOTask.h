/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookKitFoundation.framework/Versions/A/BookKitFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookKitFoundation/BKAssetMetadataIOTask.h>

@class NSURL, BKAssetMetadata, NSString, BKAssetMetadataIOTask;

@interface BKInstallAssetMetadataIOTask : BKAssetMetadataIOTask {

	char _moveOriginalBook;
	NSURL* _temporaryDirectory;
	BKAssetMetadata* _assetToUpdate;
	NSString* _interimFilenameOverride;
	BKAssetMetadataIOTask* _copyingSubtask;

}

@property (nonatomic,retain) BKAssetMetadataIOTask * copyingSubtask;              //@synthesize copyingSubtask=_copyingSubtask - In the implementation block
@property (nonatomic,retain) NSURL * temporaryDirectory;                          //@synthesize temporaryDirectory=_temporaryDirectory - In the implementation block
@property (nonatomic,retain) BKAssetMetadata * assetToUpdate;                     //@synthesize assetToUpdate=_assetToUpdate - In the implementation block
@property (nonatomic,copy) NSString * interimFilenameOverride;                    //@synthesize interimFilenameOverride=_interimFilenameOverride - In the implementation block
@property (assign,nonatomic) char moveOriginalBook;                               //@synthesize moveOriginalBook=_moveOriginalBook - In the implementation block
-(NSURL *)temporaryDirectory;
-(void)cancel;
-(void)setTemporaryDirectory:(NSURL *)arg1 ;
-(id)initWithSourceMetadata:(id)arg1 manager:(id)arg2 copyingSubtask:(id)arg3 ;
-(void)setAssetToUpdate:(BKAssetMetadata *)arg1 ;
-(void)setInterimFilenameOverride:(NSString *)arg1 ;
-(id)executeWithTargetDirectory:(id)arg1 error:(id*)arg2 ;
-(id)_subtaskTargetDirectoryWithInstalltDirectory:(id)arg1 error:(id*)arg2 ;
-(BKAssetMetadataIOTask *)copyingSubtask;
-(NSString *)interimFilenameOverride;
-(char)moveOriginalBook;
-(BKAssetMetadata *)assetToUpdate;
-(void)setMoveOriginalBook:(char)arg1 ;
-(void)setCopyingSubtask:(BKAssetMetadataIOTask *)arg1 ;
@end

