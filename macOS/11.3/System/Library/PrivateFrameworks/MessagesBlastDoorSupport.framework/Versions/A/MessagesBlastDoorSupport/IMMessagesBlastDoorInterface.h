/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesBlastDoorSupport.framework/Versions/A/MessagesBlastDoorSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessagesBlastDoorSupport/MessagesBlastDoorSupport-Structs.h>
@interface IMMessagesBlastDoorInterface : NSObject {

	 bd;

}
+(char)supportsFeature:(id)arg1 ;
-(id)init;
-(void)generatePreviewforAttachmentWithfileURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)defuseData:(id)arg1 forPreviewType:(unsigned char)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)generateMoviePreviewForAttachmentWithFileURL:(id)arg1 maxPixelDimension:(float)arg2 minThumbnailPxSize:(CGSize)arg3 scale:(float)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)defuseBalloonPluginPayload:(id)arg1 withIdentifier:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)generatePreviewforAudioMessageWithfileURL:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)diffuseTopLevelDictionary:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)generatePreviewforAudioMessageWithfileURL:(id)arg1 powerLevelsCount:(unsigned long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

