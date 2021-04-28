/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICCameraDeviceDelegate <ICDeviceDelegate>
@optional
-(char)cameraDevice:(id)arg1 shouldGetThumbnailOfItem:(id)arg2;
-(char)cameraDevice:(id)arg1 shouldGetMetadataOfItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didCompleteDeleteFilesWithError:(id)arg2;
-(void)cameraDevice:(id)arg1 didAddItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didRemoveItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceiveThumbnailForItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceiveMetadataForItem:(id)arg2;

@required
-(void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
-(void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceiveThumbnail:(CGImageRef)arg2 forItem:(id)arg3 error:(id)arg4;
-(void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
-(void)cameraDevice:(id)arg1 didRenameItems:(id)arg2;
-(void)cameraDeviceDidChangeCapability:(id)arg1;
-(void)cameraDevice:(id)arg1 didReceivePTPEvent:(id)arg2;
-(void)deviceDidBecomeReadyWithCompleteContentCatalog:(id)arg1;
-(void)cameraDeviceDidRemoveAccessRestriction:(id)arg1;
-(void)cameraDeviceDidEnableAccessRestriction:(id)arg1;

@end

