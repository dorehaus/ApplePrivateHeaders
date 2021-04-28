/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _NSActionRecord : NSObject {

	SEL _action;
	id _target;
	id _sender;
	NSString* _actionTitle;
	long long _tag;
	char _canUseResponderChain;
	char _fromMainMenu;

}

@property (readonly) SEL action;                               //@synthesize action=_action - In the implementation block
@property (readonly) long long tag;                            //@synthesize tag=_tag - In the implementation block
@property (copy,readonly) NSString * actionTitle;              //@synthesize actionTitle=_actionTitle - In the implementation block
@property (readonly) char canUseResponderChain;                //@synthesize canUseResponderChain=_canUseResponderChain - In the implementation block
@property (readonly) char fromMainMenu;                        //@synthesize fromMainMenu=_fromMainMenu - In the implementation block
-(void)dealloc;
-(SEL)action;
-(long long)tag;
-(id)initWithAction:(SEL)arg1 target:(id)arg2 sender:(id)arg3 ;
-(NSString *)actionTitle;
-(char)canUseResponderChain;
-(char)fromMainMenu;
@end
