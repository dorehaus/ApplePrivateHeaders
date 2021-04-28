/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputMenuUI.framework/Versions/A/TextInputMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputMenuUI/TextInputMenuUI-Structs.h>
#import <libobjc.A.dylib/TSMMessageProtocol.h>

@class InputSourceOwner;

@interface TSMMessageGetTIMTargetAppInfoResponse : NSObject <TSMMessageProtocol> {

	InputSourceOwner* _inputSourceOwner;

}

@property (nonatomic,readonly) InputSourceOwner * inputSourceOwner;              //@synthesize inputSourceOwner=_inputSourceOwner - In the implementation block
-(InputSourceOwner *)inputSourceOwner;
-(void)dealloc;
-(CFDataRef)copyMessageReceiver:(int)arg1 withInfo:(id)arg2 ;
-(void)replyReceiver:(int)arg1 withInfo:(id)arg2 ;
@end
