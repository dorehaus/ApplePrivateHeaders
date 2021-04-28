/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVTouchBarCaptureInputSourceItem : NSObject {

	char _builtIn;
	char _noAudioItem;
	char _enabled;
	NSString* _title;
	id _representedObject;

}

@property (readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (getter=isBuiltIn,readonly) char builtIn;                      //@synthesize builtIn=_builtIn - In the implementation block
@property (getter=isNoAudioItem,readonly) char noAudioItem;              //@synthesize noAudioItem=_noAudioItem - In the implementation block
@property (getter=isEnabled,readonly) char enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (retain) id representedObject;                                 //@synthesize representedObject=_representedObject - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(char)isEnabled;
-(void)setRepresentedObject:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(NSString *)title;
-(id)representedObject;
-(char)isBuiltIn;
-(id)initWithTitle:(id)arg1 builtIn:(char)arg2 noAudioItem:(char)arg3 enabled:(char)arg4 ;
-(char)isNoAudioItem;
@end

