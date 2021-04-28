/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/DOMProvider.h>
#import <libobjc.A.dylib/AssociatedMessageDOMProvider.h>

@class NSMutableDictionary, NSString;

@interface StickerDOMProvider : DOMProvider <AssociatedMessageDOMProvider> {

	NSMutableDictionary* _stickerChatItemsToUpdate;
	NSMutableDictionary* _stickerChatItemsToUpdateAfterMediaLoad;

}

@property (nonatomic,retain) NSMutableDictionary * stickerChatItemsToUpdate;                            //@synthesize stickerChatItemsToUpdate=_stickerChatItemsToUpdate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerChatItemsToUpdateAfterMediaLoad;              //@synthesize stickerChatItemsToUpdateAfterMediaLoad=_stickerChatItemsToUpdateAfterMediaLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithController:(id)arg1 ;
-(id)DOM;
-(char)hasStickersToPlaceOnVideoElements;
-(void)videoElementLoadedForGUID:(id)arg1 ;
-(void)transcriptDidLayOut:(id)arg1 ;
-(void)parseAssociatedChatItem:(id)arg1 appendToElement:(id)arg2 withChatItemElement:(id)arg3 ;
-(id)createInitialStickerElementForChatItem:(id)arg1 ;
-(void)addChatItemToUpdateQueue:(id)arg1 forElement:(id)arg2 withChatItemElement:(id)arg3 ;
-(id)setStickerImageSource:(id)arg1 chatItem:(id)arg2 ;
-(void)setUpDefaultSizeForSticker:(id)arg1 ;
-(char)setUpInitialSizeProperties:(id)arg1 chatItem:(id)arg2 imageSourcePath:(id)arg3 ;
-(void)setRotation:(id)arg1 withRadians:(float)arg2 ;
-(id)fileTransferForGUID:(id)arg1 ;
-(void)updateStickerChatItems;
-(NSMutableDictionary *)stickerChatItemsToUpdateAfterMediaLoad;
-(CGSize)resolveStickersForChatItemElement:(id)arg1 ;
-(IMAssociatedMessageGeometryDescriptor)createGeometryDescriptor:(id)arg1 ;
-(CGSize)updateStickerSize:(id)arg1 parentClientSize:(CGSize*)arg2 geometryDescriptor:(IMAssociatedMessageGeometryDescriptor*)arg3 ;
-(void)setStickerPosition:(id)arg1 stickerSize:(CGSize*)arg2 parentClientSize:(CGSize*)arg3 geometryDescriptor:(IMAssociatedMessageGeometryDescriptor*)arg4 ;
-(void)compareHeightsForScalars:(id)arg1 stickerSize:(CGSize*)arg2 chatItemHeight:(unsigned)arg3 maxBottomMargin:(unsigned*)arg4 maxTopMargin:(unsigned*)arg5 geometryDescriptor:(IMAssociatedMessageGeometryDescriptor*)arg6 ;
-(void)compareWidthsForScalars:(id)arg1 stickerSize:(CGSize*)arg2 messageTextWidth:(unsigned)arg3 maxWidthPadding:(unsigned*)arg4 fromMe:(char)arg5 geometryDescriptor:(IMAssociatedMessageGeometryDescriptor*)arg6 ;
-(id)getStickerSpacerElement:(id)arg1 ;
-(double)getScaleFactor:(double)arg1 stickerElement:(id)arg2 geometryDescriptor:(IMAssociatedMessageGeometryDescriptor*)arg3 ;
-(double)getAttribute:(id)arg1 forStickerElement:(id)arg2 ;
-(double)getStickerHeight:(CGSize*)arg1 withRadians:(double)arg2 ;
-(double)getStickerWidth:(CGSize*)arg1 withRadians:(double)arg2 ;
-(NSMutableDictionary *)stickerChatItemsToUpdate;
-(void)setStickerChatItemsToUpdate:(NSMutableDictionary *)arg1 ;
-(void)setStickerChatItemsToUpdateAfterMediaLoad:(NSMutableDictionary *)arg1 ;
@end

