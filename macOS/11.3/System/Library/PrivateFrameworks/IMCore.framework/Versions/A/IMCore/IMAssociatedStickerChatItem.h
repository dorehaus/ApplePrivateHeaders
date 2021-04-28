/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMAssociatedMessageChatItem.h>

@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem {

	NSString* _transferGUID;

}

@property (nonatomic,copy,readonly) NSString * transferGUID;              //@synthesize transferGUID=_transferGUID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(char)canDelete;
-(NSString *)transferGUID;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3 ;
@end
