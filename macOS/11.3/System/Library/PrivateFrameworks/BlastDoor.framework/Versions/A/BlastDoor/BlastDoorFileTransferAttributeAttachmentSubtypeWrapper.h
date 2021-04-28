/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BlastDoorGeneralAttachmentInfo, BlastDoorStickerAttachmentInfo, BlastDoorLivePhotoAttachmentInfo, BlastDoorAudioMessageAttachmentInfo;

@interface BlastDoorFileTransferAttributeAttachmentSubtypeWrapper : NSObject {

	 fileTransferAttribute_AttachmentSubtype;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorGeneralAttachmentInfo * unspecified; 
@property (readonly,nonatomic) BlastDoorStickerAttachmentInfo * sticker; 
@property (readonly,nonatomic) BlastDoorLivePhotoAttachmentInfo * livePhoto; 
@property (readonly,nonatomic) BlastDoorAudioMessageAttachmentInfo * audioMessage; 
-(NSString *)description;
-(id)init;
-(unsigned long long)type;
-(BlastDoorLivePhotoAttachmentInfo *)livePhoto;
-(BlastDoorStickerAttachmentInfo *)sticker;
-(BlastDoorAudioMessageAttachmentInfo *)audioMessage;
-(BlastDoorGeneralAttachmentInfo *)unspecified;
@end

