/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) IMHandle * sender;                  //@synthesize sender=_sender - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(IMHandle *)sender;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

